/****************************************************************************
** Meta object code from reading C++ file 'list_string_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/list_string_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list_string_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListStringVM_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListStringVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListStringVM_t qt_meta_stringdata_ListStringVM = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ListStringVM"
QT_MOC_LITERAL(1, 13, 15), // "preItemAppended"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "postItemAppended"
QT_MOC_LITERAL(4, 47, 15), // "preItemInserted"
QT_MOC_LITERAL(5, 63, 5), // "index"
QT_MOC_LITERAL(6, 69, 16), // "postItemInserted"
QT_MOC_LITERAL(7, 86, 14), // "preItemRemoved"
QT_MOC_LITERAL(8, 101, 15) // "postItemRemoved"

    },
    "ListStringVM\0preItemAppended\0\0"
    "postItemAppended\0preItemInserted\0index\0"
    "postItemInserted\0preItemRemoved\0"
    "postItemRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListStringVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void ListStringVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListStringVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->preItemAppended(); break;
        case 1: _t->postItemAppended(); break;
        case 2: _t->preItemInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->postItemInserted(); break;
        case 4: _t->preItemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->postItemRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListStringVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::preItemAppended)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ListStringVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::postItemAppended)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ListStringVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::preItemInserted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ListStringVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::postItemInserted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ListStringVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::preItemRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ListStringVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListStringVM::postItemRemoved)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ListStringVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ListStringVM.data,
    qt_meta_data_ListStringVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ListStringVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListStringVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListStringVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ListStringVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ListStringVM::preItemAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ListStringVM::postItemAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ListStringVM::preItemInserted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ListStringVM::postItemInserted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ListStringVM::preItemRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ListStringVM::postItemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
