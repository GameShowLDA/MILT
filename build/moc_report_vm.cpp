/****************************************************************************
** Meta object code from reading C++ file 'report_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/Report/report_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'report_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReportVM_t {
    QByteArrayData data[28];
    char stringdata0[462];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportVM_t qt_meta_stringdata_ReportVM = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ReportVM"
QT_MOC_LITERAL(1, 9, 21), // "lastReportTimeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "maxPageNumberChanged"
QT_MOC_LITERAL(4, 53, 26), // "reportNumberChanged_Signal"
QT_MOC_LITERAL(5, 80, 19), // "updateCurrentReport"
QT_MOC_LITERAL(6, 100, 24), // "addInspectionData_Signal"
QT_MOC_LITERAL(7, 125, 18), // "InspectionInfoItem"
QT_MOC_LITERAL(8, 144, 26), // "clearInspectionData_Signal"
QT_MOC_LITERAL(9, 171, 30), // "updateVisionParamNumber_Signal"
QT_MOC_LITERAL(10, 202, 11), // "bodyRNumber"
QT_MOC_LITERAL(11, 214, 19), // "nonRoundShapeNumber"
QT_MOC_LITERAL(12, 234, 13), // "nonRoundShape"
QT_MOC_LITERAL(13, 248, 17), // "setLastReportTime"
QT_MOC_LITERAL(14, 266, 5), // "value"
QT_MOC_LITERAL(15, 272, 16), // "setMaxPageNumber"
QT_MOC_LITERAL(16, 289, 18), // "saveReportTableCSV"
QT_MOC_LITERAL(17, 308, 4), // "path"
QT_MOC_LITERAL(18, 313, 5), // "infor"
QT_MOC_LITERAL(19, 319, 18), // "saveReportTablePDF"
QT_MOC_LITERAL(20, 338, 6), // "header"
QT_MOC_LITERAL(21, 345, 15), // "export_Qml_Slot"
QT_MOC_LITERAL(22, 361, 11), // "reportIndex"
QT_MOC_LITERAL(23, 373, 9), // "pageIndex"
QT_MOC_LITERAL(24, 383, 14), // "print_Qml_Slot"
QT_MOC_LITERAL(25, 398, 34), // "currentReportIndexChanged_Qml..."
QT_MOC_LITERAL(26, 433, 14), // "lastReportTime"
QT_MOC_LITERAL(27, 448, 13) // "maxPageNumber"

    },
    "ReportVM\0lastReportTimeChanged\0\0"
    "maxPageNumberChanged\0reportNumberChanged_Signal\0"
    "updateCurrentReport\0addInspectionData_Signal\0"
    "InspectionInfoItem\0clearInspectionData_Signal\0"
    "updateVisionParamNumber_Signal\0"
    "bodyRNumber\0nonRoundShapeNumber\0"
    "nonRoundShape\0setLastReportTime\0value\0"
    "setMaxPageNumber\0saveReportTableCSV\0"
    "path\0infor\0saveReportTablePDF\0header\0"
    "export_Qml_Slot\0reportIndex\0pageIndex\0"
    "print_Qml_Slot\0currentReportIndexChanged_Qml_Slot\0"
    "lastReportTime\0maxPageNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       2,  134, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       5,    1,   89,    2, 0x06 /* Public */,
       6,    1,   92,    2, 0x06 /* Public */,
       8,    0,   95,    2, 0x06 /* Public */,
       9,    3,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  103,    2, 0x0a /* Public */,
      15,    1,  106,    2, 0x0a /* Public */,
      16,    2,  109,    2, 0x0a /* Public */,
      19,    3,  114,    2, 0x0a /* Public */,
      21,    2,  121,    2, 0x0a /* Public */,
      24,    2,  126,    2, 0x0a /* Public */,
      25,    1,  131,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   17,   18,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int,   22,

 // properties: name, type, flags
      26, QMetaType::QString, 0x00495903,
      27, QMetaType::Int, 0x00495903,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ReportVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lastReportTimeChanged(); break;
        case 1: _t->maxPageNumberChanged(); break;
        case 2: _t->reportNumberChanged_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateCurrentReport((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addInspectionData_Signal((*reinterpret_cast< InspectionInfoItem(*)>(_a[1]))); break;
        case 5: _t->clearInspectionData_Signal(); break;
        case 6: _t->updateVisionParamNumber_Signal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->setLastReportTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setMaxPageNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->saveReportTableCSV((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->saveReportTablePDF((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->export_Qml_Slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->print_Qml_Slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->currentReportIndexChanged_Qml_Slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReportVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::lastReportTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::maxPageNumberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::reportNumberChanged_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::updateCurrentReport)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)(InspectionInfoItem );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::addInspectionData_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::clearInspectionData_Signal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ReportVM::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportVM::updateVisionParamNumber_Signal)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReportVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->lastReportTime(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxPageNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ReportVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLastReportTime(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMaxPageNumber(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ReportVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ReportVM.data,
    qt_meta_data_ReportVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReportVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReportVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReportVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void ReportVM::lastReportTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ReportVM::maxPageNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ReportVM::reportNumberChanged_Signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReportVM::updateCurrentReport(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ReportVM::addInspectionData_Signal(InspectionInfoItem _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ReportVM::clearInspectionData_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ReportVM::updateVisionParamNumber_Signal(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
