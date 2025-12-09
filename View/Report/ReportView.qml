import QtQuick 2.15
import QtQuick.Controls 2.0
import Qt.labs.qmlmodels 1.0
import QtQuick.Controls 1.4 as QtC1
import QtQuick.Controls.Styles 1.1
import QtQuick.Dialogs 1.3 as QDialog
import ConfigView 1.0

import "../../View"
import "../../Component"

Item {
    id: report_view
    width: parent.width
    height: parent.height

    property QtObject _viewModel: QtObject{}
    property string _fontFamily: ConfigView.fontFamily
    property color _textColor: ConfigView.mainWhiteColor
    property bool _lockReportCbbSignal: false

    property color _headerColor: ConfigView.addLightBlueColor
    property color _borderColor: ConfigView.mainBlueColor
    property int _borderSize: 1
    property int _fontSize: 12
    property int _numberColumn: 11
    property int _numberRow: 9
    property int _selectedRow: 1
    property int _bodyRNumber: 1
    property int _nonRoundShapeNumber: 1
    property int _nonRoundShape: 0

    property bool _showStatistics: true // Показывать ли столбцы статистики
    property bool _showMinMax: true // Показывать min/max вместо обычных значений
    property int _statisticsMode: 0 // 0 - обычный режим, 1 - только min/max, 2 - все (обычный + min/max)

    QtObject{
        id: tableObjectID
        property int widthCell: (tableview.width)/(report_view._numberColumn) + report_view._borderSize
        property int heightCell: (tableview.height)/(report_view._numberRow)
    }

    function clearData()
    {
        sectionedModel.clear();
    }

    function addData(data, defectInfos) {
        if (defectInfos && defectInfos.length > 0) {
            // Используем новую функцию со статистикой
            addDataWithStatistics(data, defectInfos);
        } else {
            // Используем старую функцию для обратной совместимости
            addDataLegacy(data);
        }
    }

    function addDataLegacy(data) {
        sectionedModel.append({
            "job": data.job.value,
            "moldNumber": data.moldNumber.value,
            "codeNumber": data.codeNumber.value + ((data.codeNumber.value === "" || data.codeNumber.isPass) ? "" : "$"),
            "height": data.height.value + (data.height.isPass ? "" : "$"),
            "weight": data.weight.value + (data.weight.isPass ? "" : "$"),
            "tilt": data.tilt.value + (data.tilt.isPass ? "" : "$"),
            "lean": data.lean.value + (data.lean.isPass ? "" : "$"),
            "f": data.dimensionF.value + (data.dimensionF.isPass ? "" : "$"),
            "a": data.dimensionA.value + (data.dimensionA.isPass ? "" : "$"),
            "t": data.dimensionT.value + (data.dimensionT.isPass ? "" : "$"),
            "e": data.dimensionE.value + (data.dimensionE.isPass ? "" : "$"),
            "b": data.dimensionB.value + (data.dimensionB.isPass ? "" : "$"),
            "d": data.dimensionD.value + (data.dimensionD.isPass ? "" : "$"),
            "s": data.dimensionS.value + (data.dimensionS.isPass ? "" : "$"),
            "h": data.dimensionH.value + (data.dimensionH.isPass ? "" : "$"),
            "lugT": data.dimensionLugT.value + ((data.dimensionLugT.value === "" || data.dimensionLugT.isPass) ? "" : "$"),
            "lugT1": data.dimensionLugT1.value + ((data.dimensionLugT1.value === "" || data.dimensionLugT1.isPass) ? "" : "$"),
            "dAngle": data.dAngle.value + ((data.dAngle.value === "" || data.dAngle.isPass) ? "" : "$"),
            "pushup": data.pushup.value + (data.pushup.isPass ? "" : "$"),

            "flange": data.flange.value + ((data.flange.value === "" || data.flange.isPass) ? "" : "$"),
            "knockout": data.knockout.value + ((data.knockout.value === "" || data.knockout.isPass) ? "" : "$"),

            "bodyR": data.bodyR.length > 0 ? data.bodyR[0].value + (data.bodyR[0].isPass ? "" : "$") : "",
            "body2R": data.bodyR.length > 1 ? data.bodyR[1].value + (data.bodyR[1].isPass ? "" : "$") : "",
            "body3R": data.bodyR.length > 2 ? data.bodyR[2].value + (data.bodyR[2].isPass ? "" : "$") : "",
            "body4R": data.bodyR.length > 3 ? data.bodyR[3].value + (data.bodyR[3].isPass ? "" : "$") : "",
            "body5R": data.bodyR.length > 4 ? data.bodyR[4].value + (data.bodyR[4].isPass ? "" : "$") : "",
            "body6R": data.bodyR.length > 5 ? data.bodyR[5].value + (data.bodyR[5].isPass ? "" : "$") : "",
            "body7R": data.bodyR.length > 6 ? data.bodyR[6].value + (data.bodyR[6].isPass ? "" : "$") : "",
            "body8R": data.bodyR.length > 7 ? data.bodyR[7].value + (data.bodyR[7].isPass ? "" : "$") : "",
            "body9R": data.bodyR.length > 8 ? data.bodyR[8].value + (data.bodyR[8].isPass ? "" : "$") : "",
            "body10R": data.bodyR.length > 9 ? data.bodyR[9].value + (data.bodyR[9].isPass ? "" : "$") : "",
            "body11R": data.bodyR.length > 10 ? data.bodyR[10].value + (data.bodyR[10].isPass ? "" : "$") : "",
            "body12R": data.bodyR.length > 11 ? data.bodyR[11].value + (data.bodyR[11].isPass ? "" : "$") : "",
            "body13R": data.bodyR.length > 12 ? data.bodyR[12].value + (data.bodyR[12].isPass ? "" : "$") : "",
            "body14R": data.bodyR.length > 13 ? data.bodyR[13].value + (data.bodyR[13].isPass ? "" : "$") : "",
            "body15R": data.bodyR.length > 14 ? data.bodyR[14].value + (data.bodyR[14].isPass ? "" : "$") : "",
            "body16R": data.bodyR.length > 15 ? data.bodyR[15].value + (data.bodyR[15].isPass ? "" : "$") : "",
            "body17R": data.bodyR.length > 16 ? data.bodyR[16].value + (data.bodyR[16].isPass ? "" : "$") : "",
            "body18R": data.bodyR.length > 17 ? data.bodyR[17].value + (data.bodyR[17].isPass ? "" : "$") : "",
            "body19R": data.bodyR.length > 18 ? data.bodyR[18].value + (data.bodyR[18].isPass ? "" : "$") : "",
            "body20R": data.bodyR.length > 19 ? data.bodyR[19].value + (data.bodyR[19].isPass ? "" : "$") : "",
            "body21R": data.bodyR.length > 20 ? data.bodyR[20].value + (data.bodyR[20].isPass ? "" : "$") : "",
            "body22R": data.bodyR.length > 21 ? data.bodyR[21].value + (data.bodyR[21].isPass ? "" : "$") : "",
            "body23R": data.bodyR.length > 22 ? data.bodyR[22].value + (data.bodyR[22].isPass ? "" : "$") : "",

            "recShrt1": data.recShrt.length > 0 ? (data.recShrt[0].value + ((data.recShrt[0].value === "" || data.recShrt[0].isPass) ? "" : "$")) : "",
            "recLong1": data.recLong.length > 0 ? (data.recLong[0].value + ((data.recLong[0].value === "" || data.recLong[0].isPass) ? "" : "$")) : "",
            "recDiag1": data.recDiag.length > 0 ? (data.recDiag[0].value + ((data.recDiag[0].value === "" || data.recDiag[0].isPass) ? "" : "$")) : "",
            "sqrSide1": data.sqrSide.length > 0 ? (data.sqrSide[0].value + ((data.sqrSide[0].value === "" || data.sqrSide[0].isPass) ? "" : "$")) : "",
            "sqrDiag1": data.sqrDiag.length > 0 ? (data.sqrDiag[0].value + ((data.sqrDiag[0].value === "" || data.sqrDiag[0].isPass) ? "" : "$")) : "",
            "ovlShrt1": data.ovlShrt.length > 0 ? (data.ovlShrt[0].value + ((data.ovlShrt[0].value === "" || data.ovlShrt[0].isPass) ? "" : "$")) : "",
            "ovlLong1": data.ovlLong.length > 0 ? (data.ovlLong[0].value + ((data.ovlLong[0].value === "" || data.ovlLong[0].isPass) ? "" : "$")) : "",

            "recShrt2": data.recShrt.length > 1 ? (data.recShrt[1].value + ((data.recShrt[1].value === "" || data.recShrt[1].isPass) ? "" : "$")) : "",
            "recLong2": data.recLong.length > 1 ? (data.recLong[1].value + ((data.recLong[1].value === "" || data.recLong[1].isPass) ? "" : "$")) : "",
            "recDiag2": data.recDiag.length > 1 ? (data.recDiag[1].value + ((data.recDiag[1].value === "" || data.recDiag[1].isPass) ? "" : "$")) : "",
            "sqrSide2": data.sqrSide.length > 1 ? (data.sqrSide[1].value + ((data.sqrSide[1].value === "" || data.sqrSide[1].isPass) ? "" : "$")) : "",
            "sqrDiag2": data.sqrDiag.length > 1 ? (data.sqrDiag[1].value + ((data.sqrDiag[1].value === "" || data.sqrDiag[1].isPass) ? "" : "$")) : "",
            "ovlShrt2": data.ovlShrt.length > 1 ? (data.ovlShrt[1].value + ((data.ovlShrt[1].value === "" || data.ovlShrt[1].isPass) ? "" : "$")) : "",
            "ovlLong2": data.ovlLong.length > 1 ? (data.ovlLong[1].value + ((data.ovlLong[1].value === "" || data.ovlLong[1].isPass) ? "" : "$")) : "",

            "recShrt3": data.recShrt.length > 2 ? (data.recShrt[2].value + ((data.recShrt[2].value === "" || data.recShrt[2].isPass) ? "" : "$")) : "",
            "recLong3": data.recLong.length > 2 ? (data.recLong[2].value + ((data.recLong[2].value === "" || data.recLong[2].isPass) ? "" : "$")) : "",
            "recDiag3": data.recDiag.length > 2 ? (data.recDiag[2].value + ((data.recDiag[2].value === "" || data.recDiag[2].isPass) ? "" : "$")) : "",
            "sqrSide3": data.sqrSide.length > 2 ? (data.sqrSide[2].value + ((data.sqrSide[2].value === "" || data.sqrSide[2].isPass) ? "" : "$")) : "",
            "sqrDiag3": data.sqrDiag.length > 2 ? (data.sqrDiag[2].value + ((data.sqrDiag[2].value === "" || data.sqrDiag[2].isPass) ? "" : "$")) : "",
            "ovlShrt3": data.ovlShrt.length > 2 ? (data.ovlShrt[2].value + ((data.ovlShrt[2].value === "" || data.ovlShrt[2].isPass) ? "" : "$")) : "",
            "ovlLong3": data.ovlLong.length > 2 ? (data.ovlLong[2].value + ((data.ovlLong[2].value === "" || data.ovlLong[2].isPass) ? "" : "$")) : "",

            "recShrt4": data.recShrt.length > 3 ? (data.recShrt[3].value + ((data.recShrt[3].value === "" || data.recShrt[3].isPass) ? "" : "$")) : "",
            "recLong4": data.recLong.length > 3 ? (data.recLong[3].value + ((data.recLong[3].value === "" || data.recLong[3].isPass) ? "" : "$")) : "",
            "recDiag4": data.recDiag.length > 3 ? (data.recDiag[3].value + ((data.recDiag[3].value === "" || data.recDiag[3].isPass) ? "" : "$")) : "",
            "sqrSide4": data.sqrSide.length > 3 ? (data.sqrSide[3].value + ((data.sqrSide[3].value === "" || data.sqrSide[3].isPass) ? "" : "$")) : "",
            "sqrDiag4": data.sqrDiag.length > 3 ? (data.sqrDiag[3].value + ((data.sqrDiag[3].value === "" || data.sqrDiag[3].isPass) ? "" : "$")) : "",
            "ovlShrt4": data.ovlShrt.length > 3 ? (data.ovlShrt[3].value + ((data.ovlShrt[3].value === "" || data.ovlShrt[3].isPass) ? "" : "$")) : "",
            "ovlLong4": data.ovlLong.length > 3 ? (data.ovlLong[3].value + ((data.ovlLong[3].value === "" || data.ovlLong[3].isPass) ? "" : "$")) : "",

            "recShrt5": data.recShrt.length > 4 ? (data.recShrt[4].value + ((data.recShrt[4].value === "" || data.recShrt[4].isPass) ? "" : "$")) : "",
            "recLong5": data.recLong.length > 4 ? (data.recLong[4].value + ((data.recLong[4].value === "" || data.recLong[4].isPass) ? "" : "$")) : "",
            "recDiag5": data.recDiag.length > 4 ? (data.recDiag[4].value + ((data.recDiag[4].value === "" || data.recDiag[4].isPass) ? "" : "$")) : "",
            "sqrSide5": data.sqrSide.length > 4 ? (data.sqrSide[4].value + ((data.sqrSide[4].value === "" || data.sqrSide[4].isPass) ? "" : "$")) : "",
            "sqrDiag5": data.sqrDiag.length > 4 ? (data.sqrDiag[4].value + ((data.sqrDiag[4].value === "" || data.sqrDiag[4].isPass) ? "" : "$")) : "",
            "ovlShrt5": data.ovlShrt.length > 4 ? (data.ovlShrt[4].value + ((data.ovlShrt[4].value === "" || data.ovlShrt[4].isPass) ? "" : "$")) : "",
            "ovlLong5": data.ovlLong.length > 4 ? (data.ovlLong[4].value + ((data.ovlLong[4].value === "" || data.ovlLong[4].isPass) ? "" : "$")) : "",

            "recShrt6": data.recShrt.length > 5 ? (data.recShrt[5].value + ((data.recShrt[5].value === "" || data.recShrt[5].isPass) ? "" : "$")) : "",
            "recLong6": data.recLong.length > 5 ? (data.recLong[5].value + ((data.recLong[5].value === "" || data.recLong[5].isPass) ? "" : "$")) : "",
            "recDiag6": data.recDiag.length > 5 ? (data.recDiag[5].value + ((data.recDiag[5].value === "" || data.recDiag[5].isPass) ? "" : "$")) : "",
            "sqrSide6": data.sqrSide.length > 5 ? (data.sqrSide[5].value + ((data.sqrSide[5].value === "" || data.sqrSide[5].isPass) ? "" : "$")) : "",
            "sqrDiag6": data.sqrDiag.length > 5 ? (data.sqrDiag[5].value + ((data.sqrDiag[5].value === "" || data.sqrDiag[5].isPass) ? "" : "$")) : "",
            "ovlShrt6": data.ovlShrt.length > 5 ? (data.ovlShrt[5].value + ((data.ovlShrt[5].value === "" || data.ovlShrt[5].isPass) ? "" : "$")) : "",
            "ovlLong6": data.ovlLong.length > 5 ? (data.ovlLong[5].value + ((data.ovlLong[5].value === "" || data.ovlLong[5].isPass) ? "" : "$")) : "",

            "recShrt7": data.recShrt.length > 6 ? (data.recShrt[6].value + ((data.recShrt[6].value === "" || data.recShrt[6].isPass) ? "" : "$")) : "",
            "recLong7": data.recLong.length > 6 ? (data.recLong[6].value + ((data.recLong[6].value === "" || data.recLong[6].isPass) ? "" : "$")) : "",
            "recDiag7": data.recDiag.length > 6 ? (data.recDiag[6].value + ((data.recDiag[6].value === "" || data.recDiag[6].isPass) ? "" : "$")) : "",
            "sqrSide7": data.sqrSide.length > 6 ? (data.sqrSide[6].value + ((data.sqrSide[6].value === "" || data.sqrSide[6].isPass) ? "" : "$")) : "",
            "sqrDiag7": data.sqrDiag.length > 6 ? (data.sqrDiag[6].value + ((data.sqrDiag[6].value === "" || data.sqrDiag[6].isPass) ? "" : "$")) : "",
            "ovlShrt7": data.ovlShrt.length > 6 ? (data.ovlShrt[6].value + ((data.ovlShrt[6].value === "" || data.ovlShrt[6].isPass) ? "" : "$")) : "",
            "ovlLong7": data.ovlLong.length > 6 ? (data.ovlLong[6].value + ((data.ovlLong[6].value === "" || data.ovlLong[6].isPass) ? "" : "$")) : "",

            "recShrt8": data.recShrt.length > 7 ? (data.recShrt[7].value + ((data.recShrt[7].value === "" || data.recShrt[7].isPass) ? "" : "$")) : "",
            "recLong8": data.recLong.length > 7 ? (data.recLong[7].value + ((data.recLong[7].value === "" || data.recLong[7].isPass) ? "" : "$")) : "",
            "recDiag8": data.recDiag.length > 7 ? (data.recDiag[7].value + ((data.recDiag[7].value === "" || data.recDiag[7].isPass) ? "" : "$")) : "",
            "sqrSide8": data.sqrSide.length > 7 ? (data.sqrSide[7].value + ((data.sqrSide[7].value === "" || data.sqrSide[7].isPass) ? "" : "$")) : "",
            "sqrDiag8": data.sqrDiag.length > 7 ? (data.sqrDiag[7].value + ((data.sqrDiag[7].value === "" || data.sqrDiag[7].isPass) ? "" : "$")) : "",
            "ovlShrt8": data.ovlShrt.length > 7 ? (data.ovlShrt[7].value + ((data.ovlShrt[7].value === "" || data.ovlShrt[7].isPass) ? "" : "$")) : "",
            "ovlLong8": data.ovlLong.length > 7 ? (data.ovlLong[7].value + ((data.ovlLong[7].value === "" || data.ovlLong[7].isPass) ? "" : "$")) : "",

        });
    }

    function addDataWithStatistics(data, defectInfos) {
        var dataObj = {
            "job": data.job.value,
            "moldNumber": data.moldNumber.value,
            "codeNumber": data.codeNumber.value + ((data.codeNumber.value === "" || data.codeNumber.isPass) ? "" : "$"),

            // Базовые поля (текущие значения)
            "height": data.height.value + (data.height.isPass ? "" : "$"),
            "weight": data.weight.value + (data.weight.isPass ? "" : "$"),
            "tilt": data.tilt.value + (data.tilt.isPass ? "" : "$"),
            "lean": data.lean.value + (data.lean.isPass ? "" : "$"),
            "f": data.dimensionF.value + (data.dimensionF.isPass ? "" : "$"),
            "a": data.dimensionA.value + (data.dimensionA.isPass ? "" : "$"),
            "t": data.dimensionT.value + (data.dimensionT.isPass ? "" : "$"),
            "e": data.dimensionE.value + (data.dimensionE.isPass ? "" : "$"),
            "b": data.dimensionB.value + (data.dimensionB.isPass ? "" : "$"),
            "d": data.dimensionD.value + (data.dimensionD.isPass ? "" : "$"),
            "s": data.dimensionS.value + (data.dimensionS.isPass ? "" : "$"),
            "h": data.dimensionH.value + (data.dimensionH.isPass ? "" : "$"),
            "lugT": data.dimensionLugT.value + ((data.dimensionLugT.value === "" || data.dimensionLugT.isPass) ? "" : "$"),
            "lugT1": data.dimensionLugT1.value + ((data.dimensionLugT1.value === "" || data.dimensionLugT1.isPass) ? "" : "$"),
            "dAngle": data.dAngle.value + ((data.dAngle.value === "" || data.dAngle.isPass) ? "" : "$"),
            "pushup": data.pushup.value + (data.pushup.isPass ? "" : "$"),
            "flange": data.flange.value + ((data.flange.value === "" || data.flange.isPass) ? "" : "$"),
            "knockout": data.knockout.value + ((data.knockout.value === "" || data.knockout.isPass) ? "" : "$"),
        };

        //поля для BodyR
        var bodyRFunc = function(index) {
            return data.bodyR.length > index ? data.bodyR[index].value + (data.bodyR[index].isPass ? "" : "$") : "";
        };

        dataObj["bodyR"] = bodyRFunc(0);
        dataObj["body2R"] = bodyRFunc(1);
        dataObj["body3R"] = bodyRFunc(2);
        dataObj["body4R"] = bodyRFunc(3);
        dataObj["body5R"] = bodyRFunc(4);
        dataObj["body6R"] = bodyRFunc(5);
        dataObj["body7R"] = bodyRFunc(6);
        dataObj["body8R"] = bodyRFunc(7);
        dataObj["body9R"] = bodyRFunc(8);
        dataObj["body10R"] = bodyRFunc(9);
        dataObj["body11R"] = bodyRFunc(10);
        dataObj["body12R"] = bodyRFunc(11);
        dataObj["body13R"] = bodyRFunc(12);
        dataObj["body14R"] = bodyRFunc(13);
        dataObj["body15R"] = bodyRFunc(14);
        dataObj["body16R"] = bodyRFunc(15);
        dataObj["body17R"] = bodyRFunc(16);
        dataObj["body18R"] = bodyRFunc(17);
        dataObj["body19R"] = bodyRFunc(18);
        dataObj["body20R"] = bodyRFunc(19);
        dataObj["body21R"] = bodyRFunc(20);
        dataObj["body22R"] = bodyRFunc(21);
        dataObj["body23R"] = bodyRFunc(22);

        // Обрабатываем NonRoundShape
        var shapeFunc = function(shapeArray, index) {
            return shapeArray.length > index ? (shapeArray[index].value + ((shapeArray[index].value === "" || shapeArray[index].isPass) ? "" : "$")) : "";
        };

        dataObj["recShrt1"] = shapeFunc(data.recShrt, 0);
        dataObj["recLong1"] = shapeFunc(data.recLong, 0);
        dataObj["recDiag1"] = shapeFunc(data.recDiag, 0);
        dataObj["sqrSide1"] = shapeFunc(data.sqrSide, 0);
        dataObj["sqrDiag1"] = shapeFunc(data.sqrDiag, 0);
        dataObj["ovlShrt1"] = shapeFunc(data.ovlShrt, 0);
        dataObj["ovlLong1"] = shapeFunc(data.ovlLong, 0);

        dataObj["recShrt2"] = shapeFunc(data.recShrt, 1);
        dataObj["recLong2"] = shapeFunc(data.recLong, 1);
        dataObj["recDiag2"] = shapeFunc(data.recDiag, 1);
        dataObj["sqrSide2"] = shapeFunc(data.sqrSide, 1);
        dataObj["sqrDiag2"] = shapeFunc(data.sqrDiag, 1);
        dataObj["ovlShrt2"] = shapeFunc(data.ovlShrt, 1);
        dataObj["ovlLong2"] = shapeFunc(data.ovlLong, 1);

        dataObj["recShrt3"] = shapeFunc(data.recShrt, 2);
        dataObj["recLong3"] = shapeFunc(data.recLong, 2);
        dataObj["recDiag3"] = shapeFunc(data.recDiag, 2);
        dataObj["sqrSide3"] = shapeFunc(data.sqrSide, 2);
        dataObj["sqrDiag3"] = shapeFunc(data.sqrDiag, 2);
        dataObj["ovlShrt3"] = shapeFunc(data.ovlShrt, 2);
        dataObj["ovlLong3"] = shapeFunc(data.ovlLong, 2);

        dataObj["recShrt4"] = shapeFunc(data.recShrt, 3);
        dataObj["recLong4"] = shapeFunc(data.recLong, 3);
        dataObj["recDiag4"] = shapeFunc(data.recDiag, 3);
        dataObj["sqrSide4"] = shapeFunc(data.sqrSide, 3);
        dataObj["sqrDiag4"] = shapeFunc(data.sqrDiag, 3);
        dataObj["ovlShrt4"] = shapeFunc(data.ovlShrt, 3);
        dataObj["ovlLong4"] = shapeFunc(data.ovlLong, 3);

        dataObj["recShrt5"] = shapeFunc(data.recShrt, 4);
        dataObj["recLong5"] = shapeFunc(data.recLong, 4);
        dataObj["recDiag5"] = shapeFunc(data.recDiag, 4);
        dataObj["sqrSide5"] = shapeFunc(data.sqrSide, 4);
        dataObj["sqrDiag5"] = shapeFunc(data.sqrDiag, 4);
        dataObj["ovlShrt5"] = shapeFunc(data.ovlShrt, 4);
        dataObj["ovlLong5"] = shapeFunc(data.ovlLong, 4);

        dataObj["recShrt6"] = shapeFunc(data.recShrt, 5);
        dataObj["recLong6"] = shapeFunc(data.recLong, 5);
        dataObj["recDiag6"] = shapeFunc(data.recDiag, 5);
        dataObj["sqrSide6"] = shapeFunc(data.sqrSide, 5);
        dataObj["sqrDiag6"] = shapeFunc(data.sqrDiag, 5);
        dataObj["ovlShrt6"] = shapeFunc(data.ovlShrt, 5);
        dataObj["ovlLong6"] = shapeFunc(data.ovlLong, 5);

        dataObj["recShrt7"] = shapeFunc(data.recShrt, 6);
        dataObj["recLong7"] = shapeFunc(data.recLong, 6);
        dataObj["recDiag7"] = shapeFunc(data.recDiag, 6);
        dataObj["sqrSide7"] = shapeFunc(data.sqrSide, 6);
        dataObj["sqrDiag7"] = shapeFunc(data.sqrDiag, 6);
        dataObj["ovlShrt7"] = shapeFunc(data.ovlShrt, 6);
        dataObj["ovlLong7"] = shapeFunc(data.ovlLong, 6);

        dataObj["recShrt8"] = shapeFunc(data.recShrt, 7);
        dataObj["recLong8"] = shapeFunc(data.recLong, 7);
        dataObj["recDiag8"] = shapeFunc(data.recDiag, 7);
        dataObj["sqrSide8"] = shapeFunc(data.sqrSide, 7);
        dataObj["sqrDiag8"] = shapeFunc(data.sqrDiag, 7);
        dataObj["ovlShrt8"] = shapeFunc(data.ovlShrt, 7);
        dataObj["ovlLong8"] = shapeFunc(data.ovlLong, 7);

        // Если есть статистика, добавляем min/max поля
        if (defectInfos && defectInfos.length > 0) {
            processStatistics(dataObj, defectInfos);
        }

        sectionedModel.append(dataObj);
    }

    function processStatistics(dataObj, defectInfos) {
        // Маппинг параметров на поля таблицы
        var paramMapping = {
            "Height": {min: "height_min", max: "height_max", type: 1},
            "Weight": {min: "weight_min", max: "weight_max", type: 2},
            "Tilt": {min: "tilt_min", max: "tilt_max", type: 6},
            "Lean": {min: "lean_min", max: "lean_max", type: 5},
            "Dimension": { // Для F, A, T, E, B, D, S, H, LugT, LugT1, Pushup
                types: {
                    7: {min: "f_min", max: "f_max"},      // F_DIMENSION
                    8: {min: "a_min", max: "a_max"},      // A_DIMENSION
                    9: {min: "t_min", max: "t_max"},      // T_DIMENSION
                    10: {min: "e_min", max: "e_max"},     // E_DIMENSION
                    12: {min: "b_min", max: "b_max"},     // B_DIMENSION
                    11: {min: "d_min", max: "d_max"},     // D_DIMENSION
                    13: {min: "s_min", max: "s_max"},     // S_DIMENSION
                    14: {min: "h_min", max: "h_max"},     // H_DIMENSION
                    15: {min: "lugT_min", max: "lugT_max"}, // LUGT_DIMENSION
                    16: {min: "lugT1_min", max: "lugT1_max"}, // LUGT1_DIMENSION
                    20: {min: "pushup_min", max: "pushup_max"}, // PUSHUP_DIMENSION
                    17: {min: "dAngle_min", max: "dAngle_max"}, // D_ANGLE_DIMENSION
                }
            },
            "Dimension 5": {min: "bodyR_min", max: "bodyR_max"}, // Для BodyR
            "Dimension 6": {min: "body2R_min", max: "body2R_max"},
            "Dimension 7": {min: "body3R_min", max: "body3R_max"},
            "Dimension 8": {min: "body4R_min", max: "body4R_max"},
            "Dimension 9": {min: "body5R_min", max: "body5R_max"},
            "Dimension 10": {min: "body6R_min", max: "body6R_max"},
            "Dimension 11": {min: "body7R_min", max: "body7R_max"},
            "Dimension 12": {min: "body8R_min", max: "body8R_max"},
            "Dimension 13": {min: "body9R_min", max: "body9R_max"},
            "Dimension 14": {min: "body10R_min", max: "body10R_max"},
            "Dimension 15": {min: "body11R_min", max: "body11R_max"},
            "Dimension 16": {min: "body12R_min", max: "body12R_max"},
            "Dimension 17": {min: "body13R_min", max: "body13R_max"},
            "Dimension 18": {min: "body14R_min", max: "body14R_max"},
            "Dimension 19": {min: "body15R_min", max: "body15R_max"},
            "Dimension 20": {min: "body16R_min", max: "body16R_max"},
            "Dimension 21": {min: "body17R_min", max: "body17R_max"},
            "Dimension 22": {min: "body18R_min", max: "body18R_max"},
            "Dimension 23": {min: "body19R_min", max: "body19R_max"},
            "Dimension 24": {min: "body20R_min", max: "body20R_max"},
            "Dimension 25": {min: "body21R_min", max: "body21R_max"},
            "Dimension 26": {min: "body22R_min", max: "body22R_max"},
            "Dimension 27": {min: "body23R_min", max: "body23R_max"},
            "RecShrt1": {min: "recShrt1_min", max: "recShrt1_max"},
            "RecLong1": {min: "recLong1_min", max: "recLong1_max"},
            "RecDiag1": {min: "recDiag1_min", max: "recDiag1_max"},
            "SqrSide1": {min: "sqrSide1_min", max: "sqrSide1_max"},
            "SqrDiag1": {min: "sqrDiag1_min", max: "sqrDiag1_max"},
            "OvlShrt1": {min: "ovlShrt1_min", max: "ovlShrt1_max"},
            "OvlLong1": {min: "ovlLong1_min", max: "ovlLong1_max"},
        };

        for (var i = 0; i < defectInfos.length; i++) {
            var defect = defectInfos[i];
            var paramName = defect.parameter;
            var defectType = defect.defect;

            // Пропускаем Diff параметры
            if (paramName.startsWith("Diff ")) {
                continue;
            }

            // Ищем маппинг для параметра
            var mapping = paramMapping[paramName];

            if (mapping) {
                // Прямое соответствие
                if (mapping.min) {
                    dataObj[mapping.min] = defect.minValue.toFixed(3) + (defect.isPass ? "" : "$");
                    dataObj[mapping.max] = defect.maxValue.toFixed(3) + (defect.isPass ? "" : "$");
                }
            } else if (paramName === "Dimension") {
                // Для Dimension смотрим тип дефекта
                var typeMapping = paramMapping.Dimension.types[defectType];
                if (typeMapping) {
                    dataObj[typeMapping.min] = defect.minValue.toFixed(3) + (defect.isPass ? "" : "$");
                    dataObj[typeMapping.max] = defect.maxValue.toFixed(3) + (defect.isPass ? "" : "$");
                }
            } else if (paramName.startsWith("Dimension ")) {
                // Для BodyR (Dimension 5, Dimension 6, и т.д.)
                var dimNum = paramName.substring(10);
                var bodyRIndex = parseInt(dimNum) - 4; // Преобразуем Dimension 5 → bodyR, Dimension 6 → body2R

                if (bodyRIndex >= 1 && bodyRIndex <= 23) {
                    var prefix = bodyRIndex === 1 ? "bodyR" : "body" + bodyRIndex + "R";
                    dataObj[prefix + "_min"] = defect.minValue.toFixed(3) + (defect.isPass ? "" : "$");
                    dataObj[prefix + "_max"] = defect.maxValue.toFixed(3) + (defect.isPass ? "" : "$");
                }
            }
        }
    }

    // Функция для обновления видимости столбцов
    function updateTableColumns() {
        // Обновляем видимость всех столбцов
        for (var i = 0; i < tableview.columnCount; i++) {
            var column = tableview.getColumn(i);

            // Определяем тип столбца по role
            if (column.role.endsWith("_min") || column.role.endsWith("_max")) {
                // Столбцы min/max
                column.visible = _showStatistics && (_statisticsMode === 1 || _statisticsMode === 2);
            } else if (column.role !== "job" && column.role !== "moldNumber" && column.role !== "codeNumber") {
                // Обычные столбцы (кроме служебных)
                column.visible = _statisticsMode === 0 || _statisticsMode === 2;
            }
        }
    }

    ListModel {
        id: sectionedModel
    }

    Column {
        height: parent.height*0.98
        width: parent.width
        spacing: parent.height*0.02
        anchors.verticalCenter: parent.verticalCenter
        Row {
            height: parent.height*0.1
            width: parent.width*0.96
            spacing: parent.width*0.03
            anchors.horizontalCenter: parent.horizontalCenter

            ComboBoxCustom{
                id: report_cbb
                ListModel {
                    id: report_cbb_model
                }
                _model: report_cbb_model
                width: parent.width*0.2
                height: parent.height
                _fontSize: report_view._fontSize
                _fontFamily: report_view._fontFamily
                currentIndex: 0
                anchors.verticalCenter: parent.verticalCenter
                onCurrentTextChanged:{
                    if(report_view._lockReportCbbSignal)
                        return
                    _viewModel.currentReportIndexChanged_Qml_Slot(currentIndex)
                }
            }


            GroupBox{
                id: page_group
                width: parent.width*0.15
                height: parent.height
                background:Rectangle{
                    color: "transparent"
                    width: parent.width
                    height: parent.height
                    radius: 10
                    border.width: 2
                    border.color: "#7F7F7F"
                }

                label:Rectangle{
                    color: ConfigView.addLightBlueColor
                    radius: 10
                    width: title.contentWidth*1.4
                    height: parent.height*0.25
                    anchors.left: parent.left
                    anchors.leftMargin: 10
                    anchors.bottom: parent.top
                    anchors.bottomMargin: - height/2
                    Text {
                        id: title
                        height: parent.height
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.left: parent.left
                        anchors.leftMargin: 10
                        verticalAlignment: Text.AlignVCenter
                        text: qsTr("Page")
                        color: _textColor
                        font.bold: true
                        font.pointSize: _fontSize
                        font.family: _fontFamily
                    }
                }

                Row {
                    width: parent.width*0.88
                    height: parent.height*0.9
                    spacing: parent.width*0.02
                    anchors.centerIn: parent
                    ButtonMaterial{
                        _width: parent.height
                        _height: parent.height
                        _size: _height*1
                        _iconSourceOn: "chevronLeftBox"
                        _colorBorder: " transparent"
                        _colorIconHigh: "#FFCE44"
                        _colorIconDefault: ConfigView.addLightBlueColor
                        anchors.verticalCenter: parent.verticalCenter
                        onClicked: {
                            var index = parseInt(page_index_text.getText()) - 1
                            if(index < 0)
                                return
                            page_index_text.setText(index)
                        }
                    }

                    InputText{
                        id: page_index_text
                        _width: _height*2
                        _height: parent.height
                        _fontSizeText: _fontSize
                        _text: "1"
                        _leftMagin: 0
                        _reg: RegExpValidator{regExp: /\d+/}
                        _inputMethodHints: Qt.ImhFormattedNumbersOnly
                    }

                    ButtonMaterial{
                        _width: parent.height
                        _height: parent.height
                        _size: _height*1
                        _iconSourceOn: "chevronRightBox"
                        _colorBorder: " transparent"
                        _colorIconHigh: "#FFCE44"
                        _colorIconDefault: ConfigView.addLightBlueColor
                        anchors.verticalCenter: parent.verticalCenter
                        onClicked: {
                            var index = parseInt(page_index_text.getText()) + 1
                            if(index > _viewModel.maxPageNumber)
                                return
                            page_index_text.setText(parseInt(page_index_text.getText()) + 1)
                        }
                    }

                }


            }

            // В Row с кнопками управления добавляем кнопку для переключения режима
            ButtonMaterialTextHorizontal{
                id: stats_mode_btn
                height: parent.height*0.9
                _size: height*0.8
                _text: {
                    if(_statisticsMode === 0) return qsTr("Stats: Off");
                    if(_statisticsMode === 1) return qsTr("Stats: Min/Max");
                    return qsTr("Stats: All");
                }
                _iconSourceOn: "chartLine"
                anchors.verticalCenter: parent.verticalCenter
                _fontFamily: report_view._fontFamily
                _textRatio: 0.4
                onClicked: {
                    _statisticsMode = (_statisticsMode + 1) % 3;
                    updateTableColumns();
                }
            }

            ButtonMaterialTextHorizontal{
                id: export_btn
                height: parent.height*0.9
                _size: height*0.8
                _text: qsTr("Export")
                _iconSourceOn: "databaseExport"
                anchors.verticalCenter: parent.verticalCenter
                _fontFamily: report_view._fontFamily
                _textRatio: 0.4
                _colorIconMouseOver: _colorIconDefault
                onClicked: {
                    _viewModel.export_Qml_Slot(report_cbb.currentIndex,
                                page_index_text.getText());

                                //export_table_dlg.open();
                    //var fileHeader = report_cbb.currentText + " " + "Page " + page_index_text.getText()
                    //console.log(fileHeader)

                    export_table_dlg.open();

                }
            }

            ButtonMaterialTextHorizontal{
                id: print_btn
                height: parent.height*0.9
                _size: height*0.8
                _text: qsTr("Print")
                _iconSourceOn: "printer"
                anchors.verticalCenter: parent.verticalCenter
                _fontFamily: report_view._fontFamily
                _textRatio: 0.4
                _colorIconMouseOver: _colorIconDefault
                onClicked: {
                    _viewModel.print_Qml_Slot(report_cbb.currentIndex,
                                page_index_text.getText());


                    print_table_dlg.open();

                }
            }

        }

        Column {
            height: parent.height*0.87
            width: parent.width
            Rectangle {
                height: parent.height*0.1
                width: parent.width*0.96
                anchors.horizontalCenter: parent.horizontalCenter
                color: ConfigView.mainBlueColor
                Text {
                    text: report_cbb.currentText +
                          "        " + qsTr("Machine") + ": " + qsTr("MiniLab") + "        " + qsTr("Job name") + ": " +
                          recipeManagementVM.currentRecipe /*+
                          "        "+ qsTr("Date") + ": " +
                          _viewModel.lastReportTime*/
                    width: parent.width
                    font.pointSize: _fontSize + 2
                    color: ConfigView.textColor
                    font.family: _fontFamily
                    font.bold: true
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    anchors.verticalCenter: parent.verticalCenter
                }
            }

            QtC1.TableView {
                id: tableview
                height: parent.height*0.9
                width: parent.width*0.96
                anchors.horizontalCenter: parent.horizontalCenter
                clip: true
                alternatingRowColors: true
                model: sectionedModel

                backgroundVisible: false

                verticalScrollBarPolicy: Qt.ScrollBarAsNeeded
                horizontalScrollBarPolicy: Qt.AsNeeded
                flickableItem.flickableDirection : Flickable.HorizontalAndVerticalFlick
                flickableItem.boundsBehavior: Flickable.StopAtBounds




                style: TableViewStyle{
                    textColor: "white"
                    alternateBackgroundColor: "#222222"
                }

                QtC1.TableViewColumn {
                    role: "job"
                    title: qsTr("Job")
                    width: tableObjectID.widthCell*1.5
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    role: "moldNumber"
                    title: qsTr("Mold Number")
                    width: tableObjectID.widthCell*1.5
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    role: "codeNumber"
                    title: qsTr("Code Number")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }

                // Существующий столбец (скрываем при показе только min/max)
                QtC1.TableViewColumn {
                    role: "height"
                    title: qsTr("Height")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                // Новые столбцы для min/max
                QtC1.TableViewColumn {
                    role: "height_min"
                    title: qsTr("Height Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "height_max"
                    title: qsTr("Height Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                QtC1.TableViewColumn {
                    role: "weight"
                    title: qsTr("Weight")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "weight_min"
                    title: qsTr("Weight Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "weight_max"
                    title: qsTr("Weight Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Существующий столбец
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "bodyR"
                    title: qsTr("BodyR")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                // Min/max столбцы
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 0 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "bodyR_min"
                    title: qsTr("BodyR Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 0 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "bodyR_max"
                    title: qsTr("BodyR Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "body2R"
                    title: qsTr("Body2R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 1 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body2R_min"
                    title: qsTr("Body2R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 1 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body2R_max"
                    title: qsTr("Body2R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "body3R"
                    title: qsTr("Body3R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 2 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body3R_min"
                    title: qsTr("Body3R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 2 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body3R_max"
                    title: qsTr("Body3R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 3 && (!_showMinMax || _statisticsMode === 2)
                    role: "body4R"
                    title: qsTr("Body4R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 3 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body4R_min"
                    title: qsTr("Body4R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 3 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body4R_max"
                    title: qsTr("Body4R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 4 && (!_showMinMax || _statisticsMode === 2)
                    role: "body5R"
                    title: qsTr("Body5R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 4 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body5R_min"
                    title: qsTr("Body5R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 4 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body5R_max"
                    title: qsTr("Body5R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 5 && (!_showMinMax || _statisticsMode === 2)
                    role: "body6R"
                    title: qsTr("Body6R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 5 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body6R_min"
                    title: qsTr("Body6R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 5 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body6R_max"
                    title: qsTr("Body6R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 6 && (!_showMinMax || _statisticsMode === 2)
                    role: "body7R"
                    title: qsTr("Body7R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 6 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body7R_min"
                    title: qsTr("Body7R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 6 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body7R_max"
                    title: qsTr("Body7R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 7 && (!_showMinMax || _statisticsMode === 2)
                    role: "body8R"
                    title: qsTr("Body8R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 7 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body8R_min"
                    title: qsTr("Body8R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 7 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body8R_max"
                    title: qsTr("Body8R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 8 && (!_showMinMax || _statisticsMode === 2)
                    role: "body9R"
                    title: qsTr("Body9R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 8 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body9R_min"
                    title: qsTr("Body9R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 8 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body9R_max"
                    title: qsTr("Body9R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 9 && (!_showMinMax || _statisticsMode === 2)
                    role: "body10R"
                    title: qsTr("Body10R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 9 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body10R_min"
                    title: qsTr("Body10R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 9 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body10R_max"
                    title: qsTr("Body10R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 10 && (!_showMinMax || _statisticsMode === 2)
                    role: "body11R"
                    title: qsTr("Body11R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 10 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body11R_min"
                    title: qsTr("Body11R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 10 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body11R_max"
                    title: qsTr("Body11R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 11 && (!_showMinMax || _statisticsMode === 2)
                    role: "body12R"
                    title: qsTr("Body12R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 11 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body12R_min"
                    title: qsTr("Body12R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 11 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body12R_max"
                    title: qsTr("Body12R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 12 && (!_showMinMax || _statisticsMode === 2)
                    role: "body13R"
                    title: qsTr("Body13R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 12 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body13R_min"
                    title: qsTr("Body13R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 12 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body13R_max"
                    title: qsTr("Body13R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 13 && (!_showMinMax || _statisticsMode === 2)
                    role: "body14R"
                    title: qsTr("Body14R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 13 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body14R_min"
                    title: qsTr("Body14R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 13 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body14R_max"
                    title: qsTr("Body14R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 14 && (!_showMinMax || _statisticsMode === 2)
                    role: "body15R"
                    title: qsTr("Body15R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 14 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body15R_min"
                    title: qsTr("Body15R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 14 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body15R_max"
                    title: qsTr("Body15R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 15 && (!_showMinMax || _statisticsMode === 2)
                    role: "body16R"
                    title: qsTr("Body16R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 15 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body16R_min"
                    title: qsTr("Body16R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 15 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body16R_max"
                    title: qsTr("Body16R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 16 && (!_showMinMax || _statisticsMode === 2)
                    role: "body17R"
                    title: qsTr("Body17R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 16 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body17R_min"
                    title: qsTr("Body17R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 16 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body17R_max"
                    title: qsTr("Body17R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 17 && (!_showMinMax || _statisticsMode === 2)
                    role: "body18R"
                    title: qsTr("Body18R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 17 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body18R_min"
                    title: qsTr("Body18R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 17 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body18R_max"
                    title: qsTr("Body18R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 18 && (!_showMinMax || _statisticsMode === 2)
                    role: "body19R"
                    title: qsTr("Body19R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 18 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body19R_min"
                    title: qsTr("Body19R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 18 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body19R_max"
                    title: qsTr("Body19R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 19 && (!_showMinMax || _statisticsMode === 2)
                    role: "body20R"
                    title: qsTr("Body20R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 19 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body20R_min"
                    title: qsTr("Body20R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 19 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body20R_max"
                    title: qsTr("Body20R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 20 && (!_showMinMax || _statisticsMode === 2)
                    role: "body21R"
                    title: qsTr("Body21R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 20 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body21R_min"
                    title: qsTr("Body21R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 20 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body21R_max"
                    title: qsTr("Body21R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 21 && (!_showMinMax || _statisticsMode === 2)
                    role: "body22R"
                    title: qsTr("Body22R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 21 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body22R_min"
                    title: qsTr("Body22R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 21 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body22R_max"
                    title: qsTr("Body22R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 22 && (!_showMinMax || _statisticsMode === 2)
                    role: "body23R"
                    title: qsTr("Body23R")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 22 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body23R_min"
                    title: qsTr("Body23R Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _bodyRNumber > 22 && _showStatistics && (_showMinMax || _statisticsMode === 2)
                    role: "body23R_max"
                    title: qsTr("Body23R Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                }

                // Для параметра Tilt
                QtC1.TableViewColumn {
                    role: "tilt"
                    title: qsTr("Tilt")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "tilt_min"
                    title: qsTr("Tilt Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "tilt_max"
                    title: qsTr("Tilt Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра Lean
                QtC1.TableViewColumn {
                    role: "lean"
                    title: qsTr("Lean")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "lean_min"
                    title: qsTr("Lean Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "lean_max"
                    title: qsTr("Lean Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра F
                QtC1.TableViewColumn {
                    role: "f"
                    title: qsTr("F")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "f_min"
                    title: qsTr("F Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "f_max"
                    title: qsTr("F Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра A
                QtC1.TableViewColumn {
                    role: "a"
                    title: qsTr("A")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "a_min"
                    title: qsTr("A Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "a_max"
                    title: qsTr("A Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра T
                QtC1.TableViewColumn {
                    role: "t"
                    title: qsTr("T")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "t_min"
                    title: qsTr("T Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "t_max"
                    title: qsTr("T Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра E
                QtC1.TableViewColumn {
                    role: "e"
                    title: qsTr("E")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "e_min"
                    title: qsTr("E Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "e_max"
                    title: qsTr("E Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра B
                QtC1.TableViewColumn {
                    role: "b"
                    title: qsTr("B")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "b_min"
                    title: qsTr("B Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "b_max"
                    title: qsTr("B Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра D
                QtC1.TableViewColumn {
                    role: "d"
                    title: qsTr("D")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "d_min"
                    title: qsTr("D Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "d_max"
                    title: qsTr("D Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра S
                QtC1.TableViewColumn {
                    role: "s"
                    title: qsTr("S")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "s_min"
                    title: qsTr("S Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "s_max"
                    title: qsTr("S Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра H
                QtC1.TableViewColumn {
                    role: "h"
                    title: qsTr("H")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "h_min"
                    title: qsTr("H Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "h_max"
                    title: qsTr("H Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра LugT
                QtC1.TableViewColumn {
                    role: "lugT"
                    title: qsTr("LugT")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "lugT_min"
                    title: qsTr("LugT Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "lugT_max"
                    title: qsTr("LugT Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра LugT1
                QtC1.TableViewColumn {
                    role: "lugT1"
                    title: qsTr("LugT1")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "lugT1_min"
                    title: qsTr("LugT1 Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "lugT1_max"
                    title: qsTr("LugT1 Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра DAngle
                QtC1.TableViewColumn {
                    role: "dAngle"
                    title: qsTr("D-Angle")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "dAngle_min"
                    title: qsTr("D-Angle Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "dAngle_max"
                    title: qsTr("D-Angle Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // Для параметра Pushup
                QtC1.TableViewColumn {
                    role: "pushup"
                    title: qsTr("Pushup")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "pushup_min"
                    title: qsTr("Pushup Min")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }
                QtC1.TableViewColumn {
                    role: "pushup_max"
                    title: qsTr("Pushup Max")
                    width: tableObjectID.widthCell * 0.8
                    horizontalAlignment: Text.AlignHCenter
                    visible: _showStatistics && (_showMinMax || _statisticsMode === 2)
                }

                // 1
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt1"
                    title: qsTr("RecShrt") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong1"
                    title: qsTr("RecLong") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag1"
                    title: qsTr("RecDiag") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide1"
                    title: qsTr("SqrSide") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag1"
                    title: qsTr("SqrDiag") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt1"
                    title: qsTr("OvlShrt") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 1 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong1"
                    title: qsTr("OvlLong") + "1"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 2
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt2"
                    title: qsTr("RecShrt") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong2"
                    title: qsTr("RecLong") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag2"
                    title: qsTr("RecDiag") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide2"
                    title: qsTr("SqrSide") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag2"
                    title: qsTr("SqrDiag") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt2"
                    title: qsTr("OvlShrt") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 2 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong2"
                    title: qsTr("OvlLong") + "2"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 3
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt3"
                    title: qsTr("RecShrt") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong3"
                    title: qsTr("RecLong") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag3"
                    title: qsTr("RecDiag") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide3"
                    title: qsTr("SqrSide") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag3"
                    title: qsTr("SqrDiag") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt3"
                    title: qsTr("OvlShrt") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 3 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong3"
                    title: qsTr("OvlLong") + "3"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 4
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt4"
                    title: qsTr("RecShrt") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong4"
                    title: qsTr("RecLong") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag4"
                    title: qsTr("RecDiag") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide4"
                    title: qsTr("SqrSide") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag4"
                    title: qsTr("SqrDiag") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt4"
                    title: qsTr("OvlShrt") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 4 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong4"
                    title: qsTr("OvlLong") + "4"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 5
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt5"
                    title: qsTr("RecShrt") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong5"
                    title: qsTr("RecLong") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag5"
                    title: qsTr("RecDiag") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide5"
                    title: qsTr("SqrSide") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag5"
                    title: qsTr("SqrDiag") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt5"
                    title: qsTr("OvlShrt") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 5 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong5"
                    title: qsTr("OvlLong") + "5"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 6
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt6"
                    title: qsTr("RecShrt") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong6"
                    title: qsTr("RecLong") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag6"
                    title: qsTr("RecDiag") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide6"
                    title: qsTr("SqrSide") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag6"
                    title: qsTr("SqrDiag") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt6"
                    title: qsTr("OvlShrt") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 6 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong6"
                    title: qsTr("OvlLong") + "6"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 7
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt7"
                    title: qsTr("RecShrt") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong7"
                    title: qsTr("RecLong") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag7"
                    title: qsTr("RecDiag") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide7"
                    title: qsTr("SqrSide") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag7"
                    title: qsTr("SqrDiag") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt7"
                    title: qsTr("OvlShrt") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 7 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong7"
                    title: qsTr("OvlLong") + "7"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                // 8
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recShrt8"
                    title: qsTr("RecShrt") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recLong8"
                    title: qsTr("RecLong") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 0 && (!_showMinMax || _statisticsMode === 2)
                    role: "recDiag8"
                    title: qsTr("RecDiag") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrSide8"
                    title: qsTr("SqrSide") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 1 && (!_showMinMax || _statisticsMode === 2)
                    role: "sqrDiag8"
                    title: qsTr("SqrDiag") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }

                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlShrt8"
                    title: qsTr("OvlShrt") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }
                QtC1.TableViewColumn {
                    visible: _nonRoundShapeNumber >= 8 && _nonRoundShape == 2 && (!_showMinMax || _statisticsMode === 2)
                    role: "ovlLong8"
                    title: qsTr("OvlLong") + "8"
                    width: tableObjectID.widthCell*2
                    horizontalAlignment: Text.AlignHCenter
                }


                QtC1.TableViewColumn {
                    role: "flange"
                    title: qsTr("Flange")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }
                QtC1.TableViewColumn {
                    role: "knockout"
                    title: qsTr("Knockout")
                    width: tableObjectID.widthCell
                    horizontalAlignment: Text.AlignHCenter
                    visible: !_showMinMax || _statisticsMode === 2
                }

                headerDelegate:Rectangle{
                    color: _headerColor
                    height: tableObjectID.heightCell
                    border.width: _borderSize
                    border.color: _borderColor
                    Text{
                        anchors.centerIn : parent
                        text: styleData.value
                        color: _textColor
                        font.pointSize: _fontSize + 1
                        font.bold: true
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }

                }
                rowDelegate: Rectangle {
                    height: tableObjectID.heightCell
                }

                itemDelegate: Rectangle {
                    id: item_id
                    height: tableObjectID.heightCell
                    border.width: _borderSize
                    border.color: _borderColor
                    color:{
                        if(styleData.value && styleData.value.indexOf("$") !== -1)
                            return "red"
                        return styleData.row %2 ? ConfigView.mainWhiteColor : ConfigView.mainWhiteColor
                    }

                    Text {
                        id: content_text
                        width: parent.width
                        height: parent.height
                        text: {
                            if(styleData.role === "moldNumber" && styleData.value)
                                return styleData.value
                            if(styleData.value)
                                return styleData.value.replace("$", "")
                            return ""
                        }
                        font.bold: true
                        font.pointSize: _fontSize
                        anchors.centerIn : parent
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                        wrapMode: Text.WrapAnywhere
                        color: ConfigView.mainBlueColor
                    }

                }

            }

        }

    }

    QDialog.FileDialog {
        id: print_table_dlg
        title: "Select Save Report PDF"
        selectExisting: false
        selectMultiple: false
        nameFilters: ["PDF Files (*.pdf)"]
        onAccepted: {
            var raw_text = String(print_table_dlg.fileUrl);
            var path = Qt.platform.os === "windows" ?
                        raw_text.substring(8, raw_text.length) :
                        raw_text.substring(7, raw_text.length)


            var extension = ".pdf"
            if (!path.endsWith(extension)) {
                path += extension; // Add '.csv' if not present
            }

            doPrintFilePDF(path);

            print_table_dlg.close()
        }
    }

    QDialog.FileDialog {
        id: export_table_dlg
        title: qsTr("Select Save Report CSV")
        selectMultiple: false
        selectExisting: false
        nameFilters: ["CSV Files (*.csv)", "All Files (*.*)"]
        onAccepted: {
            var raw_text = String(export_table_dlg.fileUrl);
            var path = Qt.platform.os === "windows" ?
                        raw_text.substring(8, raw_text.length) :
                        raw_text.substring(7, raw_text.length)


            var extension = ".csv"
            if (!path.endsWith(extension)) {
                path += extension; // Add '.csv' if not present
            }

            doExportFileCSV(path);

            export_table_dlg.close()
        }
    }
    property string reportData: ""
    property string reportHeader: ""

    function reportDataCSVBuilder()
    {
        // reset
        reportData = ""

        // build header
        for (var i = 0; i < tableview.columnCount; i++) {
            var column = tableview.getColumn(i);
            if(column.visible) {
                reportData += column.title + ","
            }
        }
        reportData += "\n"

        for (var i = 0; i < sectionedModel.count; i++) {
            var item = sectionedModel.get(i);

            // Экспортируем все видимые столбцы
            for (var j = 0; j < tableview.columnCount; j++) {
                var column = tableview.getColumn(j);
                if(column.visible && column.role in item) {
                    var value = item[column.role];
                    if (value && value !== "") {
                        // Убираем $ для числовых значений
                        var cleanValue = value.replace("$", "");
                        if (!isNaN(cleanValue) && cleanValue !== "") {
                            reportData += Number(cleanValue).toFixed(3) + ",";
                        } else {
                            reportData += cleanValue + ",";
                        }
                    } else {
                        reportData += ",";
                    }
                }
            }
            reportData += "\n";
        }
    }

    function reportDataPDFBuilder()
    {
        // reset
        reportData = ""
        reportHeader = ""

        //build header
        for (var i = 0; i < tableview.columnCount; i++) {
            var column = tableview.getColumn(i);
            if(column.visible)
                reportHeader += column.title + "\n"
        }


        for (var i = 0; i < sectionedModel.count; i++) {
            var item = sectionedModel.get(i);

            // Экспортируем все видимые столбцы
            for (var j = 0; j < tableview.columnCount; j++) {
                var column = tableview.getColumn(j);
                if(column.visible && column.role in item) {
                    var value = item[column.role];
                    if (value && value !== "") {
                        // Убираем $ для числовых значений
                        var cleanValue = value.replace("$", "");
                        if (!isNaN(cleanValue) && cleanValue !== "") {
                            reportData += Number(cleanValue).toFixed(3) + "\n";
                        } else {
                            reportData += cleanValue + "\n";
                        }
                    } else {
                        reportData += "\n";
                    }
                }
            }
            reportData += "------\n";
        }
    }

    function doExportFileCSV(fullSavePath)
    {
        reportDataCSVBuilder()
        _viewModel.saveReportTableCSV(fullSavePath, reportData)

    }

    function doPrintFilePDF(fullSavePath)
    {
         reportDataPDFBuilder()
        _viewModel.saveReportTablePDF(fullSavePath, reportData, reportHeader)
    }

    Connections{
        target: _viewModel
        function onReportNumberChanged_Signal(number) {
            report_view._lockReportCbbSignal = true
            var temp = report_cbb.currentIndex
            report_cbb_model.clear();
            for(var i = 1; i <= number; i++)
            {
                report_cbb_model.append( { text: qsTr("Report") + " " + i } );
            }
            report_cbb.currentIndex = temp;
            report_view._lockReportCbbSignal = false
        }

        function onAddInspectionDataWithStats_Signal(data, defectInfos) {
            addData(data, defectInfos);
        }

        function onAddInspectionData_Signal(data) {
            // Для обратной совместимости
            addData(data, null);
        }

        function onClearInspectionData_Signal(){
            clearData()
        }

        function onUpdateVisionParamNumber_Signal(bodyRNumber, nonRoundShapeNumber, nonRoundShape){
            _bodyRNumber = bodyRNumber
            _nonRoundShapeNumber = nonRoundShapeNumber
            _nonRoundShape = nonRoundShape
        }

        function onUpdateCurrentReport(number) {
            report_view._lockReportCbbSignal = true
            report_cbb.currentIndex = number
            report_view._lockReportCbbSignal = false
        }
    }


}
