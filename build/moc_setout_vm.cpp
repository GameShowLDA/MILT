/****************************************************************************
** Meta object code from reading C++ file 'setout_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/Setout/setout_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setout_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetoutVM_t {
    QByteArrayData data[29];
    char stringdata0[502];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetoutVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetoutVM_t qt_meta_stringdata_SetoutVM = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SetoutVM"
QT_MOC_LITERAL(1, 9, 25), // "highPressureStatusChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "safetyRelayStatusChanged"
QT_MOC_LITERAL(4, 61, 23), // "updateMoldListUI_Signal"
QT_MOC_LITERAL(5, 85, 6), // "column"
QT_MOC_LITERAL(6, 92, 3), // "row"
QT_MOC_LITERAL(7, 96, 6), // "header"
QT_MOC_LITERAL(8, 103, 6), // "result"
QT_MOC_LITERAL(9, 110, 27), // "initSetoutMoldNumber_Signal"
QT_MOC_LITERAL(10, 138, 14), // "QList<QString>"
QT_MOC_LITERAL(11, 153, 10), // "QList<int>"
QT_MOC_LITERAL(12, 164, 29), // "updateMoldNumberResult_Signal"
QT_MOC_LITERAL(13, 194, 5), // "value"
QT_MOC_LITERAL(14, 200, 9), // "moldIndex"
QT_MOC_LITERAL(15, 210, 24), // "setCurrentJobName_Signal"
QT_MOC_LITERAL(16, 235, 5), // "index"
QT_MOC_LITERAL(17, 241, 21), // "setHighPressureStatus"
QT_MOC_LITERAL(18, 263, 20), // "setSafetyRelayStatus"
QT_MOC_LITERAL(19, 284, 22), // "runStopStatus_Qml_Slot"
QT_MOC_LITERAL(20, 307, 14), // "currentJobText"
QT_MOC_LITERAL(21, 322, 27), // "clearAllContainers_Qml_Slot"
QT_MOC_LITERAL(22, 350, 32), // "columnHeaderMoldChanged_Qml_Slot"
QT_MOC_LITERAL(23, 383, 19), // "resetAlarm_Qml_Slot"
QT_MOC_LITERAL(24, 403, 25), // "safetyRelayReset_Qml_Slot"
QT_MOC_LITERAL(25, 429, 15), // "saveMoldNumbers"
QT_MOC_LITERAL(26, 445, 19), // "loadRecipe_Qml_Slot"
QT_MOC_LITERAL(27, 465, 18), // "highPressureStatus"
QT_MOC_LITERAL(28, 484, 17) // "safetyRelayStatus"

    },
    "SetoutVM\0highPressureStatusChanged\0\0"
    "safetyRelayStatusChanged\0"
    "updateMoldListUI_Signal\0column\0row\0"
    "header\0result\0initSetoutMoldNumber_Signal\0"
    "QList<QString>\0QList<int>\0"
    "updateMoldNumberResult_Signal\0value\0"
    "moldIndex\0setCurrentJobName_Signal\0"
    "index\0setHighPressureStatus\0"
    "setSafetyRelayStatus\0runStopStatus_Qml_Slot\0"
    "currentJobText\0clearAllContainers_Qml_Slot\0"
    "columnHeaderMoldChanged_Qml_Slot\0"
    "resetAlarm_Qml_Slot\0safetyRelayReset_Qml_Slot\0"
    "saveMoldNumbers\0loadRecipe_Qml_Slot\0"
    "highPressureStatus\0safetyRelayStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetoutVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    4,   91,    2, 0x06 /* Public */,
       9,    2,  100,    2, 0x06 /* Public */,
      12,    2,  105,    2, 0x06 /* Public */,
      15,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  113,    2, 0x0a /* Public */,
      18,    1,  116,    2, 0x0a /* Public */,
      19,    2,  119,    2, 0x0a /* Public */,
      21,    0,  124,    2, 0x0a /* Public */,
      22,    2,  125,    2, 0x0a /* Public */,
      23,    0,  130,    2, 0x0a /* Public */,
      24,    0,  131,    2, 0x0a /* Public */,
      25,    1,  132,    2, 0x0a /* Public */,
      26,    1,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   13,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void, QMetaType::QString,   20,

 // properties: name, type, flags
      27, QMetaType::Int, 0x00495903,
      28, QMetaType::Int, 0x00495903,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void SetoutVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetoutVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->highPressureStatusChanged(); break;
        case 1: _t->safetyRelayStatusChanged(); break;
        case 2: _t->updateMoldListUI_Signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->initSetoutMoldNumber_Signal((*reinterpret_cast< QList<QString>(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 4: _t->updateMoldNumberResult_Signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setCurrentJobName_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHighPressureStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSafetyRelayStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->runStopStatus_Qml_Slot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->clearAllContainers_Qml_Slot(); break;
        case 10: _t->columnHeaderMoldChanged_Qml_Slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->resetAlarm_Qml_Slot(); break;
        case 12: _t->safetyRelayReset_Qml_Slot(); break;
        case 13: _t->saveMoldNumbers((*reinterpret_cast< QList<QVariant>(*)>(_a[1]))); break;
        case 14: _t->loadRecipe_Qml_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetoutVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::highPressureStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SetoutVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::safetyRelayStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SetoutVM::*)(int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::updateMoldListUI_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SetoutVM::*)(QList<QString> , QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::initSetoutMoldNumber_Signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SetoutVM::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::updateMoldNumberResult_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SetoutVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetoutVM::setCurrentJobName_Signal)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SetoutVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->highPressureStatus(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->safetyRelayStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SetoutVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHighPressureStatus(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSafetyRelayStatus(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SetoutVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SetoutVM.data,
    qt_meta_data_SetoutVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetoutVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetoutVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetoutVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SetoutVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
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
void SetoutVM::highPressureStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SetoutVM::safetyRelayStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SetoutVM::updateMoldListUI_Signal(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SetoutVM::initSetoutMoldNumber_Signal(QList<QString> _t1, QList<int> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SetoutVM::updateMoldNumberResult_Signal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SetoutVM::setCurrentJobName_Signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
