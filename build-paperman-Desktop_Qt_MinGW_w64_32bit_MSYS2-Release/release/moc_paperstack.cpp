/****************************************************************************
** Meta object code from reading C++ file 'paperstack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../paperman-master/paperstack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paperstack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Paperscan_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Paperscan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Paperscan_t qt_meta_stringdata_Paperscan = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Paperscan"
QT_MOC_LITERAL(1, 10, 8), // "stackNew"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "stackName"
QT_MOC_LITERAL(4, 30, 12), // "stackNewPage"
QT_MOC_LITERAL(5, 43, 15), // "const Filepage*"
QT_MOC_LITERAL(6, 59, 2), // "mp"
QT_MOC_LITERAL(7, 62, 11), // "coverageStr"
QT_MOC_LITERAL(8, 74, 7), // "infoStr"
QT_MOC_LITERAL(9, 82, 12), // "stackConfirm"
QT_MOC_LITERAL(10, 95, 11), // "stackCancel"
QT_MOC_LITERAL(11, 107, 8), // "progress"
QT_MOC_LITERAL(12, 116, 3), // "str"
QT_MOC_LITERAL(13, 120, 17), // "stackPageStarting"
QT_MOC_LITERAL(14, 138, 14), // "expected_bytes"
QT_MOC_LITERAL(15, 153, 12), // "const PPage*"
QT_MOC_LITERAL(16, 166, 4), // "page"
QT_MOC_LITERAL(17, 171, 17), // "stackPageProgress"
QT_MOC_LITERAL(18, 189, 12), // "progressUpto"
QT_MOC_LITERAL(19, 202, 4) // "upto"

    },
    "Paperscan\0stackNew\0\0stackName\0"
    "stackNewPage\0const Filepage*\0mp\0"
    "coverageStr\0infoStr\0stackConfirm\0"
    "stackCancel\0progress\0str\0stackPageStarting\0"
    "expected_bytes\0const PPage*\0page\0"
    "stackPageProgress\0progressUpto\0upto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Paperscan[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    3,   57,    2, 0x06 /* Public */,
       9,    0,   64,    2, 0x06 /* Public */,
      10,    0,   65,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,
      13,    2,   69,    2, 0x06 /* Public */,
      17,    1,   74,    2, 0x06 /* Public */,
      18,    1,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void Paperscan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Paperscan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stackNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stackNewPage((*reinterpret_cast< const Filepage*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->stackConfirm(); break;
        case 3: _t->stackCancel(); break;
        case 4: _t->progress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->stackPageStarting((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const PPage*(*)>(_a[2]))); break;
        case 6: _t->stackPageProgress((*reinterpret_cast< const PPage*(*)>(_a[1]))); break;
        case 7: _t->progressUpto((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Paperscan::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackNew)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)(const Filepage * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackNewPage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackConfirm)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackCancel)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::progress)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)(int , const PPage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackPageStarting)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)(const PPage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::stackPageProgress)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Paperscan::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Paperscan::progressUpto)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Paperscan::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Paperscan.data,
    qt_meta_data_Paperscan,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Paperscan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Paperscan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Paperscan.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Paperscan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Paperscan::stackNew(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Paperscan::stackNewPage(const Filepage * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Paperscan::stackConfirm()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Paperscan::stackCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Paperscan::progress(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Paperscan::stackPageStarting(int _t1, const PPage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Paperscan::stackPageProgress(const PPage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Paperscan::progressUpto(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
