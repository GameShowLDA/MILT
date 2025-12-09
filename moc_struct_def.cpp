/****************************************************************************
** Meta object code from reading C++ file 'struct_def.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Script/Define/struct_def.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'struct_def.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraSettingData_t {
    QByteArrayData data[14];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraSettingData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraSettingData_t qt_meta_stringdata_CameraSettingData = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CameraSettingData"
QT_MOC_LITERAL(1, 18, 5), // "camID"
QT_MOC_LITERAL(2, 24, 11), // "TRACK_INDEX"
QT_MOC_LITERAL(3, 36, 7), // "camType"
QT_MOC_LITERAL(4, 44, 11), // "CAMERA_TYPE"
QT_MOC_LITERAL(5, 56, 9), // "camSerial"
QT_MOC_LITERAL(6, 66, 8), // "camIndex"
QT_MOC_LITERAL(7, 75, 11), // "pixelFormat"
QT_MOC_LITERAL(8, 87, 19), // "CAMERA_PIXEL_FORMAT"
QT_MOC_LITERAL(9, 107, 6), // "dlPath"
QT_MOC_LITERAL(10, 114, 4), // "roiX"
QT_MOC_LITERAL(11, 119, 4), // "roiY"
QT_MOC_LITERAL(12, 124, 8), // "roiWidth"
QT_MOC_LITERAL(13, 133, 9) // "roiHeight"

    },
    "CameraSettingData\0camID\0TRACK_INDEX\0"
    "camType\0CAMERA_TYPE\0camSerial\0camIndex\0"
    "pixelFormat\0CAMERA_PIXEL_FORMAT\0dlPath\0"
    "roiX\0roiY\0roiWidth\0roiHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraSettingData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, 0x80000000 | 4, 0x0009500b,
       5, QMetaType::QString, 0x00095003,
       6, QMetaType::Int, 0x00095003,
       7, 0x80000000 | 8, 0x0009500b,
       9, QMetaType::QString, 0x00095003,
      10, QMetaType::Int, 0x00095003,
      11, QMetaType::Int, 0x00095003,
      12, QMetaType::Int, 0x00095003,
      13, QMetaType::Int, 0x00095003,

       0        // eod
};

void CameraSettingData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<CameraSettingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TRACK_INDEX*>(_v) = _t->_camID; break;
        case 1: *reinterpret_cast< CAMERA_TYPE*>(_v) = _t->_camType; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_camSerial; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_camIndex; break;
        case 4: *reinterpret_cast< CAMERA_PIXEL_FORMAT*>(_v) = _t->_pixelFormat; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->_dlPath; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->_roiX; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->_roiY; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->_roiWidth; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->_roiHeight; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<CameraSettingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_camID != *reinterpret_cast< TRACK_INDEX*>(_v)) {
                _t->_camID = *reinterpret_cast< TRACK_INDEX*>(_v);
            }
            break;
        case 1:
            if (_t->_camType != *reinterpret_cast< CAMERA_TYPE*>(_v)) {
                _t->_camType = *reinterpret_cast< CAMERA_TYPE*>(_v);
            }
            break;
        case 2:
            if (_t->_camSerial != *reinterpret_cast< QString*>(_v)) {
                _t->_camSerial = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_camIndex != *reinterpret_cast< int*>(_v)) {
                _t->_camIndex = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->_pixelFormat != *reinterpret_cast< CAMERA_PIXEL_FORMAT*>(_v)) {
                _t->_pixelFormat = *reinterpret_cast< CAMERA_PIXEL_FORMAT*>(_v);
            }
            break;
        case 5:
            if (_t->_dlPath != *reinterpret_cast< QString*>(_v)) {
                _t->_dlPath = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 6:
            if (_t->_roiX != *reinterpret_cast< int*>(_v)) {
                _t->_roiX = *reinterpret_cast< int*>(_v);
            }
            break;
        case 7:
            if (_t->_roiY != *reinterpret_cast< int*>(_v)) {
                _t->_roiY = *reinterpret_cast< int*>(_v);
            }
            break;
        case 8:
            if (_t->_roiWidth != *reinterpret_cast< int*>(_v)) {
                _t->_roiWidth = *reinterpret_cast< int*>(_v);
            }
            break;
        case 9:
            if (_t->_roiHeight != *reinterpret_cast< int*>(_v)) {
                _t->_roiHeight = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CameraSettingData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CameraSettingData.data,
    qt_meta_data_CameraSettingData,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_CommonSettingData_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommonSettingData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommonSettingData_t qt_meta_stringdata_CommonSettingData = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CommonSettingData"
QT_MOC_LITERAL(1, 18, 12), // "savingFolder"
QT_MOC_LITERAL(2, 31, 9), // "ipAddress"
QT_MOC_LITERAL(3, 41, 6) // "ipPort"

    },
    "CommonSettingData\0savingFolder\0ipAddress\0"
    "ipPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommonSettingData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::Int, 0x00095003,

       0        // eod
};

void CommonSettingData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<CommonSettingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_savingFolder; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_ipAddress; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->_ipPort; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<CommonSettingData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_savingFolder != *reinterpret_cast< QString*>(_v)) {
                _t->_savingFolder = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_ipAddress != *reinterpret_cast< QString*>(_v)) {
                _t->_ipAddress = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_ipPort != *reinterpret_cast< int*>(_v)) {
                _t->_ipPort = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CommonSettingData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CommonSettingData.data,
    qt_meta_data_CommonSettingData,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_InspectionInfoChildItem_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InspectionInfoChildItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InspectionInfoChildItem_t qt_meta_stringdata_InspectionInfoChildItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "InspectionInfoChildItem"
QT_MOC_LITERAL(1, 24, 5), // "value"
QT_MOC_LITERAL(2, 30, 6) // "isPass"

    },
    "InspectionInfoChildItem\0value\0isPass"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InspectionInfoChildItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariant, 0x00095103,
       2, QMetaType::Bool, 0x00095103,

       0        // eod
};

void InspectionInfoChildItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<InspectionInfoChildItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsPass(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<InspectionInfoChildItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setIsPass(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject InspectionInfoChildItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_InspectionInfoChildItem.data,
    qt_meta_data_InspectionInfoChildItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_InspectionInfoItem_t {
    QByteArrayData data[34];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InspectionInfoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InspectionInfoItem_t qt_meta_stringdata_InspectionInfoItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "InspectionInfoItem"
QT_MOC_LITERAL(1, 19, 8), // "dateTime"
QT_MOC_LITERAL(2, 28, 23), // "InspectionInfoChildItem"
QT_MOC_LITERAL(3, 52, 5), // "lotID"
QT_MOC_LITERAL(4, 58, 3), // "job"
QT_MOC_LITERAL(5, 62, 10), // "moldNumber"
QT_MOC_LITERAL(6, 73, 6), // "height"
QT_MOC_LITERAL(7, 80, 6), // "weight"
QT_MOC_LITERAL(8, 87, 5), // "bodyR"
QT_MOC_LITERAL(9, 93, 30), // "QList<InspectionInfoChildItem>"
QT_MOC_LITERAL(10, 124, 4), // "tilt"
QT_MOC_LITERAL(11, 129, 4), // "lean"
QT_MOC_LITERAL(12, 134, 10), // "dimensionF"
QT_MOC_LITERAL(13, 145, 10), // "dimensionA"
QT_MOC_LITERAL(14, 156, 10), // "dimensionT"
QT_MOC_LITERAL(15, 167, 10), // "dimensionE"
QT_MOC_LITERAL(16, 178, 10), // "dimensionB"
QT_MOC_LITERAL(17, 189, 10), // "dimensionD"
QT_MOC_LITERAL(18, 200, 10), // "dimensionS"
QT_MOC_LITERAL(19, 211, 10), // "dimensionH"
QT_MOC_LITERAL(20, 222, 13), // "dimensionLugT"
QT_MOC_LITERAL(21, 236, 14), // "dimensionLugT1"
QT_MOC_LITERAL(22, 251, 6), // "dAngle"
QT_MOC_LITERAL(23, 258, 6), // "pushup"
QT_MOC_LITERAL(24, 265, 7), // "recShrt"
QT_MOC_LITERAL(25, 273, 7), // "recLong"
QT_MOC_LITERAL(26, 281, 7), // "recDiag"
QT_MOC_LITERAL(27, 289, 7), // "sqrSide"
QT_MOC_LITERAL(28, 297, 7), // "sqrDiag"
QT_MOC_LITERAL(29, 305, 7), // "ovlShrt"
QT_MOC_LITERAL(30, 313, 7), // "ovlLong"
QT_MOC_LITERAL(31, 321, 6), // "flange"
QT_MOC_LITERAL(32, 328, 8), // "knockout"
QT_MOC_LITERAL(33, 337, 10) // "codeNumber"

    },
    "InspectionInfoItem\0dateTime\0"
    "InspectionInfoChildItem\0lotID\0job\0"
    "moldNumber\0height\0weight\0bodyR\0"
    "QList<InspectionInfoChildItem>\0tilt\0"
    "lean\0dimensionF\0dimensionA\0dimensionT\0"
    "dimensionE\0dimensionB\0dimensionD\0"
    "dimensionS\0dimensionH\0dimensionLugT\0"
    "dimensionLugT1\0dAngle\0pushup\0recShrt\0"
    "recLong\0recDiag\0sqrSide\0sqrDiag\0ovlShrt\0"
    "ovlLong\0flange\0knockout\0codeNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InspectionInfoItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      31,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 2, 0x0009510b,
       4, 0x80000000 | 2, 0x0009510b,
       5, 0x80000000 | 2, 0x0009510b,
       6, 0x80000000 | 2, 0x0009510b,
       7, 0x80000000 | 2, 0x0009510b,
       8, 0x80000000 | 9, 0x0009510b,
      10, 0x80000000 | 2, 0x0009510b,
      11, 0x80000000 | 2, 0x0009510b,
      12, 0x80000000 | 2, 0x0009510b,
      13, 0x80000000 | 2, 0x0009510b,
      14, 0x80000000 | 2, 0x0009510b,
      15, 0x80000000 | 2, 0x0009510b,
      16, 0x80000000 | 2, 0x0009510b,
      17, 0x80000000 | 2, 0x0009510b,
      18, 0x80000000 | 2, 0x0009510b,
      19, 0x80000000 | 2, 0x0009510b,
      20, 0x80000000 | 2, 0x0009510b,
      21, 0x80000000 | 2, 0x0009510b,
      22, 0x80000000 | 2, 0x0009510b,
      23, 0x80000000 | 2, 0x0009510b,
      24, 0x80000000 | 9, 0x0009510b,
      25, 0x80000000 | 9, 0x0009510b,
      26, 0x80000000 | 9, 0x0009510b,
      27, 0x80000000 | 9, 0x0009510b,
      28, 0x80000000 | 9, 0x0009510b,
      29, 0x80000000 | 9, 0x0009510b,
      30, 0x80000000 | 9, 0x0009510b,
      31, 0x80000000 | 2, 0x0009510b,
      32, 0x80000000 | 2, 0x0009510b,
      33, 0x80000000 | 2, 0x0009510b,

       0        // eod
};

void InspectionInfoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<InspectionInfoItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDateTime(); break;
        case 1: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getLotID(); break;
        case 2: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getJob(); break;
        case 3: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getMoldNumber(); break;
        case 4: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getHeight(); break;
        case 5: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getWeight(); break;
        case 6: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getBodyR(); break;
        case 7: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getTilt(); break;
        case 8: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getLean(); break;
        case 9: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionF(); break;
        case 10: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionA(); break;
        case 11: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionT(); break;
        case 12: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionE(); break;
        case 13: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionB(); break;
        case 14: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionD(); break;
        case 15: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionS(); break;
        case 16: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionH(); break;
        case 17: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionLugT(); break;
        case 18: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDimensionLugT1(); break;
        case 19: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getDAngle(); break;
        case 20: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getPushup(); break;
        case 21: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getRecShrt(); break;
        case 22: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getRecLong(); break;
        case 23: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getRecDiag(); break;
        case 24: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getSqrSide(); break;
        case 25: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getSqrDiag(); break;
        case 26: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getOvlShrt(); break;
        case 27: *reinterpret_cast< QList<InspectionInfoChildItem>*>(_v) = _t->getOvlLong(); break;
        case 28: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getFlange(); break;
        case 29: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getKnockout(); break;
        case 30: *reinterpret_cast< InspectionInfoChildItem*>(_v) = _t->getCodeNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<InspectionInfoItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDateTime(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 1: _t->setLotID(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 2: _t->setJob(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 3: _t->setMoldNumber(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 4: _t->setHeight(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 5: _t->setWeight(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 6: _t->setBodyR(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 7: _t->setTilt(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 8: _t->setLean(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 9: _t->setDimensionF(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 10: _t->setDimensionA(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 11: _t->setDimensionT(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 12: _t->setDimensionE(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 13: _t->setDimensionB(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 14: _t->setDimensionD(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 15: _t->setDimensionS(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 16: _t->setDimensionH(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 17: _t->setDimensionLugT(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 18: _t->setDimensionLugT1(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 19: _t->setDAngle(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 20: _t->setPushup(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 21: _t->setRecShrt(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 22: _t->setRecLong(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 23: _t->setRecDiag(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 24: _t->setSqrSide(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 25: _t->setSqrDiag(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 26: _t->setOvlShrt(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 27: _t->setOvlLong(*reinterpret_cast< QList<InspectionInfoChildItem>*>(_v)); break;
        case 28: _t->setFlange(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 29: _t->setKnockout(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        case 30: _t->setCodeNumber(*reinterpret_cast< InspectionInfoChildItem*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject InspectionInfoItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_InspectionInfoItem.data,
    qt_meta_data_InspectionInfoItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
