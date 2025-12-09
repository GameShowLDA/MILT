/****************************************************************************
** Meta object code from reading C++ file 'image_writer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/image_writer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_writer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageWriter_t {
    QByteArrayData data[22];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageWriter_t qt_meta_stringdata_ImageWriter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageWriter"
QT_MOC_LITERAL(1, 12, 15), // "ui_widthChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "ui_heightChanged"
QT_MOC_LITERAL(4, 46, 13), // "ui_topChanged"
QT_MOC_LITERAL(5, 60, 14), // "ui_leftChanged"
QT_MOC_LITERAL(6, 75, 16), // "img_widthChanged"
QT_MOC_LITERAL(7, 92, 17), // "img_heightChanged"
QT_MOC_LITERAL(8, 110, 17), // "updateSourceImage"
QT_MOC_LITERAL(9, 128, 11), // "setUi_width"
QT_MOC_LITERAL(10, 140, 12), // "setUi_height"
QT_MOC_LITERAL(11, 153, 9), // "setUi_top"
QT_MOC_LITERAL(12, 163, 10), // "setUi_left"
QT_MOC_LITERAL(13, 174, 12), // "setImg_width"
QT_MOC_LITERAL(14, 187, 13), // "setImg_height"
QT_MOC_LITERAL(15, 201, 8), // "ui_image"
QT_MOC_LITERAL(16, 210, 8), // "ui_width"
QT_MOC_LITERAL(17, 219, 9), // "ui_height"
QT_MOC_LITERAL(18, 229, 6), // "ui_top"
QT_MOC_LITERAL(19, 236, 7), // "ui_left"
QT_MOC_LITERAL(20, 244, 9), // "img_width"
QT_MOC_LITERAL(21, 254, 10) // "img_height"

    },
    "ImageWriter\0ui_widthChanged\0\0"
    "ui_heightChanged\0ui_topChanged\0"
    "ui_leftChanged\0img_widthChanged\0"
    "img_heightChanged\0updateSourceImage\0"
    "setUi_width\0setUi_height\0setUi_top\0"
    "setUi_left\0setImg_width\0setImg_height\0"
    "ui_image\0ui_width\0ui_height\0ui_top\0"
    "ui_left\0img_width\0img_height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageWriter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   86,    2, 0x0a /* Public */,
      10,    1,   89,    2, 0x0a /* Public */,
      11,    1,   92,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      13,    1,   98,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
      15, QMetaType::QImage, 0x00095003,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void ImageWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageWriter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ui_widthChanged(); break;
        case 1: _t->ui_heightChanged(); break;
        case 2: _t->ui_topChanged(); break;
        case 3: _t->ui_leftChanged(); break;
        case 4: _t->img_widthChanged(); break;
        case 5: _t->img_heightChanged(); break;
        case 6: _t->updateSourceImage(); break;
        case 7: _t->setUi_width((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setUi_height((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setUi_top((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setUi_left((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setImg_width((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setImg_height((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::ui_widthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::ui_heightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::ui_topChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::ui_leftChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::img_widthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::img_heightChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ImageWriter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageWriter::updateSourceImage)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageWriter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->image; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->ui_width(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->ui_height(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->ui_top(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->ui_left(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->img_width(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->img_height(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageWriter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImage(*reinterpret_cast< QImage*>(_v)); break;
        case 1: _t->setUi_width(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUi_height(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setUi_top(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setUi_left(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setImg_width(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setImg_height(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageWriter::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_ImageWriter.data,
    qt_meta_data_ImageWriter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageWriter.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int ImageWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageWriter::ui_widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageWriter::ui_heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageWriter::ui_topChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ImageWriter::ui_leftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ImageWriter::img_widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ImageWriter::img_heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ImageWriter::updateSourceImage()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
