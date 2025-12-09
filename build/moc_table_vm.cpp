/****************************************************************************
** Meta object code from reading C++ file 'table_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/Table/table_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'table_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TableVM_t {
    QByteArrayData data[24];
    char stringdata0[474];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableVM_t qt_meta_stringdata_TableVM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TableVM"
QT_MOC_LITERAL(1, 8, 26), // "tableElevationValueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "tableAngleValueChanged"
QT_MOC_LITERAL(4, 59, 19), // "loadPositionChanged"
QT_MOC_LITERAL(5, 79, 21), // "unloadPositionChanged"
QT_MOC_LITERAL(6, 101, 22), // "setTableElevationValue"
QT_MOC_LITERAL(7, 124, 18), // "setTableAngleValue"
QT_MOC_LITERAL(8, 143, 15), // "setLoadPosition"
QT_MOC_LITERAL(9, 159, 17), // "setUnloadPosition"
QT_MOC_LITERAL(10, 177, 25), // "tableElevationGo_Qml_Slot"
QT_MOC_LITERAL(11, 203, 5), // "value"
QT_MOC_LITERAL(12, 209, 27), // "tableElevationHome_Qml_Slot"
QT_MOC_LITERAL(13, 237, 29), // "tableAngleRotateLeft_Qml_Slot"
QT_MOC_LITERAL(14, 267, 30), // "tableAngleRotateRight_Qml_Slot"
QT_MOC_LITERAL(15, 298, 23), // "tableAngleHome_Qml_Slot"
QT_MOC_LITERAL(16, 322, 21), // "testGotoLoad_Qml_Slot"
QT_MOC_LITERAL(17, 344, 23), // "testGotoUnload_Qml_Slot"
QT_MOC_LITERAL(18, 368, 19), // "saveAsLoad_Qml_Slot"
QT_MOC_LITERAL(19, 388, 21), // "saveAsUnload_Qml_Slot"
QT_MOC_LITERAL(20, 410, 19), // "tableElevationValue"
QT_MOC_LITERAL(21, 430, 15), // "tableAngleValue"
QT_MOC_LITERAL(22, 446, 12), // "loadPosition"
QT_MOC_LITERAL(23, 459, 14) // "unloadPosition"

    },
    "TableVM\0tableElevationValueChanged\0\0"
    "tableAngleValueChanged\0loadPositionChanged\0"
    "unloadPositionChanged\0setTableElevationValue\0"
    "setTableAngleValue\0setLoadPosition\0"
    "setUnloadPosition\0tableElevationGo_Qml_Slot\0"
    "value\0tableElevationHome_Qml_Slot\0"
    "tableAngleRotateLeft_Qml_Slot\0"
    "tableAngleRotateRight_Qml_Slot\0"
    "tableAngleHome_Qml_Slot\0testGotoLoad_Qml_Slot\0"
    "testGotoUnload_Qml_Slot\0saveAsLoad_Qml_Slot\0"
    "saveAsUnload_Qml_Slot\0tableElevationValue\0"
    "tableAngleValue\0loadPosition\0"
    "unloadPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       4,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  103,    2, 0x0a /* Public */,
       7,    1,  106,    2, 0x0a /* Public */,
       8,    1,  109,    2, 0x0a /* Public */,
       9,    1,  112,    2, 0x0a /* Public */,
      10,    1,  115,    2, 0x0a /* Public */,
      12,    0,  118,    2, 0x0a /* Public */,
      13,    1,  119,    2, 0x0a /* Public */,
      14,    1,  122,    2, 0x0a /* Public */,
      15,    0,  125,    2, 0x0a /* Public */,
      16,    0,  126,    2, 0x0a /* Public */,
      17,    0,  127,    2, 0x0a /* Public */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    0,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Double, 0x00495903,
      21, QMetaType::Double, 0x00495903,
      22, QMetaType::Double, 0x00495903,
      23, QMetaType::Double, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void TableVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tableElevationValueChanged(); break;
        case 1: _t->tableAngleValueChanged(); break;
        case 2: _t->loadPositionChanged(); break;
        case 3: _t->unloadPositionChanged(); break;
        case 4: _t->setTableElevationValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setTableAngleValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setLoadPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setUnloadPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->tableElevationGo_Qml_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->tableElevationHome_Qml_Slot(); break;
        case 10: _t->tableAngleRotateLeft_Qml_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->tableAngleRotateRight_Qml_Slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->tableAngleHome_Qml_Slot(); break;
        case 13: _t->testGotoLoad_Qml_Slot(); break;
        case 14: _t->testGotoUnload_Qml_Slot(); break;
        case 15: _t->saveAsLoad_Qml_Slot(); break;
        case 16: _t->saveAsUnload_Qml_Slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TableVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableVM::tableElevationValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TableVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableVM::tableAngleValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TableVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableVM::loadPositionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TableVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TableVM::unloadPositionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TableVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->tableElevationValue(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->tableAngleValue(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->loadPosition(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->unloadPosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TableVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTableElevationValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTableAngleValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLoadPosition(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setUnloadPosition(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TableVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TableVM.data,
    qt_meta_data_TableVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TableVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TableVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void TableVM::tableElevationValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TableVM::tableAngleValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TableVM::loadPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TableVM::unloadPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
