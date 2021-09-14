/****************************************************************************
** Meta object code from reading C++ file 'desktopview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../paperman-master/desktopview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Desktopview_t {
    QByteArrayData data[33];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktopview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktopview_t qt_meta_stringdata_Desktopview = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Desktopview"
QT_MOC_LITERAL(1, 12, 7), // "pressed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "QModelIndex&"
QT_MOC_LITERAL(4, 34, 12), // "updateResize"
QT_MOC_LITERAL(5, 47, 8), // "newWidth"
QT_MOC_LITERAL(6, 56, 9), // "popupMenu"
QT_MOC_LITERAL(7, 66, 5), // "index"
QT_MOC_LITERAL(8, 72, 11), // "newContents"
QT_MOC_LITERAL(9, 84, 3), // "str"
QT_MOC_LITERAL(10, 88, 8), // "pageLost"
QT_MOC_LITERAL(11, 97, 11), // "itemPreview"
QT_MOC_LITERAL(12, 109, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 121, 5), // "which"
QT_MOC_LITERAL(14, 127, 3), // "now"
QT_MOC_LITERAL(15, 131, 12), // "setPositions"
QT_MOC_LITERAL(16, 144, 11), // "const char*"
QT_MOC_LITERAL(17, 156, 12), // "scrollToLast"
QT_MOC_LITERAL(18, 169, 11), // "dataChanged"
QT_MOC_LITERAL(19, 181, 7), // "topLeft"
QT_MOC_LITERAL(20, 189, 11), // "bottomRight"
QT_MOC_LITERAL(21, 201, 12), // "rowsInserted"
QT_MOC_LITERAL(22, 214, 6), // "parent"
QT_MOC_LITERAL(23, 221, 5), // "start"
QT_MOC_LITERAL(24, 227, 3), // "end"
QT_MOC_LITERAL(25, 231, 16), // "slotIndexesMoved"
QT_MOC_LITERAL(26, 248, 15), // "QModelIndexList"
QT_MOC_LITERAL(27, 264, 7), // "indexes"
QT_MOC_LITERAL(28, 272, 16), // "slotModelChanged"
QT_MOC_LITERAL(29, 289, 12), // "slotScrollTo"
QT_MOC_LITERAL(30, 302, 14), // "currentChanged"
QT_MOC_LITERAL(31, 317, 7), // "current"
QT_MOC_LITERAL(32, 325, 8) // "previous"

    },
    "Desktopview\0pressed\0\0QModelIndex&\0"
    "updateResize\0newWidth\0popupMenu\0index\0"
    "newContents\0str\0pageLost\0itemPreview\0"
    "QModelIndex\0which\0now\0setPositions\0"
    "const char*\0scrollToLast\0dataChanged\0"
    "topLeft\0bottomRight\0rowsInserted\0"
    "parent\0start\0end\0slotIndexesMoved\0"
    "QModelIndexList\0indexes\0slotModelChanged\0"
    "slotScrollTo\0currentChanged\0current\0"
    "previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktopview[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       6,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
      10,    0,  101,    2, 0x06 /* Public */,
      11,    3,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  109,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  113,    2, 0x0a /* Public */,
      18,    2,  114,    2, 0x0a /* Public */,
      21,    3,  119,    2, 0x0a /* Public */,
      25,    1,  126,    2, 0x0a /* Public */,
      28,    0,  129,    2, 0x0a /* Public */,
      29,    1,  130,    2, 0x0a /* Public */,
      30,    2,  133,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Bool,    7,   13,   14,

 // slots: parameters
    QMetaType::QSize, 0x80000000 | 16,    9,
    QMetaType::QSize,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   19,   20,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int,   22,   23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    7,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   31,   32,

       0        // eod
};

void Desktopview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktopview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateResize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->popupMenu((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->newContents((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->pageLost(); break;
        case 5: _t->itemPreview((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: { QSize _r = _t->setPositions((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 7: { QSize _r = _t->setPositions();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->scrollToLast(); break;
        case 9: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 10: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->slotIndexesMoved((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 12: _t->slotModelChanged(); break;
        case 13: _t->slotScrollTo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Desktopview::*)(QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Desktopview::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::updateResize)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Desktopview::*)(QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::popupMenu)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Desktopview::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::newContents)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Desktopview::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::pageLost)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Desktopview::*)(const QModelIndex & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopview::itemPreview)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Desktopview::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_Desktopview.data,
    qt_meta_data_Desktopview,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktopview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktopview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktopview.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int Desktopview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Desktopview::pressed(QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Desktopview::updateResize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Desktopview::popupMenu(QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Desktopview::newContents(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Desktopview::pageLost()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Desktopview::itemPreview(const QModelIndex & _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
