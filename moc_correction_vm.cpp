/****************************************************************************
** Meta object code from reading C++ file 'correction_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ViewModel/Correction/correction_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'correction_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CorrectionVM_t {
    QByteArrayData data[22];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorrectionVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorrectionVM_t qt_meta_stringdata_CorrectionVM = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CorrectionVM"
QT_MOC_LITERAL(1, 13, 18), // "sequenceLog_Signal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "moveTable_Signal"
QT_MOC_LITERAL(4, 50, 20), // "moveTableHome_Signal"
QT_MOC_LITERAL(5, 71, 12), // "updateDataUI"
QT_MOC_LITERAL(6, 84, 3), // "min"
QT_MOC_LITERAL(7, 88, 3), // "max"
QT_MOC_LITERAL(8, 92, 4), // "goal"
QT_MOC_LITERAL(9, 97, 20), // "distanceBottomRegion"
QT_MOC_LITERAL(10, 118, 12), // "heightRegion"
QT_MOC_LITERAL(11, 131, 26), // "closeWaitTableMoveComplete"
QT_MOC_LITERAL(12, 158, 16), // "sequenceLog_Slot"
QT_MOC_LITERAL(13, 175, 14), // "moveTable_Slot"
QT_MOC_LITERAL(14, 190, 18), // "moveTableHome_Slot"
QT_MOC_LITERAL(15, 209, 29), // "currentDefectChanged_Qml_Slot"
QT_MOC_LITERAL(16, 239, 13), // "test_Qml_Slot"
QT_MOC_LITERAL(17, 253, 10), // "QList<int>"
QT_MOC_LITERAL(18, 264, 9), // "defectIdx"
QT_MOC_LITERAL(19, 274, 25), // "parameterChanged_Qml_Slot"
QT_MOC_LITERAL(20, 300, 20), // "saveSetting_Qml_Slot"
QT_MOC_LITERAL(21, 321, 27) // "cancelWaitTableMoveComplete"

    },
    "CorrectionVM\0sequenceLog_Signal\0\0"
    "moveTable_Signal\0moveTableHome_Signal\0"
    "updateDataUI\0min\0max\0goal\0"
    "distanceBottomRegion\0heightRegion\0"
    "closeWaitTableMoveComplete\0sequenceLog_Slot\0"
    "moveTable_Slot\0moveTableHome_Slot\0"
    "currentDefectChanged_Qml_Slot\0"
    "test_Qml_Slot\0QList<int>\0defectIdx\0"
    "parameterChanged_Qml_Slot\0"
    "saveSetting_Qml_Slot\0cancelWaitTableMoveComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorrectionVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    0,   85,    2, 0x06 /* Public */,
       5,    5,   86,    2, 0x06 /* Public */,
      11,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   98,    2, 0x0a /* Public */,
      13,    1,  101,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    1,  105,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      19,    3,  111,    2, 0x0a /* Public */,
      20,    1,  118,    2, 0x0a /* Public */,
      21,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,    7,    8,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    8,    9,   10,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void CorrectionVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorrectionVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sequenceLog_Signal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->moveTable_Signal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->moveTableHome_Signal(); break;
        case 3: _t->updateDataUI((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 4: _t->closeWaitTableMoveComplete(); break;
        case 5: _t->sequenceLog_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->moveTable_Slot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->moveTableHome_Slot(); break;
        case 8: _t->currentDefectChanged_Qml_Slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->test_Qml_Slot((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 10: _t->parameterChanged_Qml_Slot((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 11: _t->saveSetting_Qml_Slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->cancelWaitTableMoveComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CorrectionVM::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorrectionVM::sequenceLog_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CorrectionVM::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorrectionVM::moveTable_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CorrectionVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorrectionVM::moveTableHome_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CorrectionVM::*)(double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorrectionVM::updateDataUI)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CorrectionVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorrectionVM::closeWaitTableMoveComplete)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CorrectionVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CorrectionVM.data,
    qt_meta_data_CorrectionVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CorrectionVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorrectionVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CorrectionVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CorrectionVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CorrectionVM::sequenceLog_Signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CorrectionVM::moveTable_Signal(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CorrectionVM::moveTableHome_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CorrectionVM::updateDataUI(double _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CorrectionVM::closeWaitTableMoveComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
