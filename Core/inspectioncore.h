#ifndef INSPECTIONCORE_H
#define INSPECTIONCORE_H

#include <QObject>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QElapsedTimer>
#include <QTimer>
#include <QHash>
#include <QList>

#include "../TCPServer/tcp_backend_client.h"

// ==================== StatisticsCollector ====================
class StatisticsCollector {
public:
    struct Measurement {
        double value;
        bool isPass;
        QDateTime timestamp;

        Measurement() : value(0), isPass(true) {}
        Measurement(double v, bool pass) : value(v), isPass(pass), timestamp(QDateTime::currentDateTime()) {}
    };

    StatisticsCollector() {
        reset();
    }

    void reset() {
        measurements.clear();
    }

    void addMeasurement(const QString& key, double value, bool isPass) {
        if (!measurements.contains(key)) {
            measurements[key] = QList<Measurement>();
        }

        measurements[key].append(Measurement(value, isPass));
    }

    bool hasData(const QString& key) const {
        return measurements.contains(key) && !measurements[key].isEmpty();
    }

    double getMin(const QString& key) const {
        if (!hasData(key)) return 0;

        double minVal = measurements[key].first().value;
        for (const Measurement& m : measurements[key]) {
            if (m.value < minVal) minVal = m.value;
        }
        return minVal;
    }

    double getMax(const QString& key) const {
        if (!hasData(key)) return 0;

        double maxVal = measurements[key].first().value;
        for (const Measurement& m : measurements[key]) {
            if (m.value > maxVal) maxVal = m.value;
        }
        return maxVal;
    }

    double getLast(const QString& key) const {
        if (!hasData(key)) return 0;
        return measurements[key].last().value;
    }

    bool getLastPassStatus(const QString& key) const {
        if (!hasData(key)) return true;
        return measurements[key].last().isPass;
    }

    int getCount(const QString& key) const {
        if (!measurements.contains(key)) return 0;
        return measurements[key].count();
    }

    QList<QString> getKeys() const {
        return measurements.keys();
    }

private:
    QHash<QString, QList<Measurement>> measurements;
};
// ==================== END StatisticsCollector ====================

class InspectionCore : public QThread
{
    Q_OBJECT

public:
    explicit InspectionCore(QObject *parent = nullptr);
    ~InspectionCore();

    bool isRun;
    void run() override;
    void Resume();
    void Pause();

    void ResetOutputBackendInfo();
    void RecipeChanged();

    QScopedPointer<TCPBackendClient> scopedTCPBackendClient; // backend client

private:
    QMutex sync;
    QWaitCondition pauseCond;
    bool pause;

    bool isTotalEmptyQueue();

    QString defaultResultFlags;
    QQueue<InputBackendInfo> inputBackendQueues;
    InputBackendInfo currentInputBackend;
    bool isReadyCamInspectProcess;
    QElapsedTimer processedTimes;
    OutputBackendInfo outputBackendInfo;

    // ========== НОВЫЕ ПОЛЯ ДЛЯ СТАТИСТИКИ ==========
    StatisticsCollector statsCollector;
    int currentMeasurementCount;
    int requiredMeasurements;
    bool isCollectingStats;
    InputBackendInfo currentStatsInput;

    // Вспомогательные методы для статистики
    QString createStatsKey(int trackIndex, const QString& defectName, const QString& parameter);
    BACKEND_RESULT convertStringToDefectCode(const QString& defectStr);
    void accumulateStatisticsFromOutput(const OutputBackendInfo& output);
    OutputBackendInfo createFinalResultWithStatistics();
    void resetStatistics();
    void requestNextMeasurement();
    void startStatisticsCollection(InputBackendInfo &input);
    // ===============================================

signals:
    void sendInputInspect_Signal(InputBackendInfo&);
    void sendFinishInspect_Signal(OutputBackendInfo&);
    void sendRecipeLoaded_Signal(bool);
    void statisticsProgress(int current, int total); // Новый сигнал для прогресса

private slots:
    void receiveInspResult_TCPBackendClient_Slot(OutputBackendInfo&);
    void sendInputInspect_Slot(InputBackendInfo&);
    void handleNextMeasurement(); // Новый слот для следующего измерения

public slots:
    void inspect_MainHomeVM_Slot(InputBackendInfo &input);

};

#endif // INSPECTIONCORE_H
