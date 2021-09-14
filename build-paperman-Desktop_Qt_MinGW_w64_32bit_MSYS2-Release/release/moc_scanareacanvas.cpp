/****************************************************************************
** Meta object code from reading C++ file 'scanareacanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../paperman-master/qi/scanareacanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scanareacanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScanAreaCanvas_t {
    QByteArrayData data[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScanAreaCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScanAreaCanvas_t qt_meta_stringdata_ScanAreaCanvas = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScanAreaCanvas"
QT_MOC_LITERAL(1, 15, 17), // "signalUserSetSize"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "signalTlxPercent"
QT_MOC_LITERAL(4, 51, 3), // "val"
QT_MOC_LITERAL(5, 55, 16), // "signalTlyPercent"
QT_MOC_LITERAL(6, 72, 16), // "signalBrxPercent"
QT_MOC_LITERAL(7, 89, 16), // "signalBryPercent"
QT_MOC_LITERAL(8, 106, 17), // "signalPreviewSize"
QT_MOC_LITERAL(9, 124, 4), // "size"
QT_MOC_LITERAL(10, 129, 19), // "signalNewActiveRect"
QT_MOC_LITERAL(11, 149, 3) // "num"

    },
    "ScanAreaCanvas\0signalUserSetSize\0\0"
    "signalTlxPercent\0val\0signalTlyPercent\0"
    "signalBrxPercent\0signalBryPercent\0"
    "signalPreviewSize\0size\0signalNewActiveRect\0"
    "num"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScanAreaCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       7,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::QRect,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void ScanAreaCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScanAreaCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUserSetSize(); break;
        case 1: _t->signalTlxPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->signalTlyPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->signalBrxPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->signalBryPercent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->signalPreviewSize((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 6: _t->signalNewActiveRect((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScanAreaCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalUserSetSize)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalTlxPercent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalTlyPercent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalBrxPercent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalBryPercent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalPreviewSize)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ScanAreaCanvas::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScanAreaCanvas::signalNewActiveRect)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScanAreaCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_ScanAreaCanvas.data,
    qt_meta_data_ScanAreaCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScanAreaCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScanAreaCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScanAreaCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int ScanAreaCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ScanAreaCanvas::signalUserSetSize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScanAreaCanvas::signalTlxPercent(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScanAreaCanvas::signalTlyPercent(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScanAreaCanvas::signalBrxPercent(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScanAreaCanvas::signalBryPercent(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScanAreaCanvas::signalPreviewSize(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScanAreaCanvas::signalNewActiveRect(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
