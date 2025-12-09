/****************************************************************************
** Meta object code from reading C++ file 'history_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/History/history_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'history_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HistoryVM_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HistoryVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HistoryVM_t qt_meta_stringdata_HistoryVM = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HistoryVM"
QT_MOC_LITERAL(1, 10, 24), // "addInspectionData_Signal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "InspectionInfoItem"
QT_MOC_LITERAL(4, 55, 26), // "clearInspectionData_Signal"
QT_MOC_LITERAL(5, 82, 30), // "updateVisionParamNumber_Signal"
QT_MOC_LITERAL(6, 113, 11), // "bodyRNumber"
QT_MOC_LITERAL(7, 125, 19), // "nonRoundShapeNumber"
QT_MOC_LITERAL(8, 145, 13), // "nonRoundShape"
QT_MOC_LITERAL(9, 159, 20), // "dateChanged_Qml_Slot"
QT_MOC_LITERAL(10, 180, 9), // "startDate"
QT_MOC_LITERAL(11, 190, 7) // "endDate"

    },
    "HistoryVM\0addInspectionData_Signal\0\0"
    "InspectionInfoItem\0clearInspectionData_Signal\0"
    "updateVisionParamNumber_Signal\0"
    "bodyRNumber\0nonRoundShapeNumber\0"
    "nonRoundShape\0dateChanged_Qml_Slot\0"
    "startDate\0endDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HistoryVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    3,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

void HistoryVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HistoryVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addInspectionData_Signal((*reinterpret_cast< InspectionInfoItem(*)>(_a[1]))); break;
        case 1: _t->clearInspectionData_Signal(); break;
        case 2: _t->updateVisionParamNumber_Signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->dateChanged_Qml_Slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HistoryVM::*)(InspectionInfoItem );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryVM::addInspectionData_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HistoryVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryVM::clearInspectionData_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HistoryVM::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HistoryVM::updateVisionParamNumber_Signal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HistoryVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HistoryVM.data,
    qt_meta_data_HistoryVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HistoryVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HistoryVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HistoryVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HistoryVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HistoryVM::addInspectionData_Signal(InspectionInfoItem _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HistoryVM::clearInspectionData_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HistoryVM::updateVisionParamNumber_Signal(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
