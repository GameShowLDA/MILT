/****************************************************************************
** Meta object code from reading C++ file 'inspectioncore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Core/inspectioncore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inspectioncore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InspectionCore_t {
    QByteArrayData data[15];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InspectionCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InspectionCore_t qt_meta_stringdata_InspectionCore = {
    {
QT_MOC_LITERAL(0, 0, 14), // "InspectionCore"
QT_MOC_LITERAL(1, 15, 23), // "sendInputInspect_Signal"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "InputBackendInfo&"
QT_MOC_LITERAL(4, 58, 24), // "sendFinishInspect_Signal"
QT_MOC_LITERAL(5, 83, 18), // "OutputBackendInfo&"
QT_MOC_LITERAL(6, 102, 23), // "sendRecipeLoaded_Signal"
QT_MOC_LITERAL(7, 126, 18), // "statisticsProgress"
QT_MOC_LITERAL(8, 145, 7), // "current"
QT_MOC_LITERAL(9, 153, 5), // "total"
QT_MOC_LITERAL(10, 159, 39), // "receiveInspResult_TCPBackendC..."
QT_MOC_LITERAL(11, 199, 21), // "sendInputInspect_Slot"
QT_MOC_LITERAL(12, 221, 21), // "handleNextMeasurement"
QT_MOC_LITERAL(13, 243, 23), // "inspect_MainHomeVM_Slot"
QT_MOC_LITERAL(14, 267, 5) // "input"

    },
    "InspectionCore\0sendInputInspect_Signal\0"
    "\0InputBackendInfo&\0sendFinishInspect_Signal\0"
    "OutputBackendInfo&\0sendRecipeLoaded_Signal\0"
    "statisticsProgress\0current\0total\0"
    "receiveInspResult_TCPBackendClient_Slot\0"
    "sendInputInspect_Slot\0handleNextMeasurement\0"
    "inspect_MainHomeVM_Slot\0input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InspectionCore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    2,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   14,

       0        // eod
};

void InspectionCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InspectionCore *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendInputInspect_Signal((*reinterpret_cast< InputBackendInfo(*)>(_a[1]))); break;
        case 1: _t->sendFinishInspect_Signal((*reinterpret_cast< OutputBackendInfo(*)>(_a[1]))); break;
        case 2: _t->sendRecipeLoaded_Signal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->statisticsProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->receiveInspResult_TCPBackendClient_Slot((*reinterpret_cast< OutputBackendInfo(*)>(_a[1]))); break;
        case 5: _t->sendInputInspect_Slot((*reinterpret_cast< InputBackendInfo(*)>(_a[1]))); break;
        case 6: _t->handleNextMeasurement(); break;
        case 7: _t->inspect_MainHomeVM_Slot((*reinterpret_cast< InputBackendInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InspectionCore::*)(InputBackendInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectionCore::sendInputInspect_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InspectionCore::*)(OutputBackendInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectionCore::sendFinishInspect_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InspectionCore::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectionCore::sendRecipeLoaded_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InspectionCore::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectionCore::statisticsProgress)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InspectionCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_InspectionCore.data,
    qt_meta_data_InspectionCore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InspectionCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InspectionCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InspectionCore.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int InspectionCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InspectionCore::sendInputInspect_Signal(InputBackendInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InspectionCore::sendFinishInspect_Signal(OutputBackendInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InspectionCore::sendRecipeLoaded_Signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InspectionCore::statisticsProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
