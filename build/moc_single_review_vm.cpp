/****************************************************************************
** Meta object code from reading C++ file 'single_review_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/Review/single_review_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'single_review_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SingleReviewVM_t {
    QByteArrayData data[13];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleReviewVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleReviewVM_t qt_meta_stringdata_SingleReviewVM = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SingleReviewVM"
QT_MOC_LITERAL(1, 15, 16), // "listImageChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "infoChanged"
QT_MOC_LITERAL(4, 45, 12), // "setListImage"
QT_MOC_LITERAL(5, 58, 14), // "QList<QImage>&"
QT_MOC_LITERAL(6, 73, 5), // "value"
QT_MOC_LITERAL(7, 79, 7), // "setInfo"
QT_MOC_LITERAL(8, 87, 15), // "listImageListAt"
QT_MOC_LITERAL(9, 103, 5), // "index"
QT_MOC_LITERAL(10, 109, 9), // "listImage"
QT_MOC_LITERAL(11, 119, 13), // "QList<QImage>"
QT_MOC_LITERAL(12, 133, 4) // "info"

    },
    "SingleReviewVM\0listImageChanged\0\0"
    "infoChanged\0setListImage\0QList<QImage>&\0"
    "value\0setInfo\0listImageListAt\0index\0"
    "listImage\0QList<QImage>\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleReviewVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    2,

 // methods: parameters
    QMetaType::QImage, QMetaType::Int,    9,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0049590b,
      12, QMetaType::QString, 0x00495903,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void SingleReviewVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingleReviewVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->listImageChanged(); break;
        case 1: _t->infoChanged(); break;
        case 2: _t->setListImage((*reinterpret_cast< QList<QImage>(*)>(_a[1]))); break;
        case 3: _t->setInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QImage _r = _t->listImageListAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SingleReviewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleReviewVM::listImageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SingleReviewVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleReviewVM::infoChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QImage> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SingleReviewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QImage>*>(_v) = _t->listImage(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->info(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SingleReviewVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setListImage(*reinterpret_cast< QList<QImage>*>(_v)); break;
        case 1: _t->setInfo(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SingleReviewVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SingleReviewVM.data,
    qt_meta_data_SingleReviewVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SingleReviewVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleReviewVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleReviewVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SingleReviewVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SingleReviewVM::listImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SingleReviewVM::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
