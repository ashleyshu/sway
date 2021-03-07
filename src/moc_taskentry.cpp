/****************************************************************************
** Meta object code from reading C++ file 'taskentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "taskentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TaskEntry_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaskEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaskEntry_t qt_meta_stringdata_TaskEntry = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TaskEntry"
QT_MOC_LITERAL(1, 10, 11), // "nameChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "dueDateChanged"
QT_MOC_LITERAL(4, 38, 18), // "minRequiredChanged"
QT_MOC_LITERAL(5, 57, 12), // "getTask_name"
QT_MOC_LITERAL(6, 70, 15), // "getTask_dueDate"
QT_MOC_LITERAL(7, 86, 19) // "getTask_minRequired"

    },
    "TaskEntry\0nameChanged\0\0dueDateChanged\0"
    "minRequiredChanged\0getTask_name\0"
    "getTask_dueDate\0getTask_minRequired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaskEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495003,
       6, QMetaType::QDateTime, 0x00495003,
       7, QMetaType::Short, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void TaskEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TaskEntry *_t = static_cast<TaskEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->dueDateChanged(); break;
        case 2: _t->minRequiredChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskEntry::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TaskEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskEntry::dueDateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TaskEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskEntry::minRequiredChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TaskEntry *_t = static_cast<TaskEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTask_name(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->getTask_dueDate(); break;
        case 2: *reinterpret_cast< qint16*>(_v) = _t->getTask_minRequired(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TaskEntry *_t = static_cast<TaskEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTask_name(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTask_dueDate(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setTask_minRequired(*reinterpret_cast< qint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TaskEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TaskEntry.data,
      qt_meta_data_TaskEntry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TaskEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TaskEntry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TaskEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TaskEntry::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TaskEntry::dueDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TaskEntry::minRequiredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
