/****************************************************************************
** Meta object code from reading C++ file 'image_view_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/image_view_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_view_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageViewVM_t {
    QByteArrayData data[56];
    char stringdata0[861];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageViewVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageViewVM_t qt_meta_stringdata_ImageViewVM = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageViewVM"
QT_MOC_LITERAL(1, 12, 12), // "imageChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "imageOverlayChanged"
QT_MOC_LITERAL(4, 46, 23), // "isShowBelowImageChanged"
QT_MOC_LITERAL(5, 70, 14), // "docNameChanged"
QT_MOC_LITERAL(6, 85, 19), // "serialNumberChanged"
QT_MOC_LITERAL(7, 105, 26), // "inspectFunctionNameChanged"
QT_MOC_LITERAL(8, 132, 20), // "inspectResultChanged"
QT_MOC_LITERAL(9, 153, 12), // "docIDChanged"
QT_MOC_LITERAL(10, 166, 14), // "trackIDChanged"
QT_MOC_LITERAL(11, 181, 19), // "isConnectCamChanged"
QT_MOC_LITERAL(12, 201, 21), // "inspectionInfoChanged"
QT_MOC_LITERAL(13, 223, 20), // "processedTimeChanged"
QT_MOC_LITERAL(14, 244, 21), // "dlModelVersionChanged"
QT_MOC_LITERAL(15, 266, 26), // "inspectionCycleInfoChanged"
QT_MOC_LITERAL(16, 293, 27), // "inspectionFolderInfoChanged"
QT_MOC_LITERAL(17, 321, 17), // "doSnapImageSignal"
QT_MOC_LITERAL(18, 339, 8), // "setImage"
QT_MOC_LITERAL(19, 348, 7), // "QImage&"
QT_MOC_LITERAL(20, 356, 5), // "image"
QT_MOC_LITERAL(21, 362, 15), // "setImageOverlay"
QT_MOC_LITERAL(22, 378, 19), // "setIsShowBelowImage"
QT_MOC_LITERAL(23, 398, 5), // "value"
QT_MOC_LITERAL(24, 404, 10), // "setDocName"
QT_MOC_LITERAL(25, 415, 15), // "setSerialNumber"
QT_MOC_LITERAL(26, 431, 22), // "setInspectFunctionName"
QT_MOC_LITERAL(27, 454, 16), // "setInspectResult"
QT_MOC_LITERAL(28, 471, 8), // "setDocID"
QT_MOC_LITERAL(29, 480, 4), // "int&"
QT_MOC_LITERAL(30, 485, 10), // "setTrackID"
QT_MOC_LITERAL(31, 496, 15), // "setIsConnectCam"
QT_MOC_LITERAL(32, 512, 17), // "setInspectionInfo"
QT_MOC_LITERAL(33, 530, 16), // "setProcessedTime"
QT_MOC_LITERAL(34, 547, 17), // "setDlModelVersion"
QT_MOC_LITERAL(35, 565, 22), // "setInspectionCycleInfo"
QT_MOC_LITERAL(36, 588, 23), // "setInspectionFolderInfo"
QT_MOC_LITERAL(37, 612, 10), // "imageWidth"
QT_MOC_LITERAL(38, 623, 11), // "imageHeight"
QT_MOC_LITERAL(39, 635, 11), // "doSnapImage"
QT_MOC_LITERAL(40, 647, 11), // "doSaveImage"
QT_MOC_LITERAL(41, 659, 4), // "path"
QT_MOC_LITERAL(42, 664, 12), // "imageOverlay"
QT_MOC_LITERAL(43, 677, 16), // "isShowBelowImage"
QT_MOC_LITERAL(44, 694, 7), // "docName"
QT_MOC_LITERAL(45, 702, 12), // "serialNumber"
QT_MOC_LITERAL(46, 715, 19), // "inspectFunctionName"
QT_MOC_LITERAL(47, 735, 13), // "inspectResult"
QT_MOC_LITERAL(48, 749, 5), // "docID"
QT_MOC_LITERAL(49, 755, 7), // "trackID"
QT_MOC_LITERAL(50, 763, 12), // "isConnectCam"
QT_MOC_LITERAL(51, 776, 14), // "inspectionInfo"
QT_MOC_LITERAL(52, 791, 13), // "processedTime"
QT_MOC_LITERAL(53, 805, 14), // "dlModelVersion"
QT_MOC_LITERAL(54, 820, 19), // "inspectionCycleInfo"
QT_MOC_LITERAL(55, 840, 20) // "inspectionFolderInfo"

    },
    "ImageViewVM\0imageChanged\0\0imageOverlayChanged\0"
    "isShowBelowImageChanged\0docNameChanged\0"
    "serialNumberChanged\0inspectFunctionNameChanged\0"
    "inspectResultChanged\0docIDChanged\0"
    "trackIDChanged\0isConnectCamChanged\0"
    "inspectionInfoChanged\0processedTimeChanged\0"
    "dlModelVersionChanged\0inspectionCycleInfoChanged\0"
    "inspectionFolderInfoChanged\0"
    "doSnapImageSignal\0setImage\0QImage&\0"
    "image\0setImageOverlay\0setIsShowBelowImage\0"
    "value\0setDocName\0setSerialNumber\0"
    "setInspectFunctionName\0setInspectResult\0"
    "setDocID\0int&\0setTrackID\0setIsConnectCam\0"
    "setInspectionInfo\0setProcessedTime\0"
    "setDlModelVersion\0setInspectionCycleInfo\0"
    "setInspectionFolderInfo\0imageWidth\0"
    "imageHeight\0doSnapImage\0doSaveImage\0"
    "path\0imageOverlay\0isShowBelowImage\0"
    "docName\0serialNumber\0inspectFunctionName\0"
    "inspectResult\0docID\0trackID\0isConnectCam\0"
    "inspectionInfo\0processedTime\0"
    "dlModelVersion\0inspectionCycleInfo\0"
    "inspectionFolderInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageViewVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      15,  256, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    0,  190,    2, 0x06 /* Public */,
       4,    0,  191,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    0,  193,    2, 0x06 /* Public */,
       7,    0,  194,    2, 0x06 /* Public */,
       8,    0,  195,    2, 0x06 /* Public */,
       9,    0,  196,    2, 0x06 /* Public */,
      10,    0,  197,    2, 0x06 /* Public */,
      11,    0,  198,    2, 0x06 /* Public */,
      12,    0,  199,    2, 0x06 /* Public */,
      13,    0,  200,    2, 0x06 /* Public */,
      14,    0,  201,    2, 0x06 /* Public */,
      15,    0,  202,    2, 0x06 /* Public */,
      16,    0,  203,    2, 0x06 /* Public */,
      17,    0,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  205,    2, 0x0a /* Public */,
      21,    1,  208,    2, 0x0a /* Public */,
      22,    1,  211,    2, 0x0a /* Public */,
      24,    1,  214,    2, 0x0a /* Public */,
      25,    1,  217,    2, 0x0a /* Public */,
      26,    1,  220,    2, 0x0a /* Public */,
      27,    1,  223,    2, 0x0a /* Public */,
      28,    1,  226,    2, 0x0a /* Public */,
      30,    1,  229,    2, 0x0a /* Public */,
      31,    1,  232,    2, 0x0a /* Public */,
      32,    1,  235,    2, 0x0a /* Public */,
      33,    1,  238,    2, 0x0a /* Public */,
      34,    1,  241,    2, 0x0a /* Public */,
      35,    1,  244,    2, 0x0a /* Public */,
      36,    1,  247,    2, 0x0a /* Public */,
      37,    0,  250,    2, 0x0a /* Public */,
      38,    0,  251,    2, 0x0a /* Public */,
      39,    0,  252,    2, 0x0a /* Public */,
      40,    1,  253,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, 0x80000000 | 29,   23,
    QMetaType::Void, 0x80000000 | 29,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Float,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,

 // properties: name, type, flags
      20, QMetaType::QImage, 0x00495103,
      42, QMetaType::QImage, 0x00495103,
      43, QMetaType::Bool, 0x00495103,
      44, QMetaType::QString, 0x00495103,
      45, QMetaType::QString, 0x00495103,
      46, QMetaType::QString, 0x00495103,
      47, QMetaType::QString, 0x00495103,
      48, QMetaType::Int, 0x00495103,
      49, QMetaType::Int, 0x00495103,
      50, QMetaType::Bool, 0x00495103,
      51, QMetaType::QString, 0x00495103,
      52, QMetaType::Float, 0x00495103,
      53, QMetaType::QString, 0x00495103,
      54, QMetaType::Int, 0x00495103,
      55, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,

       0        // eod
};

void ImageViewVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageViewVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageChanged(); break;
        case 1: _t->imageOverlayChanged(); break;
        case 2: _t->isShowBelowImageChanged(); break;
        case 3: _t->docNameChanged(); break;
        case 4: _t->serialNumberChanged(); break;
        case 5: _t->inspectFunctionNameChanged(); break;
        case 6: _t->inspectResultChanged(); break;
        case 7: _t->docIDChanged(); break;
        case 8: _t->trackIDChanged(); break;
        case 9: _t->isConnectCamChanged(); break;
        case 10: _t->inspectionInfoChanged(); break;
        case 11: _t->processedTimeChanged(); break;
        case 12: _t->dlModelVersionChanged(); break;
        case 13: _t->inspectionCycleInfoChanged(); break;
        case 14: _t->inspectionFolderInfoChanged(); break;
        case 15: _t->doSnapImageSignal(); break;
        case 16: _t->setImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 17: _t->setImageOverlay((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 18: _t->setIsShowBelowImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setDocName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->setSerialNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->setInspectFunctionName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->setInspectResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->setDocID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->setTrackID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setIsConnectCam((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setInspectionInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->setProcessedTime((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 28: _t->setDlModelVersion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->setInspectionCycleInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setInspectionFolderInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: { int _r = _t->imageWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 32: { int _r = _t->imageHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->doSnapImage(); break;
        case 34: _t->doSaveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::imageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::imageOverlayChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::isShowBelowImageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::docNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::serialNumberChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::inspectFunctionNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::inspectResultChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::docIDChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::trackIDChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::isConnectCamChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::inspectionInfoChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::processedTimeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::dlModelVersionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::inspectionCycleInfoChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::inspectionFolderInfoChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ImageViewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageViewVM::doSnapImageSignal)) {
                *result = 15;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageViewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->image(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->imageOverlay(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isShowBelowImage(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->docName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->serialNumber(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->inspectFunctionName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->inspectResult(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->docID(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->trackID(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isConnectCam(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->inspectionInfo(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->processedTime(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->dlModelVersion(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->inspectionCycleInfo(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->inspectionFolderInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageViewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImage(*reinterpret_cast< QImage*>(_v)); break;
        case 1: _t->setImageOverlay(*reinterpret_cast< QImage*>(_v)); break;
        case 2: _t->setIsShowBelowImage(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDocName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setSerialNumber(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setInspectFunctionName(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setInspectResult(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDocID(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setTrackID(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setIsConnectCam(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setInspectionInfo(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setProcessedTime(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setDlModelVersion(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setInspectionCycleInfo(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setInspectionFolderInfo(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageViewVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ImageViewVM.data,
    qt_meta_data_ImageViewVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageViewVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ImageViewVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageViewVM::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageViewVM::imageOverlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageViewVM::isShowBelowImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ImageViewVM::docNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ImageViewVM::serialNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ImageViewVM::inspectFunctionNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ImageViewVM::inspectResultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ImageViewVM::docIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ImageViewVM::trackIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ImageViewVM::isConnectCamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ImageViewVM::inspectionInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ImageViewVM::processedTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ImageViewVM::dlModelVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ImageViewVM::inspectionCycleInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ImageViewVM::inspectionFolderInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ImageViewVM::doSnapImageSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
