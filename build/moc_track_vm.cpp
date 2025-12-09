/****************************************************************************
** Meta object code from reading C++ file 'track_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/track_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'track_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackVM_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackVM_t qt_meta_stringdata_TrackVM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TrackVM"
QT_MOC_LITERAL(1, 8, 17), // "imageModelChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 24), // "inspectFolderInfoChanged"
QT_MOC_LITERAL(4, 52, 23), // "inspectCycleInfoChanged"
QT_MOC_LITERAL(5, 76, 14), // "inspect_Signal"
QT_MOC_LITERAL(6, 91, 17), // "InputBackendInfo&"
QT_MOC_LITERAL(7, 109, 33), // "inspectFolderStatusChanged_Si..."
QT_MOC_LITERAL(8, 143, 13), // "setImageModel"
QT_MOC_LITERAL(9, 157, 11), // "ImageModel*"
QT_MOC_LITERAL(10, 169, 5), // "value"
QT_MOC_LITERAL(11, 175, 20), // "setInspectFolderInfo"
QT_MOC_LITERAL(12, 196, 19), // "setInspectCycleInfo"
QT_MOC_LITERAL(13, 216, 14), // "doSnapImageDoc"
QT_MOC_LITERAL(14, 231, 18), // "inspectCyleTimeout"
QT_MOC_LITERAL(15, 250, 10), // "imageModel"
QT_MOC_LITERAL(16, 261, 17), // "inspectFolderInfo"
QT_MOC_LITERAL(17, 279, 16) // "inspectCycleInfo"

    },
    "TrackVM\0imageModelChanged\0\0"
    "inspectFolderInfoChanged\0"
    "inspectCycleInfoChanged\0inspect_Signal\0"
    "InputBackendInfo&\0inspectFolderStatusChanged_Signal\0"
    "setImageModel\0ImageModel*\0value\0"
    "setInspectFolderInfo\0setInspectCycleInfo\0"
    "doSnapImageDoc\0inspectCyleTimeout\0"
    "imageModel\0inspectFolderInfo\0"
    "inspectCycleInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   73,    2, 0x0a /* Public */,
      11,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, 0x80000000 | 9, 0x0049510b,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void TrackVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageModelChanged(); break;
        case 1: _t->inspectFolderInfoChanged(); break;
        case 2: _t->inspectCycleInfoChanged(); break;
        case 3: _t->inspect_Signal((*reinterpret_cast< InputBackendInfo(*)>(_a[1]))); break;
        case 4: _t->inspectFolderStatusChanged_Signal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setImageModel((*reinterpret_cast< ImageModel*(*)>(_a[1]))); break;
        case 6: _t->setInspectFolderInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setInspectCycleInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->doSnapImageDoc(); break;
        case 9: _t->inspectCyleTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ImageModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackVM::imageModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackVM::inspectFolderInfoChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackVM::inspectCycleInfoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackVM::*)(InputBackendInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackVM::inspect_Signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TrackVM::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackVM::inspectFolderStatusChanged_Signal)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ImageModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TrackVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ImageModel**>(_v) = _t->imageModel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->inspectFolderInfo(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->inspectCycleInfo(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TrackVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImageModel(*reinterpret_cast< ImageModel**>(_v)); break;
        case 1: _t->setInspectFolderInfo(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setInspectCycleInfo(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TrackVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TrackVM.data,
    qt_meta_data_TrackVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrackVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void TrackVM::imageModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrackVM::inspectFolderInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TrackVM::inspectCycleInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TrackVM::inspect_Signal(InputBackendInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TrackVM::inspectFolderStatusChanged_Signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
