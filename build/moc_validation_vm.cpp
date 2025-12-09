/****************************************************************************
** Meta object code from reading C++ file 'validation_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/Validation/validation_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'validation_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValidationVM_t {
    QByteArrayData data[18];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValidationVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValidationVM_t qt_meta_stringdata_ValidationVM = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ValidationVM"
QT_MOC_LITERAL(1, 13, 25), // "lastValidationTimeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 28), // "validationSequenceLog_Signal"
QT_MOC_LITERAL(4, 69, 16), // "moveTable_Signal"
QT_MOC_LITERAL(5, 86, 20), // "moveTableHome_Signal"
QT_MOC_LITERAL(6, 107, 24), // "addInspectionData_Signal"
QT_MOC_LITERAL(7, 132, 18), // "InspectionInfoItem"
QT_MOC_LITERAL(8, 151, 26), // "clearInspectionData_Signal"
QT_MOC_LITERAL(9, 178, 30), // "updateVisionParamNumber_Signal"
QT_MOC_LITERAL(10, 209, 11), // "bodyRNumber"
QT_MOC_LITERAL(11, 221, 21), // "setLastValidationTime"
QT_MOC_LITERAL(12, 243, 5), // "value"
QT_MOC_LITERAL(13, 249, 26), // "validationSequenceLog_Slot"
QT_MOC_LITERAL(14, 276, 14), // "moveTable_Slot"
QT_MOC_LITERAL(15, 291, 18), // "moveTableHome_Slot"
QT_MOC_LITERAL(16, 310, 12), // "run_Qml_Slot"
QT_MOC_LITERAL(17, 323, 18) // "lastValidationTime"

    },
    "ValidationVM\0lastValidationTimeChanged\0"
    "\0validationSequenceLog_Signal\0"
    "moveTable_Signal\0moveTableHome_Signal\0"
    "addInspectionData_Signal\0InspectionInfoItem\0"
    "clearInspectionData_Signal\0"
    "updateVisionParamNumber_Signal\0"
    "bodyRNumber\0setLastValidationTime\0"
    "value\0validationSequenceLog_Slot\0"
    "moveTable_Slot\0moveTableHome_Slot\0"
    "run_Qml_Slot\0lastValidationTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValidationVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       4,    1,   78,    2, 0x06 /* Public */,
       5,    0,   81,    2, 0x06 /* Public */,
       6,    1,   82,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   89,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495903,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ValidationVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ValidationVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lastValidationTimeChanged(); break;
        case 1: _t->validationSequenceLog_Signal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->moveTable_Signal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->moveTableHome_Signal(); break;
        case 4: _t->addInspectionData_Signal((*reinterpret_cast< InspectionInfoItem(*)>(_a[1]))); break;
        case 5: _t->clearInspectionData_Signal(); break;
        case 6: _t->updateVisionParamNumber_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLastValidationTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->validationSequenceLog_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->moveTable_Slot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->moveTableHome_Slot(); break;
        case 11: _t->run_Qml_Slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ValidationVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::lastValidationTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::validationSequenceLog_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::moveTable_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::moveTableHome_Signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)(InspectionInfoItem );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::addInspectionData_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::clearInspectionData_Signal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ValidationVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValidationVM::updateVisionParamNumber_Signal)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ValidationVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->lastValidationTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ValidationVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLastValidationTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ValidationVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ValidationVM.data,
    qt_meta_data_ValidationVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ValidationVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValidationVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValidationVM.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ValidationVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ValidationVM::lastValidationTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ValidationVM::validationSequenceLog_Signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ValidationVM::moveTable_Signal(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ValidationVM::moveTableHome_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ValidationVM::addInspectionData_Signal(InspectionInfoItem _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ValidationVM::clearInspectionData_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ValidationVM::updateVisionParamNumber_Signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
