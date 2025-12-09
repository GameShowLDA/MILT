/****************************************************************************
** Meta object code from reading C++ file 'tab_control_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/tab_control_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab_control_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabControlVM_t {
    QByteArrayData data[18];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabControlVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabControlVM_t qt_meta_stringdata_TabControlVM = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TabControlVM"
QT_MOC_LITERAL(1, 13, 20), // "currentStatusChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "isEnableMainTabChanged"
QT_MOC_LITERAL(4, 58, 25), // "isEnableSettingTabChanged"
QT_MOC_LITERAL(5, 84, 22), // "currentTabIndexChanged"
QT_MOC_LITERAL(6, 107, 22), // "tabIndexChanged_Signal"
QT_MOC_LITERAL(7, 130, 26), // "appStatusBtnChanged_Signal"
QT_MOC_LITERAL(8, 157, 16), // "setCurrentStatus"
QT_MOC_LITERAL(9, 174, 5), // "value"
QT_MOC_LITERAL(10, 180, 18), // "setCurrentTabIndex"
QT_MOC_LITERAL(11, 199, 18), // "setIsEnableMainTab"
QT_MOC_LITERAL(12, 218, 21), // "setIsEnableSettingTab"
QT_MOC_LITERAL(13, 240, 25), // "tabIndexChanged_Qml_Slots"
QT_MOC_LITERAL(14, 266, 13), // "currentStatus"
QT_MOC_LITERAL(15, 280, 15), // "currentTabIndex"
QT_MOC_LITERAL(16, 296, 15), // "isEnableMainTab"
QT_MOC_LITERAL(17, 312, 18) // "isEnableSettingTab"

    },
    "TabControlVM\0currentStatusChanged\0\0"
    "isEnableMainTabChanged\0isEnableSettingTabChanged\0"
    "currentTabIndexChanged\0tabIndexChanged_Signal\0"
    "appStatusBtnChanged_Signal\0setCurrentStatus\0"
    "value\0setCurrentTabIndex\0setIsEnableMainTab\0"
    "setIsEnableSettingTab\0tabIndexChanged_Qml_Slots\0"
    "currentStatus\0currentTabIndex\0"
    "isEnableMainTab\0isEnableSettingTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabControlVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495903,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       1,
       2,

       0        // eod
};

void TabControlVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabControlVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentStatusChanged(); break;
        case 1: _t->isEnableMainTabChanged(); break;
        case 2: _t->isEnableSettingTabChanged(); break;
        case 3: _t->currentTabIndexChanged(); break;
        case 4: _t->tabIndexChanged_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->appStatusBtnChanged_Signal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setCurrentStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setCurrentTabIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setIsEnableMainTab((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setIsEnableSettingTab((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->tabIndexChanged_Qml_Slots((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabControlVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::currentStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabControlVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::isEnableMainTabChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TabControlVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::isEnableSettingTabChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TabControlVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::currentTabIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TabControlVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::tabIndexChanged_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TabControlVM::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabControlVM::appStatusBtnChanged_Signal)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TabControlVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentStatus(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentTabIndex(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnableMainTab(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isEnableSettingTab(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TabControlVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentStatus(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentTabIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setIsEnableMainTab(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsEnableSettingTab(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TabControlVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TabControlVM.data,
    qt_meta_data_TabControlVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabControlVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabControlVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabControlVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TabControlVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TabControlVM::currentStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TabControlVM::isEnableMainTabChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TabControlVM::isEnableSettingTabChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TabControlVM::currentTabIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TabControlVM::tabIndexChanged_Signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TabControlVM::appStatusBtnChanged_Signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
