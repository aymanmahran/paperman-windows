/****************************************************************************
** Meta object code from reading C++ file 'desktopdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../desktopdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Desktopeditor_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktopeditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktopeditor_t qt_meta_stringdata_Desktopeditor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Desktopeditor"
QT_MOC_LITERAL(1, 14, 17), // "myEditingFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "Desktopeditor*"
QT_MOC_LITERAL(4, 48, 6), // "editor"
QT_MOC_LITERAL(5, 55, 4), // "save"
QT_MOC_LITERAL(6, 60, 19) // "slotEditingFinished"

    },
    "Desktopeditor\0myEditingFinished\0\0"
    "Desktopeditor*\0editor\0save\0"
    "slotEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktopeditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Desktopeditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktopeditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myEditingFinished((*reinterpret_cast< Desktopeditor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->slotEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Desktopeditor* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Desktopeditor::*)(Desktopeditor * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopeditor::myEditingFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Desktopeditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_Desktopeditor.data,
    qt_meta_data_Desktopeditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktopeditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktopeditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktopeditor.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int Desktopeditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Desktopeditor::myEditingFinished(Desktopeditor * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Desktopdelegate_t {
    QByteArrayData data[18];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktopdelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktopdelegate_t qt_meta_stringdata_Desktopdelegate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Desktopdelegate"
QT_MOC_LITERAL(1, 16, 11), // "itemClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 41, 5), // "index"
QT_MOC_LITERAL(5, 47, 5), // "which"
QT_MOC_LITERAL(6, 53, 10), // "itemSendTo"
QT_MOC_LITERAL(7, 64, 3), // "ind"
QT_MOC_LITERAL(8, 68, 14), // "itemTrashFirst"
QT_MOC_LITERAL(9, 83, 12), // "updateCurPos"
QT_MOC_LITERAL(10, 96, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(11, 114, 11), // "itemPreview"
QT_MOC_LITERAL(12, 126, 3), // "now"
QT_MOC_LITERAL(13, 130, 17), // "autoRepeatTimeout"
QT_MOC_LITERAL(14, 148, 19), // "slotEditingFinished"
QT_MOC_LITERAL(15, 168, 14), // "Desktopeditor*"
QT_MOC_LITERAL(16, 183, 4), // "edit"
QT_MOC_LITERAL(17, 188, 4) // "save"

    },
    "Desktopdelegate\0itemClicked\0\0QModelIndex\0"
    "index\0which\0itemSendTo\0ind\0itemTrashFirst\0"
    "updateCurPos\0itemDoubleClicked\0"
    "itemPreview\0now\0autoRepeatTimeout\0"
    "slotEditingFinished\0Desktopeditor*\0"
    "edit\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktopdelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
       9,    0,   65,    2, 0x06 /* Public */,
      10,    1,   66,    2, 0x06 /* Public */,
      11,    3,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   76,    2, 0x0a /* Public */,
      14,    2,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,    4,    5,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool,   16,   17,

       0        // eod
};

void Desktopdelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktopdelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->itemSendTo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemTrashFirst((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->updateCurPos(); break;
        case 4: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->itemPreview((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->autoRepeatTimeout(); break;
        case 7: _t->slotEditingFinished((*reinterpret_cast< Desktopeditor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Desktopeditor* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Desktopdelegate::*)(const QModelIndex & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::itemClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Desktopdelegate::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::itemSendTo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Desktopdelegate::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::itemTrashFirst)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Desktopdelegate::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::updateCurPos)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Desktopdelegate::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::itemDoubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Desktopdelegate::*)(const QModelIndex & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopdelegate::itemPreview)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Desktopdelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_Desktopdelegate.data,
    qt_meta_data_Desktopdelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktopdelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktopdelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktopdelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int Desktopdelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Desktopdelegate::itemClicked(const QModelIndex & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Desktopdelegate::itemSendTo(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Desktopdelegate::itemTrashFirst(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Desktopdelegate::updateCurPos()const
{
    QMetaObject::activate(const_cast< Desktopdelegate *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Desktopdelegate::itemDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Desktopdelegate::itemPreview(const QModelIndex & _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
