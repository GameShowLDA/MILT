/****************************************************************************
** Meta object code from reading C++ file 'recipe_management_vm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewModel/RecipeManagement/recipe_management_vm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recipe_management_vm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RecipeManagementVM_t {
    QByteArrayData data[21];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecipeManagementVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecipeManagementVM_t qt_meta_stringdata_RecipeManagementVM = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RecipeManagementVM"
QT_MOC_LITERAL(1, 19, 20), // "currentRecipeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 33), // "isEnableSelectRecipeSignalCha..."
QT_MOC_LITERAL(4, 75, 17), // "loadRecipe_Signal"
QT_MOC_LITERAL(5, 93, 7), // "addData"
QT_MOC_LITERAL(6, 101, 5), // "index"
QT_MOC_LITERAL(7, 107, 10), // "recipeName"
QT_MOC_LITERAL(8, 118, 11), // "dateCreated"
QT_MOC_LITERAL(9, 130, 10), // "dateModify"
QT_MOC_LITERAL(10, 141, 16), // "setCurrentRecipe"
QT_MOC_LITERAL(11, 158, 5), // "value"
QT_MOC_LITERAL(12, 164, 29), // "setIsEnableSelectRecipeSignal"
QT_MOC_LITERAL(13, 194, 13), // "doCloneRecipe"
QT_MOC_LITERAL(14, 208, 19), // "newRecipeFolderName"
QT_MOC_LITERAL(15, 228, 23), // "currentRecipeFolderName"
QT_MOC_LITERAL(16, 252, 12), // "doLoadRecipe"
QT_MOC_LITERAL(17, 265, 12), // "isShowDialog"
QT_MOC_LITERAL(18, 278, 14), // "doDeleteRecipe"
QT_MOC_LITERAL(19, 293, 13), // "currentRecipe"
QT_MOC_LITERAL(20, 307, 26) // "isEnableSelectRecipeSignal"

    },
    "RecipeManagementVM\0currentRecipeChanged\0"
    "\0isEnableSelectRecipeSignalChanged\0"
    "loadRecipe_Signal\0addData\0index\0"
    "recipeName\0dateCreated\0dateModify\0"
    "setCurrentRecipe\0value\0"
    "setIsEnableSelectRecipeSignal\0"
    "doCloneRecipe\0newRecipeFolderName\0"
    "currentRecipeFolderName\0doLoadRecipe\0"
    "isShowDialog\0doDeleteRecipe\0currentRecipe\0"
    "isEnableSelectRecipeSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecipeManagementVM[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    4,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   71,    2, 0x0a /* Public */,
      12,    1,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    2,   77,    2, 0x02 /* Public */,
      16,    2,   82,    2, 0x02 /* Public */,
      18,    1,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    7,   17,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00495903,
      20, QMetaType::Bool, 0x00495903,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void RecipeManagementVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecipeManagementVM *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentRecipeChanged(); break;
        case 1: _t->isEnableSelectRecipeSignalChanged(); break;
        case 2: _t->loadRecipe_Signal(); break;
        case 3: _t->addData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->setCurrentRecipe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setIsEnableSelectRecipeSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->doCloneRecipe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->doLoadRecipe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->doDeleteRecipe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RecipeManagementVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecipeManagementVM::currentRecipeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RecipeManagementVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecipeManagementVM::isEnableSelectRecipeSignalChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RecipeManagementVM::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecipeManagementVM::loadRecipe_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RecipeManagementVM::*)(int , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RecipeManagementVM::addData)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RecipeManagementVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentRecipe(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEnableSelectRecipeSignal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RecipeManagementVM *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentRecipe(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIsEnableSelectRecipeSignal(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RecipeManagementVM::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RecipeManagementVM.data,
    qt_meta_data_RecipeManagementVM,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RecipeManagementVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecipeManagementVM::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecipeManagementVM.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RecipeManagementVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void RecipeManagementVM::currentRecipeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RecipeManagementVM::isEnableSelectRecipeSignalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RecipeManagementVM::loadRecipe_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RecipeManagementVM::addData(int _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
