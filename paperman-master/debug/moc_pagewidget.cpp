/****************************************************************************
** Meta object code from reading C++ file 'pagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../pagewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyScrollArea_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyScrollArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyScrollArea_t qt_meta_stringdata_MyScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyScrollArea"
QT_MOC_LITERAL(1, 13, 14), // "signalNewScale"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "scale"
QT_MOC_LITERAL(4, 35, 15), // "delay_smoothing"
QT_MOC_LITERAL(5, 51, 14) // "signalPainting"

    },
    "MyScrollArea\0signalNewScale\0\0scale\0"
    "delay_smoothing\0signalPainting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyScrollArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    3,    4,
    QMetaType::Void,

       0        // eod
};

void MyScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyScrollArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalNewScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->signalPainting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyScrollArea::*)(double , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyScrollArea::signalNewScale)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyScrollArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyScrollArea::signalPainting)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyScrollArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_MyScrollArea.data,
    qt_meta_data_MyScrollArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyScrollArea.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int MyScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MyScrollArea::signalNewScale(double _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyScrollArea::signalPainting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Pagewidget_t {
    QByteArrayData data[54];
    char stringdata0[613];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pagewidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pagewidget_t qt_meta_stringdata_Pagewidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Pagewidget"
QT_MOC_LITERAL(1, 11, 11), // "newContents"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "modeChanging"
QT_MOC_LITERAL(4, 37, 8), // "new_mode"
QT_MOC_LITERAL(5, 46, 8), // "old_mode"
QT_MOC_LITERAL(6, 55, 13), // "beginningScan"
QT_MOC_LITERAL(7, 69, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 81, 3), // "ind"
QT_MOC_LITERAL(9, 85, 10), // "endingScan"
QT_MOC_LITERAL(10, 96, 6), // "cancel"
QT_MOC_LITERAL(11, 103, 12), // "scanComplete"
QT_MOC_LITERAL(12, 116, 18), // "slotNewScannedPage"
QT_MOC_LITERAL(13, 135, 11), // "coverageStr"
QT_MOC_LITERAL(14, 147, 5), // "blank"
QT_MOC_LITERAL(15, 153, 15), // "slotItemClicked"
QT_MOC_LITERAL(16, 169, 5), // "index"
QT_MOC_LITERAL(17, 175, 5), // "which"
QT_MOC_LITERAL(18, 181, 12), // "slotShowInfo"
QT_MOC_LITERAL(19, 194, 9), // "slotReset"
QT_MOC_LITERAL(20, 204, 19), // "slotCommitScanStack"
QT_MOC_LITERAL(21, 224, 12), // "slotNewScale"
QT_MOC_LITERAL(22, 237, 5), // "scale"
QT_MOC_LITERAL(23, 243, 15), // "delay_smoothing"
QT_MOC_LITERAL(24, 259, 12), // "updateWindow"
QT_MOC_LITERAL(25, 272, 17), // "slotDelayedUpdate"
QT_MOC_LITERAL(26, 290, 11), // "slotZoomFit"
QT_MOC_LITERAL(27, 302, 12), // "slotZoomOrig"
QT_MOC_LITERAL(28, 315, 10), // "slotZoomIn"
QT_MOC_LITERAL(29, 326, 11), // "slotZoomOut"
QT_MOC_LITERAL(30, 338, 8), // "slotZoom"
QT_MOC_LITERAL(31, 347, 9), // "new_scale"
QT_MOC_LITERAL(32, 357, 15), // "slotPreviewPage"
QT_MOC_LITERAL(33, 373, 18), // "slotNewScaledImage"
QT_MOC_LITERAL(34, 392, 5), // "image"
QT_MOC_LITERAL(35, 398, 14), // "scaled_linenum"
QT_MOC_LITERAL(36, 413, 17), // "slotBeginningPage"
QT_MOC_LITERAL(37, 431, 8), // "slotSave"
QT_MOC_LITERAL(38, 440, 10), // "slotRevert"
QT_MOC_LITERAL(39, 451, 16), // "slotStackChanged"
QT_MOC_LITERAL(40, 468, 4), // "from"
QT_MOC_LITERAL(41, 473, 2), // "to"
QT_MOC_LITERAL(42, 476, 14), // "slotChangeMode"
QT_MOC_LITERAL(43, 491, 8), // "selected"
QT_MOC_LITERAL(44, 500, 16), // "slotAnnotChanged"
QT_MOC_LITERAL(45, 517, 11), // "ocrFlipView"
QT_MOC_LITERAL(46, 529, 7), // "ocrPage"
QT_MOC_LITERAL(47, 537, 8), // "ocrClear"
QT_MOC_LITERAL(48, 546, 7), // "ocrCopy"
QT_MOC_LITERAL(49, 554, 9), // "addRotate"
QT_MOC_LITERAL(50, 564, 3), // "add"
QT_MOC_LITERAL(51, 568, 15), // "slotRotateRight"
QT_MOC_LITERAL(52, 584, 13), // "slotRotate180"
QT_MOC_LITERAL(53, 598, 14) // "slotRotateLeft"

    },
    "Pagewidget\0newContents\0\0modeChanging\0"
    "new_mode\0old_mode\0beginningScan\0"
    "QModelIndex\0ind\0endingScan\0cancel\0"
    "scanComplete\0slotNewScannedPage\0"
    "coverageStr\0blank\0slotItemClicked\0"
    "index\0which\0slotShowInfo\0slotReset\0"
    "slotCommitScanStack\0slotNewScale\0scale\0"
    "delay_smoothing\0updateWindow\0"
    "slotDelayedUpdate\0slotZoomFit\0"
    "slotZoomOrig\0slotZoomIn\0slotZoomOut\0"
    "slotZoom\0new_scale\0slotPreviewPage\0"
    "slotNewScaledImage\0image\0scaled_linenum\0"
    "slotBeginningPage\0slotSave\0slotRevert\0"
    "slotStackChanged\0from\0to\0slotChangeMode\0"
    "selected\0slotAnnotChanged\0ocrFlipView\0"
    "ocrPage\0ocrClear\0ocrCopy\0addRotate\0"
    "add\0slotRotateRight\0slotRotate180\0"
    "slotRotateLeft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pagewidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       3,    2,  192,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  197,    2, 0x0a /* Public */,
       9,    1,  200,    2, 0x0a /* Public */,
      11,    0,  203,    2, 0x0a /* Public */,
      12,    2,  204,    2, 0x0a /* Public */,
      15,    2,  209,    2, 0x0a /* Public */,
      18,    1,  214,    2, 0x0a /* Public */,
      19,    0,  217,    2, 0x0a /* Public */,
      20,    0,  218,    2, 0x0a /* Public */,
      21,    2,  219,    2, 0x09 /* Protected */,
      24,    0,  224,    2, 0x09 /* Protected */,
      25,    0,  225,    2, 0x09 /* Protected */,
      26,    0,  226,    2, 0x09 /* Protected */,
      27,    0,  227,    2, 0x09 /* Protected */,
      28,    0,  228,    2, 0x09 /* Protected */,
      29,    0,  229,    2, 0x09 /* Protected */,
      30,    0,  230,    2, 0x09 /* Protected */,
      21,    1,  231,    2, 0x09 /* Protected */,
      32,    1,  234,    2, 0x09 /* Protected */,
      33,    2,  237,    2, 0x09 /* Protected */,
      36,    0,  242,    2, 0x09 /* Protected */,
      37,    0,  243,    2, 0x09 /* Protected */,
      38,    0,  244,    2, 0x09 /* Protected */,
      39,    2,  245,    2, 0x09 /* Protected */,
      42,    1,  250,    2, 0x09 /* Protected */,
      44,    0,  253,    2, 0x09 /* Protected */,
      45,    0,  254,    2, 0x09 /* Protected */,
      46,    0,  255,    2, 0x09 /* Protected */,
      47,    0,  256,    2, 0x09 /* Protected */,
      48,    0,  257,    2, 0x09 /* Protected */,
      49,    1,  258,    2, 0x09 /* Protected */,
      51,    0,  261,    2, 0x09 /* Protected */,
      52,    0,  262,    2, 0x09 /* Protected */,
      53,    0,  263,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   14,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,   16,   17,
    QMetaType::Void, 0x80000000 | 7,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,   34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,   40,   41,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pagewidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pagewidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newContents((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->modeChanging((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->beginningScan((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->endingScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->scanComplete(); break;
        case 5: _t->slotNewScannedPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->slotItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotShowInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->slotReset(); break;
        case 9: _t->slotCommitScanStack(); break;
        case 10: _t->slotNewScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->updateWindow(); break;
        case 12: _t->slotDelayedUpdate(); break;
        case 13: _t->slotZoomFit(); break;
        case 14: _t->slotZoomOrig(); break;
        case 15: _t->slotZoomIn(); break;
        case 16: _t->slotZoomOut(); break;
        case 17: _t->slotZoom(); break;
        case 18: _t->slotNewScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slotPreviewPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->slotNewScaledImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->slotBeginningPage(); break;
        case 22: _t->slotSave(); break;
        case 23: _t->slotRevert(); break;
        case 24: _t->slotStackChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 25: _t->slotChangeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->slotAnnotChanged(); break;
        case 27: _t->ocrFlipView(); break;
        case 28: _t->ocrPage(); break;
        case 29: _t->ocrClear(); break;
        case 30: _t->ocrCopy(); break;
        case 31: _t->addRotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->slotRotateRight(); break;
        case 33: _t->slotRotate180(); break;
        case 34: _t->slotRotateLeft(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pagewidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::newContents)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::modeChanging)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pagewidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Pagewidget.data,
    qt_meta_data_Pagewidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pagewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pagewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pagewidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Pagewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void Pagewidget::newContents(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pagewidget::modeChanging(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
