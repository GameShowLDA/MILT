/****************************************************************************
** Meta object code from reading C++ file 'image_review_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/Review/image_review_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_review_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageReviewVM_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageReviewVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageReviewVM_t qt_meta_stringdata_ImageReviewVM = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ImageReviewVM"
QT_MOC_LITERAL(1, 14, 12), // "imageChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "imageOverlayChanged"
QT_MOC_LITERAL(4, 48, 14), // "docNameChanged"
QT_MOC_LITERAL(5, 63, 8), // "setImage"
QT_MOC_LITERAL(6, 72, 7), // "QImage&"
QT_MOC_LITERAL(7, 80, 5), // "image"
QT_MOC_LITERAL(8, 86, 15), // "setImageOverlay"
QT_MOC_LITERAL(9, 102, 10), // "setDocName"
QT_MOC_LITERAL(10, 113, 5), // "value"
QT_MOC_LITERAL(11, 119, 10), // "imageWidth"
QT_MOC_LITERAL(12, 130, 11), // "imageHeight"
QT_MOC_LITERAL(13, 142, 12), // "imageOverlay"
QT_MOC_LITERAL(14, 155, 7) // "docName"

    },
    "ImageReviewVM\0imageChanged\0\0"
    "imageOverlayChanged\0docNameChanged\0"
    "setImage\0QImage&\0image\0setImageOverlay\0"
    "setDocName\0value\0imageWidth\0imageHeight\0"
    "imageOverlay\0docName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageReviewVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       7, QMetaType::QImage, 0x00495103,
      13, QMetaType::QImage, 0x00495103,
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ImageReviewVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageReviewVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageChanged(); break;
        case 1: _t->imageOverlayChanged(); break;
        case 2: _t->docNameChanged(); break;
        case 3: _t->setImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->setImageOverlay((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 5: _t->setDocName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { int _r = _t->imageWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->imageHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageReviewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageReviewVM::imageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageReviewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageReviewVM::imageOverlayChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageReviewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageReviewVM::docNameChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageReviewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->image(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->imageOverlay(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->docName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageReviewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImage(*reinterpret_cast< QImage*>(_v)); break;
        case 1: _t->setImageOverlay(*reinterpret_cast< QImage*>(_v)); break;
        case 2: _t->setDocName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageReviewVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ImageReviewVM.data,
    qt_meta_data_ImageReviewVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageReviewVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageReviewVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageReviewVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ImageReviewVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageReviewVM::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageReviewVM::imageOverlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageReviewVM::docNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
