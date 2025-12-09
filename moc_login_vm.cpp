/****************************************************************************
** Meta object code from reading C++ file 'login_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/login_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginVM_t {
    QByteArrayData data[22];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginVM_t qt_meta_stringdata_LoginVM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LoginVM"
QT_MOC_LITERAL(1, 8, 15), // "usernameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "accessLevelChanged"
QT_MOC_LITERAL(4, 44, 16), // "loginInfoChanged"
QT_MOC_LITERAL(5, 61, 21), // "loginInfoColorChanged"
QT_MOC_LITERAL(6, 83, 14), // "isLoginChanged"
QT_MOC_LITERAL(7, 98, 13), // "login_Signals"
QT_MOC_LITERAL(8, 112, 28), // "closeLoginDialog_Qml_Signals"
QT_MOC_LITERAL(9, 141, 11), // "setUsername"
QT_MOC_LITERAL(10, 153, 14), // "setAccessLevel"
QT_MOC_LITERAL(11, 168, 12), // "setLoginInfo"
QT_MOC_LITERAL(12, 181, 17), // "setLoginInfoColor"
QT_MOC_LITERAL(13, 199, 10), // "setIsLogin"
QT_MOC_LITERAL(14, 210, 11), // "login_Slots"
QT_MOC_LITERAL(15, 222, 12), // "logout_Slots"
QT_MOC_LITERAL(16, 235, 19), // "createNewUser_Slots"
QT_MOC_LITERAL(17, 255, 8), // "username"
QT_MOC_LITERAL(18, 264, 11), // "accessLevel"
QT_MOC_LITERAL(19, 276, 9), // "loginInfo"
QT_MOC_LITERAL(20, 286, 14), // "loginInfoColor"
QT_MOC_LITERAL(21, 301, 7) // "isLogin"

    },
    "LoginVM\0usernameChanged\0\0accessLevelChanged\0"
    "loginInfoChanged\0loginInfoColorChanged\0"
    "isLoginChanged\0login_Signals\0"
    "closeLoginDialog_Qml_Signals\0setUsername\0"
    "setAccessLevel\0setLoginInfo\0"
    "setLoginInfoColor\0setIsLogin\0login_Slots\0"
    "logout_Slots\0createNewUser_Slots\0"
    "username\0accessLevel\0loginInfo\0"
    "loginInfoColor\0isLogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       8,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   98,    2, 0x0a /* Public */,
      10,    1,  101,    2, 0x0a /* Public */,
      11,    1,  104,    2, 0x0a /* Public */,
      12,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      14,    2,  113,    2, 0x0a /* Public */,
      15,    0,  118,    2, 0x0a /* Public */,
      16,    4,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    2,    2,    2,    2,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void LoginVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->usernameChanged(); break;
        case 1: _t->accessLevelChanged(); break;
        case 2: _t->loginInfoChanged(); break;
        case 3: _t->loginInfoColorChanged(); break;
        case 4: { bool _r = _t->isLoginChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->login_Signals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->closeLoginDialog_Qml_Signals(); break;
        case 7: _t->setUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setAccessLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setLoginInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setLoginInfoColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setIsLogin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->login_Slots((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->logout_Slots(); break;
        case 14: _t->createNewUser_Slots((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::usernameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::accessLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::loginInfoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::loginInfoColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = bool (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::isLoginChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LoginVM::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::login_Signals)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LoginVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginVM::closeLoginDialog_Qml_Signals)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LoginVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->accessLevel(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->loginInfo(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->loginInfoColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isLogin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LoginVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAccessLevel(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLoginInfo(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLoginInfoColor(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIsLogin(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LoginVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LoginVM.data,
    qt_meta_data_LoginVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LoginVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LoginVM::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginVM::accessLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginVM::loginInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LoginVM::loginInfoColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
bool LoginVM::isLoginChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
void LoginVM::login_Signals(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LoginVM::closeLoginDialog_Qml_Signals()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
