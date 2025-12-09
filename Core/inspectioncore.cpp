#include "inspectioncore.h"

#include "../Script/Config/config_application.h"
#include <QDir>
#include <QTimer>
#include <QDebug>

InspectionCore::InspectionCore(QObject *parent)
    : QThread{parent}
{
    isRun = true;
    // create tcp backend // создать Бэкенд tcp
    scopedTCPBackendClient.reset(new TCPBackendClient);
    defaultResultFlags = "None";

    inputBackendQueues = QQueue<InputBackendInfo>();
    isReadyCamInspectProcess = true;
    ResetOutputBackendInfo();

    // ========== ИНИЦИАЛИЗАЦИЯ СТАТИСТИКИ ==========
    currentMeasurementCount = 0;
    requiredMeasurements = 4; // Собираем 4 измерения
    isCollectingStats = false;
    // ==============================================

    connect(this, SIGNAL(sendInputInspect_Signal(InputBackendInfo&)), this, SLOT(sendInputInspect_Slot(InputBackendInfo&)));
    connect(scopedTCPBackendClient.data(), SIGNAL(receiveMessage_Signal(OutputBackendInfo&)), this, SLOT(receiveInspResult_TCPBackendClient_Slot(OutputBackendInfo&)));
}

InspectionCore::~InspectionCore()
{
    scopedTCPBackendClient.data()->Disconnect();
    scopedTCPBackendClient.data()->deleteLater();
    isRun = false;
    Resume();
    this->quit();
    this->wait();
}

void InspectionCore::run()
{
    while(isRun)
    {
        if(isTotalEmptyQueue())
        {
            Pause();
            sync.lock();
            if(pause)
                pauseCond.wait(&sync);
            sync.unlock();
        }
        QThread::msleep(10);
        if(inputBackendQueues.isEmpty() || !isReadyCamInspectProcess)
            continue;
        currentInputBackend = inputBackendQueues.dequeue();
        isReadyCamInspectProcess = false;
        processedTimes.start();
        emit sendInputInspect_Signal(currentInputBackend);
    }
}

void InspectionCore::Resume()
{
    sync.lock();
    pause = false;
    sync.unlock();
    pauseCond.wakeAll();
}

void InspectionCore::Pause()
{
    sync.lock();
    pause = true;
    sync.unlock();
}

bool InspectionCore::isTotalEmptyQueue()
{
    if(!inputBackendQueues.isEmpty())
        return false;
    return true;
}

void InspectionCore::ResetOutputBackendInfo()
{
    outputBackendInfo.function = BACKEND_FUNCTION::INSPECT_DONE;
    outputBackendInfo.defectInfos.clear();
    outputBackendInfo.defectCodes.clear();
    for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i)
    {
        outputBackendInfo.images[(TRACK_INDEX)i] = QImage();
        outputBackendInfo.operatorImages[(TRACK_INDEX)i] = QImage();
        outputBackendInfo.operatorImagePaths[(TRACK_INDEX)i] = "";
    }
    outputBackendInfo.moldResult = MOLD_RESULT::MOLD_PASS;
    outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
    outputBackendInfo.processTime = 0;
}

void InspectionCore::RecipeChanged()
{
    scopedTCPBackendClient.data()->RecipeChanged();
}

// ==================== ВСПОМОГАТЕЛЬНЫЕ МЕТОДЫ ДЛЯ СТАТИСТИКИ ====================

QString InspectionCore::createStatsKey(int trackIndex, const QString& defectName, const QString& parameter) {
    return QString("%1_%2_%3").arg(trackIndex).arg(defectName).arg(parameter);
}

BACKEND_RESULT InspectionCore::convertStringToDefectCode(const QString& defectStr) {
    // Простое преобразование строки в enum
    if (defectStr == "HEIGHT") return BACKEND_RESULT::HEIGHT;
    if (defectStr == "WEIGHT") return BACKEND_RESULT::WEIGHT;
    if (defectStr == "NON_ROUND_SHAPE") return BACKEND_RESULT::NON_ROUND_SHAPE;
    if (defectStr == "BODYR_DIMENSION") return BACKEND_RESULT::BODYR_DIMENSION;
    if (defectStr == "LEAN") return BACKEND_RESULT::LEAN;
    if (defectStr == "TILT") return BACKEND_RESULT::TILT;
    if (defectStr == "F_DIMENSION") return BACKEND_RESULT::F_DIMENSION;
    if (defectStr == "A_DIMENSION") return BACKEND_RESULT::A_DIMENSION;
    if (defectStr == "T_DIMENSION") return BACKEND_RESULT::T_DIMENSION;
    if (defectStr == "E_DIMENSION") return BACKEND_RESULT::E_DIMENSION;
    if (defectStr == "D_DIMENSION") return BACKEND_RESULT::D_DIMENSION;
    if (defectStr == "B_DIMENSION") return BACKEND_RESULT::B_DIMENSION;
    if (defectStr == "S_DIMENSION") return BACKEND_RESULT::S_DIMENSION;
    if (defectStr == "H_DIMENSION") return BACKEND_RESULT::H_DIMENSION;
    if (defectStr == "LUGT_DIMENSION") return BACKEND_RESULT::LUGT_DIMENSION;
    if (defectStr == "LUGT1_DIMENSION") return BACKEND_RESULT::LUGT1_DIMENSION;
    if (defectStr == "D_ANGLE_DIMENSION") return BACKEND_RESULT::D_ANGLE_DIMENSION;
    if (defectStr == "FLANGE_DIMENSION") return BACKEND_RESULT::FLANGE_DIMENSION;
    if (defectStr == "KNOCKOUT_DIMENSION") return BACKEND_RESULT::KNOCKOUT_DIMENSION;
    if (defectStr == "PUSHUP_DIMENSION") return BACKEND_RESULT::PUSHUP_DIMENSION;
    if (defectStr == "CODE_NUMBER") return BACKEND_RESULT::CODE_NUMBER;

    return BACKEND_RESULT::PASS;
}

void InspectionCore::accumulateStatisticsFromOutput(const OutputBackendInfo& output) {
    QStringList data = output.resultString.split("&");
    if(data.count() < 2) {
        qDebug() << "[Stats] Error: Invalid output format";
        return;
    }

    QStringList defectInfoStrings = data[1].split("$");
    qDebug() << "[Stats] Found" << defectInfoStrings.count() << "defect infos for accumulation";

    for (const QString& defectStr : defectInfoStrings) {
        QStringList parts = defectStr.split(";");
        if(parts.count() >= 5) {
            int trackIndex = parts[0].toInt();
            QString defectName = parts[1];
            QString parameter = parts[2];
            double value = parts[3].toDouble();
            bool isPass = parts[4].toLower() == "true";

            // Создаем ключ в том же формате, что и в createStatsKey
            QString key = QString("%1_%2_%3").arg(trackIndex).arg(defectName).arg(parameter);
            statsCollector.addMeasurement(key, value, isPass);

            qDebug() << "[Stats] Accumulated:" << key << "=" << value << (isPass ? "PASS" : "FAIL");
        }
        else {
            qDebug() << "[Stats] Warning: Skipping defect info with" << parts.count() << "parts:" << defectStr;
        }
    }
}

OutputBackendInfo InspectionCore::createFinalResultWithStatistics() {
    OutputBackendInfo result;
    result.function = BACKEND_FUNCTION::INSPECT_DONE;
    result.dateTime = QDateTime::currentDateTime();
    result.processTime = processedTimes.elapsed();

    // Копируем изображения из последнего сохраненного запроса
    for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i) {
        result.images[(TRACK_INDEX)i] = currentStatsInput.images[(INSPECT_SEQUENCE_CAMERA_POSITION)(i+1)];
    }

    qDebug() << "[Stats] Creating final result with" << statsCollector.getKeys().count() << "parameters";

    for (const QString& key : statsCollector.getKeys()) {
        // Парсим ключ: trackIndex_defectName_parameter
        QStringList parts = key.split("_");
        if (parts.size() < 3) continue;

        int trackIndex = parts[0].toInt();
        QString defectName = parts[1];

        // Восстанавливаем parameter (может содержать пробелы и "_")
        QString parameter = parts[2];
        for (int i = 3; i < parts.size(); ++i) {
            parameter += " " + parts[i]; // Используем пробел вместо "_"
        }

        DefectInfoItem item;
        item.trackIndex = (TRACK_INDEX)trackIndex;
        item.defect = convertStringToDefectCode(defectName);
        item.parameter = parameter;
        item.minValue = statsCollector.getMin(key);
        item.maxValue = statsCollector.getMax(key);
        item.pixelValue = (item.minValue + item.maxValue) / 2.0; // Среднее значение
        item.mmValue = item.pixelValue;
        item.isPass = statsCollector.getLastPassStatus(key);
        item.measurementCount = statsCollector.getCount(key);

        result.defectInfos.append(item);

        // Добавляем defect code если есть дефект
        if (!item.isPass && item.defect != BACKEND_RESULT::PASS) {
            result.defectCodes.append(item.defect);
        }

        qDebug() << "[Stats] Final:" << defectName << ":" << parameter
                 << "min=" << item.minValue
                 << "max=" << item.maxValue
                 << "count=" << item.measurementCount
                 << (item.isPass ? "PASS" : "FAIL");
    }

    // Mold result - по умолчанию PASS
    result.moldResult = MOLD_RESULT::MOLD_PASS;

    // Подготовка папок для сохранения изображений (аналогично старой логике)
    QString ImageFolder = ConfigApplication::instance()->m_commonInfo.saving_image_info.save_dir + "/" +
                          ConfigApplication::instance()->m_strInspectImageName + "/" +\
                                                                                      result.dateTime.toString("yyyy_MM_dd");
    if(!QDir(ImageFolder).exists()) {
        QDir().mkdir(ImageFolder);
    }

    ImageFolder = ImageFolder.replace(ConfigApplication::instance()->m_strInspectImageName,
                                      ConfigApplication::instance()->m_strOperatorImageName);
    if(!QDir(ImageFolder).exists()) {
        QDir().mkdir(ImageFolder);
    }

    result.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
    if(result.defectCodes.count() > 0) {
        result.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(result.defectCodes[0]);
    }
    else {
        result.defectCodes.append(BACKEND_RESULT::PASS);
    }

    ImageFolder += ("/" + result.resultString);
    if(!QDir(ImageFolder).exists()) {
        QDir().mkdir(ImageFolder);
    }

    for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i) {
        result.operatorImagePaths[(TRACK_INDEX)i] =
            QString("%1/%2%3.jpg")
                .arg(ImageFolder)
                .arg(result.dateTime.toString("yyyyMMddhhmmsszzz"))
                .arg(ConfigApplication::instance()->m_hashExtendImageName[(TRACK_INDEX)i]);
    }

    return result;
}

void InspectionCore::resetStatistics() {
    statsCollector.reset();
    currentMeasurementCount = 0;
    isCollectingStats = false;
    qDebug() << "[Stats] Statistics reset";
}

void InspectionCore::requestNextMeasurement() {
    qDebug() << "[Stats] Requesting next measurement in 50ms...";
    QTimer::singleShot(50, this, &InspectionCore::handleNextMeasurement);
}

void InspectionCore::handleNextMeasurement() {
    if (isCollectingStats && scopedTCPBackendClient && scopedTCPBackendClient.data()->isConnected) {
        qDebug() << "[Stats] Sending repeat measurement request";
        scopedTCPBackendClient.data()->Send(currentStatsInput);
    } else {
        qDebug() << "[Stats] Cannot send measurement: not collecting or not connected";
    }
}

void InspectionCore::startStatisticsCollection(InputBackendInfo &input) {
    qDebug() << "[Stats] Starting statistics collection";

    resetStatistics();
    isCollectingStats = true;
    currentStatsInput = input;
    requiredMeasurements = 4; // Собираем 4 измерения

    // Первое измерение
    scopedTCPBackendClient.data()->Send(input);
}

// ==================== ОСНОВНОЙ СЛОТ ДЛЯ ОБРАБОТКИ РЕЗУЛЬТАТОВ ====================

void InspectionCore::receiveInspResult_TCPBackendClient_Slot(OutputBackendInfo &output) {
    qDebug() << "[InspectionCore] Received function:" << output.function;

    // ========== ОБРАБОТКА СБОРА СТАТИСТИКИ ==========
    if (isCollectingStats &&
        (output.function == BACKEND_FUNCTION::INSPECT_DONE ||
         output.function == BACKEND_FUNCTION::VALIDATION_INSPECT_DONE)) {

        qDebug() << "[Stats] Processing measurement" << (currentMeasurementCount + 1) << "of" << requiredMeasurements;

        // Накопление статистики
        accumulateStatisticsFromOutput(output);
        currentMeasurementCount++;

        emit statisticsProgress(currentMeasurementCount, requiredMeasurements);

        // Проверяем, собрали ли достаточно
        if (currentMeasurementCount >= requiredMeasurements) {
            qDebug() << "[Stats] Collected all" << requiredMeasurements << "measurements";

            // Формируем финальный результат
            OutputBackendInfo finalResult = createFinalResultWithStatistics();

            // Отправляем в QML
            emit sendFinishInspect_Signal(finalResult);

            // Сбрасываем статистику
            resetStatistics();
        } else {
            // Запрашиваем следующее измерение
            requestNextMeasurement();
        }

        return; // Не выполняем старую логику
    }

    // ========== СТАРАЯ ЛОГИКА (для обратной совместимости) ==========
    if(output.function == BACKEND_FUNCTION::INSPECT_DONE ||
        output.function == BACKEND_FUNCTION::VALIDATION_INSPECT_DONE) {

        ConfigApplication::instance()->WriteDebugLog("[Inspection Core]", "Receive inspect result");

        outputBackendInfo.function = output.function;
        for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i) {
            outputBackendInfo.images[(TRACK_INDEX)i] = currentInputBackend.images[(INSPECT_SEQUENCE_CAMERA_POSITION)(i+1)];
        }
        outputBackendInfo.operatorImages = output.operatorImages;
        outputBackendInfo.dateTime = QDateTime::currentDateTime();

        // ПРАВИЛЬНЫЙ ПАРСИНГ СТРОКИ РЕЗУЛЬТАТА
        QStringList data = output.resultString.split("&");
        qDebug() << "[Parsing] Data parts:" << data.count();

        if(data.count() >= 2) {
            bool ok;

            // Часть 0: defect codes (track_index;defect_code$...)
            QStringList defectCodeStrings = data[0].split("$");
            qDebug() << "[Parsing] Defect codes count:" << defectCodeStrings.count();

            for (int i = 0; i < defectCodeStrings.count(); ++i) {
                QStringList codeParts = defectCodeStrings[i].split(";");
                if(codeParts.count() == 2) {
                    int value = codeParts[1].toInt(&ok);
                    if(ok) {
                        outputBackendInfo.defectCodes.append((BACKEND_RESULT)value);
                        qDebug() << "[Parsing] Added defect code:" << value << "for track" << codeParts[0];
                    }
                }
            }

            // Часть 1: defect infos (track_index;DEFECT_NAME;parameter;value;is_pass$...)
            QStringList defectInfoStrings = data[1].split("$");
            qDebug() << "[Parsing] Defect infos count:" << defectInfoStrings.count();

            for (int i = 0; i < defectInfoStrings.count(); ++i) {
                QStringList infoParts = defectInfoStrings[i].split(";");
                qDebug() << "[Parsing] Defect info" << i << "parts:" << infoParts.count() << "->" << defectInfoStrings[i];

                if(infoParts.count() == 5) {
                    int trackIndex = infoParts[0].toInt(&ok);
                    if(!ok) continue;

                    QString defectName = infoParts[1];
                    QString parameter = infoParts[2];
                    double value = infoParts[3].toDouble(&ok);
                    if(!ok) continue;

                    bool isPass = infoParts[4].toLower() == "true";

                    DefectInfoItem defectInfoItem;
                    defectInfoItem.trackIndex = (TRACK_INDEX)trackIndex;
                    defectInfoItem.defect = convertStringToDefectCode(defectName);
                    defectInfoItem.parameter = parameter;
                    defectInfoItem.pixelValue = value;
                    defectInfoItem.mmValue = value;
                    defectInfoItem.isPass = isPass;

                    // Для обратной совместимости: min/max = текущее значение
                    defectInfoItem.minValue = value;
                    defectInfoItem.maxValue = value;
                    defectInfoItem.measurementCount = 1;

                    outputBackendInfo.defectInfos.append(defectInfoItem);

                    qDebug() << "[Parsing] Added defect:" << defectName << parameter << "=" << value << (isPass ? "PASS" : "FAIL");
                }
                else if (infoParts.count() == 4) {
                    // Возможен формат без is_pass
                    qDebug() << "[Parsing] Warning: 4 parts format:" << defectInfoStrings[i];
                }
                else {
                    qDebug() << "[Parsing] Error: Unexpected number of parts (" << infoParts.count() << ") in:" << defectInfoStrings[i];
                }
            }

            // Часть 2: mold result
            if(data.count() >= 3) {
                int value = data[2].toInt(&ok);
                if(ok && value) {
                    outputBackendInfo.moldResult = (MOLD_RESULT)value;
                }
            }
        }
        else {
            qDebug() << "[Parsing] Error: Invalid data format, expected at least 2 parts, got" << data.count();
        }

        // Подготовка папок для сохранения изображений
        QString ImageFolder = ConfigApplication::instance()->m_commonInfo.saving_image_info.save_dir + "/" +
                              ConfigApplication::instance()->m_strInspectImageName + "/" +\
                                                                                          outputBackendInfo.dateTime.toString("yyyy_MM_dd");
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }

        ImageFolder = ImageFolder.replace(ConfigApplication::instance()->m_strInspectImageName,
                                          ConfigApplication::instance()->m_strOperatorImageName);
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }

        outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
        if(outputBackendInfo.defectCodes.count() > 0)
        {
            outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(outputBackendInfo.defectCodes[0]);
        }
        else
        {
            outputBackendInfo.defectCodes.append(BACKEND_RESULT::PASS);
        }

        ImageFolder += ("/" + outputBackendInfo.resultString);
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }

        for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i)
        {
            outputBackendInfo.operatorImagePaths[(TRACK_INDEX)i] =
                QString("%1/%2%3.jpg")
                    .arg(ImageFolder)
                    .arg(outputBackendInfo.dateTime.toString("yyyyMMddhhmmsszzz"))
                    .arg(ConfigApplication::instance()->m_hashExtendImageName[(TRACK_INDEX)i]);
        }

        outputBackendInfo.processTime = processedTimes.elapsed();
        emit sendFinishInspect_Signal(outputBackendInfo);
    }
    else if(output.function == BACKEND_FUNCTION::CALIBRATION_INSPECT_DONE) {
        ConfigApplication::instance()->WriteDebugLog("[Inspection Core]", "Receive calibration camera position result");

        outputBackendInfo.function = output.function;
        for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i) {
            outputBackendInfo.images[(TRACK_INDEX)i] = currentInputBackend.images[(INSPECT_SEQUENCE_CAMERA_POSITION)(i+1)];
        }
        outputBackendInfo.operatorImages = output.operatorImages;
        outputBackendInfo.dateTime = QDateTime::currentDateTime();

        // process result string defect_infos$defect_code$mold_result // Обработать Результат Строки defect_infos$defect_code$mold_result
        QStringList data = output.resultString.split("&");
        if(data.count() == 3)
        {
            bool ok;
            // defect code // код дефекта
            QStringList subSplitData = data[0].split("$");
            for (int i = 0; i < subSplitData.count(); ++i)
            {
                QStringList subSplitData1 = subSplitData[i].split(";");
                if(subSplitData1.count() != 2)
                    continue;

                int value = subSplitData1[1].toInt(&ok);
                if(!ok)
                    continue;
                outputBackendInfo.defectCodes.append((BACKEND_RESULT)value);
            }


            // defect info // информация о дефекте
            subSplitData = data[1].split("$");

            if(subSplitData.count() == 5)
            {
                double dvalue = subSplitData[0].toDouble(&ok);
                if(ok)
                    ConfigApplication::instance()->m_commonInfo.appSetting.cameraConfig[TRACK_INDEX::CAMERA_1].resolution = dvalue;

                dvalue = subSplitData[1].toDouble(&ok);
                if(ok)
                    ConfigApplication::instance()->m_strCalibCameraPosData.m_hashHidedBottleHeight[TRACK_INDEX::CAMERA_1] = dvalue;

                //
                dvalue = subSplitData[2].toDouble(&ok);
                if(ok)
                    ConfigApplication::instance()->m_strCalibCameraPosData.maxBottleHeightInBottom = dvalue;

                //
                dvalue = subSplitData[3].toDouble(&ok);
                if(ok)
                    ConfigApplication::instance()->m_commonInfo.appSetting.cameraConfig[TRACK_INDEX::CAMERA_2].resolution = dvalue;

                dvalue = subSplitData[4].toDouble(&ok);
                if(ok)
                    ConfigApplication::instance()->m_strCalibCameraPosData.m_hashHidedBottleHeight[TRACK_INDEX::CAMERA_2] = dvalue;

            }
            else
            {
                outputBackendInfo.defectCodes.clear();
                outputBackendInfo.defectCodes.append(BACKEND_RESULT::PROCESS_ERROR);
            }

        }

        // prepare folder for save image // Подготовительная папка для сохранения изображения
        QString ImageFolder = ConfigApplication::instance()->m_commonInfo.saving_image_info.save_dir + "/" +
                              ConfigApplication::instance()->m_strInspectImageName + "/" +\
                                                                                          outputBackendInfo.dateTime.toString("yyyy_MM_dd");
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }
        // prepare folder for save image // Подготовительная папка для сохранения изображения
        ImageFolder = ImageFolder.replace(ConfigApplication::instance()->m_strInspectImageName,
                                          ConfigApplication::instance()->m_strOperatorImageName);
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }
        outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
        if(outputBackendInfo.defectCodes.count() > 0)
        {
            outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(outputBackendInfo.defectCodes[0]);
        }
        else
        {
            outputBackendInfo.defectCodes.append(BACKEND_RESULT::PASS);
        }
        ImageFolder += ("/" + outputBackendInfo.resultString);
        if(!QDir(ImageFolder).exists())
        {
            QDir().mkdir(ImageFolder);
        }
        for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i)
        {
            outputBackendInfo.operatorImagePaths[(TRACK_INDEX)i] =
                QString("%1/%2%3.jpg")
                    .arg(ImageFolder)
                    .arg(outputBackendInfo.dateTime.toString("yyyyMMddhhmmsszzz"))
                    .arg(ConfigApplication::instance()->m_hashExtendImageName[(TRACK_INDEX)i]);
        }
        outputBackendInfo.processTime = processedTimes.elapsed();
        emit sendFinishInspect_Signal(outputBackendInfo);
    }

    else if(output.function == BACKEND_FUNCTION::NON_ROUND_SHAPE_INSPECT_DONE)
    {
        ConfigApplication::instance()->WriteDebugLog("[Inspection Core]", "Receive inspect Bottom camera result");

        outputBackendInfo.function = output.function;
        // outputBackendInfo.images =  currentInputBackend.images; // выходной Бэкенд информации.изображения =  текущего ввода Бэкенд.изображения;
        outputBackendInfo.images[TRACK_INDEX::CAMERA_1] = currentInputBackend.images[INSPECT_SEQUENCE_CAMERA_POSITION::BOTTOM2];
        outputBackendInfo.operatorImages = output.operatorImages;

        // process result string defect_infos$defect_code // Обработка результирующей строки defect_infos$defect_code
        QStringList data = output.resultString.split("&");
        if(data.count() == 2)
        {
            bool ok;
            // defect code // код дефекта
            QStringList subSplitData = data[0].split("$");
            for (int i = 0; i < subSplitData.count(); ++i)
            {
                QStringList subSplitData1 = subSplitData[i].split(";");
                if(subSplitData1.count() != 2)
                    continue;

                int value = subSplitData1[1].toInt(&ok);
                if(!ok)
                    continue;
                outputBackendInfo.defectCodes.append((BACKEND_RESULT)value);
            }


            // defect info // информация о дефекте
            subSplitData = data[1].split("$");
            for (int i = 0; i < subSplitData.count(); ++i)
            {
                QStringList subSplitData1 = subSplitData[i].split(";");
                if(subSplitData1.count() != 5)
                    continue;

                int value = subSplitData1[0].toInt(&ok);
                if(!ok)
                    continue;
                double dvalue = subSplitData1[3].toDouble(&ok);
                if(!ok)
                    continue;

                DefectInfoItem defectInfoItem;
                defectInfoItem.trackIndex = (TRACK_INDEX)value;
                defectInfoItem.defect = ConfigApplication::instance()->ConvertBEStringToDefectCode(subSplitData1[1]);
                defectInfoItem.parameter = subSplitData1[2];
                defectInfoItem.pixelValue = dvalue;
                defectInfoItem.mmValue = dvalue;
                defectInfoItem.isPass = subSplitData1[4] == "True";
                outputBackendInfo.defectInfos.append(defectInfoItem);
            }
        }

        // // prepare folder for save image // // подготовьте папку для сохранения изображения
        // QString ImageFolder = ConfigApplication::instance()->m_commonInfo.saving_image_info.save_dir + "/" +
        //                       ConfigApplication::instance()->m_strInspectImageName + "/" +\
        //                                                                                   QDateTime::currentDateTime().toString("yyyy_MM_dd");
        // if(!QDir(ImageFolder).exists())
        // {
        //     QDir().mkdir(ImageFolder);
        // }
        // // prepare folder for save image // // подготовьте папку для сохранения изображения
        // ImageFolder = ImageFolder.replace(ConfigApplication::instance()->m_strInspectImageName,
        //                                   ConfigApplication::instance()->m_strOperatorImageName);
        // if(!QDir(ImageFolder).exists())
        // {
        //     QDir().mkdir(ImageFolder);
        // }
        outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
        if(outputBackendInfo.defectCodes.count() > 0)
        {
            outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(outputBackendInfo.defectCodes[0]);
        }
        else
        {
            outputBackendInfo.defectCodes.append(BACKEND_RESULT::PASS);
        }
        // ImageFolder += ("/" + outputBackendInfo.resultString); Папка изображений += ("/" + вывод Бэкенд-информации.строка результата);
        // if(!QDir(ImageFolder).exists())
        // {
        //     QDir().mkdir(ImageFolder);
        // }
        // for (int i = 0; i < ConfigApplication::instance()->m_nCamNum; ++i)
        // {
        //     outputBackendInfo.operatorImagePaths[(TRACK_INDEX)i] =
        //         QString("%1/%2%3.jpg")
        //             .arg(ImageFolder)
        //             .arg(QDateTime::currentDateTime().toString("yyyyMMddhhmmsszzz"))
        //             .arg(ConfigApplication::instance()->m_hashExtendImageName[(TRACK_INDEX)i]);
        // }
        outputBackendInfo.processTime = processedTimes.elapsed();
        emit sendFinishInspect_Signal(outputBackendInfo);
    }
    else if(output.function == BACKEND_FUNCTION::TOP_INSPECT_DONE ||
             output.function == BACKEND_FUNCTION::CORRECTION_INSPECT_DONE)
    {
        ConfigApplication::instance()->WriteDebugLog("[Inspection Core]", "Receive inspect Top camera result");

        outputBackendInfo.function = output.function;
        outputBackendInfo.images[TRACK_INDEX::CAMERA_2] = currentInputBackend.images[INSPECT_SEQUENCE_CAMERA_POSITION::TOP];
        outputBackendInfo.operatorImages = output.operatorImages;


        // process result string defect_infos$defect_code // обработать строку результата defect_infos$defect_code
        QStringList data = output.resultString.split("&");
        if(data.count() == 2)
        {
            bool ok;
            // defect code // код дефекта
            QStringList subSplitData = data[0].split("$");
            for (int i = 0; i < subSplitData.count(); ++i)
            {
                QStringList subSplitData1 = subSplitData[i].split(";");
                if(subSplitData1.count() != 2)
                    continue;

                int value = subSplitData1[1].toInt(&ok);
                if(!ok)
                    continue;
                outputBackendInfo.defectCodes.append((BACKEND_RESULT)value);
            }


            // defect info // информация о дефекте
            subSplitData = data[1].split("$");
            for (int i = 0; i < subSplitData.count(); ++i)
            {
                QStringList subSplitData1 = subSplitData[i].split(";");
                if(subSplitData1.count() != 5)
                    continue;

                int value = subSplitData1[0].toInt(&ok);
                if(!ok)
                    continue;
                double dvalue = subSplitData1[3].toDouble(&ok);
                if(!ok)
                    continue;

                DefectInfoItem defectInfoItem;
                defectInfoItem.trackIndex = (TRACK_INDEX)value;
                defectInfoItem.defect = ConfigApplication::instance()->ConvertBEStringToDefectCode(subSplitData1[1]);
                defectInfoItem.parameter = subSplitData1[2];
                defectInfoItem.pixelValue = dvalue;
                defectInfoItem.mmValue = dvalue;
                defectInfoItem.isPass = subSplitData1[4] == "True";
                outputBackendInfo.defectInfos.append(defectInfoItem);
            }
        }

        outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(BACKEND_RESULT::PASS);
        if(outputBackendInfo.defectCodes.count() > 0)
        {
            outputBackendInfo.resultString = ConfigApplication::instance()->ConvertDefectCodeToString(outputBackendInfo.defectCodes[0]);
        }
        else
        {
            outputBackendInfo.defectCodes.append(BACKEND_RESULT::PASS);
        }
        outputBackendInfo.processTime = processedTimes.elapsed();
        emit sendFinishInspect_Signal(outputBackendInfo);
    }
    else if(output.function == BACKEND_FUNCTION::CHANGE_RECIPE_DONE)
    {
        // // process result string class1;class2;... // // обработать строку результата class1;class2;...
        // QStringList data = output.resultString.split(";"); // QStringList данные = output.resultString.split(";");
        emit sendRecipeLoaded_Signal(output.resultString == "True");
    }


    isReadyCamInspectProcess = true;

    qDebug() << "[InspectionCore] Received function:" << output.function
             << "DefectInfos count:" << output.defectInfos.count();
    for (const DefectInfoItem& defect : output.defectInfos) {
        qDebug() << "  - " << defect.parameter << ":" << defect.mmValue;
    }

    qDebug() << "=== INSPECTION DEBUG ===";
    qDebug() << "Function:" << output.function;
    qDebug() << "Result string length:" << output.resultString.length();
    qDebug() << "First 200 chars:" << output.resultString.left(200);

    // Попробуем разные разделители
    if (output.resultString.contains("&")) {
        QStringList parts = output.resultString.split("&");
        qDebug() << "Split by '&':" << parts.count() << "parts";

        for (int i = 0; i < parts.count(); i++) {
            qDebug() << "Part" << i << ":" << parts[i].left(100);
        }
    }

    if (output.resultString.contains("$")) {
        QStringList items = output.resultString.split("$");
        qDebug() << "Split by '$':" << items.count() << "items";

        for (int i = 0; i < qMin(items.count(), 10); i++) {
            qDebug() << "Item" << i << ":" << items[i];
        }
    }
}

void InspectionCore::sendInputInspect_Slot(InputBackendInfo &inputBackendInfo)
{
    scopedTCPBackendClient.data()->Send(inputBackendInfo);
}

void InspectionCore::inspect_MainHomeVM_Slot(InputBackendInfo &input)
{
    if(!scopedTCPBackendClient.data()->isConnected) {
        qDebug() << "[InspectionCore] Cannot inspect: backend not connected";
        return;
    }

    qDebug() << "[InspectionCore] Received inspection request, function:" << input.function;

    // Решаем: собирать статистику или нет
    bool shouldCollectStats = false;

    // Для BodyR, Height, Finish Dimensions собираем статистику
    // Пока включаем для всех INSPECT и VALIDATION_INSPECT
    if (input.function == BACKEND_FUNCTION::INSPECT ||
        input.function == BACKEND_FUNCTION::VALIDATION_INSPECT) {
        shouldCollectStats = true; // TODO: сделать настройку в конфиге
        qDebug() << "[Stats] Statistics collection ENABLED for this inspection";
    } else {
        qDebug() << "[Stats] Statistics collection DISABLED for function:" << input.function;
    }

    if (shouldCollectStats) {
        qDebug() << "[Stats] Starting statistics collection for this inspection";
        startStatisticsCollection(input);
    } else {
        qDebug() << "[InspectionCore] Using single measurement mode";
        inputBackendQueues.enqueue(input);
        Resume();
    }
}
