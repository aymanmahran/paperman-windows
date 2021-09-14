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
    QByteArrayData data[64];
    char stringdata0[709];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pagewidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pagewidget_t qt_meta_stringdata_Pagewidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Pagewidget"
QT_MOC_LITERAL(1, 11, 12), // "saveSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "selectSaved"
QT_MOC_LITERAL(4, 37, 12), // "sendSelected"
QT_MOC_LITERAL(5, 50, 11), // "newContents"
QT_MOC_LITERAL(6, 62, 7), // "reorder"
QT_MOC_LITERAL(7, 70, 3), // "num"
QT_MOC_LITERAL(8, 74, 4), // "list"
QT_MOC_LITERAL(9, 79, 12), // "modeChanging"
QT_MOC_LITERAL(10, 92, 8), // "new_mode"
QT_MOC_LITERAL(11, 101, 8), // "old_mode"
QT_MOC_LITERAL(12, 110, 13), // "beginningScan"
QT_MOC_LITERAL(13, 124, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 136, 3), // "ind"
QT_MOC_LITERAL(15, 140, 11), // "onECClicked"
QT_MOC_LITERAL(16, 152, 2), // "ok"
QT_MOC_LITERAL(17, 155, 10), // "endingScan"
QT_MOC_LITERAL(18, 166, 6), // "cancel"
QT_MOC_LITERAL(19, 173, 12), // "scanComplete"
QT_MOC_LITERAL(20, 186, 18), // "slotNewScannedPage"
QT_MOC_LITERAL(21, 205, 11), // "coverageStr"
QT_MOC_LITERAL(22, 217, 5), // "blank"
QT_MOC_LITERAL(23, 223, 15), // "slotItemClicked"
QT_MOC_LITERAL(24, 239, 5), // "index"
QT_MOC_LITERAL(25, 245, 5), // "which"
QT_MOC_LITERAL(26, 251, 12), // "slotShowInfo"
QT_MOC_LITERAL(27, 264, 13), // "slotSetTarget"
QT_MOC_LITERAL(28, 278, 9), // "slotReset"
QT_MOC_LITERAL(29, 288, 19), // "slotCommitScanStack"
QT_MOC_LITERAL(30, 308, 12), // "slotNewScale"
QT_MOC_LITERAL(31, 321, 5), // "scale"
QT_MOC_LITERAL(32, 327, 15), // "delay_smoothing"
QT_MOC_LITERAL(33, 343, 12), // "updateWindow"
QT_MOC_LITERAL(34, 356, 17), // "slotDelayedUpdate"
QT_MOC_LITERAL(35, 374, 11), // "slotZoomFit"
QT_MOC_LITERAL(36, 386, 12), // "slotZoomOrig"
QT_MOC_LITERAL(37, 399, 10), // "slotZoomIn"
QT_MOC_LITERAL(38, 410, 11), // "slotZoomOut"
QT_MOC_LITERAL(39, 422, 8), // "slotZoom"
QT_MOC_LITERAL(40, 431, 9), // "new_scale"
QT_MOC_LITERAL(41, 441, 15), // "slotPreviewPage"
QT_MOC_LITERAL(42, 457, 18), // "slotNewScaledImage"
QT_MOC_LITERAL(43, 476, 5), // "image"
QT_MOC_LITERAL(44, 482, 14), // "scaled_linenum"
QT_MOC_LITERAL(45, 497, 17), // "slotBeginningPage"
QT_MOC_LITERAL(46, 515, 8), // "slotSave"
QT_MOC_LITERAL(47, 524, 11), // "slotSendNow"
QT_MOC_LITERAL(48, 536, 10), // "slotRevert"
QT_MOC_LITERAL(49, 547, 16), // "slotStackChanged"
QT_MOC_LITERAL(50, 564, 4), // "from"
QT_MOC_LITERAL(51, 569, 2), // "to"
QT_MOC_LITERAL(52, 572, 14), // "slotChangeMode"
QT_MOC_LITERAL(53, 587, 8), // "selected"
QT_MOC_LITERAL(54, 596, 16), // "slotAnnotChanged"
QT_MOC_LITERAL(55, 613, 11), // "ocrFlipView"
QT_MOC_LITERAL(56, 625, 7), // "ocrPage"
QT_MOC_LITERAL(57, 633, 8), // "ocrClear"
QT_MOC_LITERAL(58, 642, 7), // "ocrCopy"
QT_MOC_LITERAL(59, 650, 9), // "addRotate"
QT_MOC_LITERAL(60, 660, 3), // "add"
QT_MOC_LITERAL(61, 664, 15), // "slotRotateRight"
QT_MOC_LITERAL(62, 680, 13), // "slotRotate180"
QT_MOC_LITERAL(63, 694, 14) // "slotRotateLeft"

    },
    "Pagewidget\0saveSelected\0\0selectSaved\0"
    "sendSelected\0newContents\0reorder\0num\0"
    "list\0modeChanging\0new_mode\0old_mode\0"
    "beginningScan\0QModelIndex\0ind\0onECClicked\0"
    "ok\0endingScan\0cancel\0scanComplete\0"
    "slotNewScannedPage\0coverageStr\0blank\0"
    "slotItemClicked\0index\0which\0slotShowInfo\0"
    "slotSetTarget\0slotReset\0slotCommitScanStack\0"
    "slotNewScale\0scale\0delay_smoothing\0"
    "updateWindow\0slotDelayedUpdate\0"
    "slotZoomFit\0slotZoomOrig\0slotZoomIn\0"
    "slotZoomOut\0slotZoom\0new_scale\0"
    "slotPreviewPage\0slotNewScaledImage\0"
    "image\0scaled_linenum\0slotBeginningPage\0"
    "slotSave\0slotSendNow\0slotRevert\0"
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
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x06 /* Public */,
       3,    0,  225,    2, 0x06 /* Public */,
       4,    0,  226,    2, 0x06 /* Public */,
       5,    1,  227,    2, 0x06 /* Public */,
       6,    2,  230,    2, 0x06 /* Public */,
       9,    2,  235,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  240,    2, 0x0a /* Public */,
      15,    1,  243,    2, 0x0a /* Public */,
      17,    1,  246,    2, 0x0a /* Public */,
      19,    0,  249,    2, 0x0a /* Public */,
      20,    2,  250,    2, 0x0a /* Public */,
      23,    2,  255,    2, 0x0a /* Public */,
      26,    1,  260,    2, 0x0a /* Public */,
      27,    2,  263,    2, 0x0a /* Public */,
      28,    0,  268,    2, 0x0a /* Public */,
      29,    0,  269,    2, 0x0a /* Public */,
      30,    2,  270,    2, 0x09 /* Protected */,
      33,    0,  275,    2, 0x09 /* Protected */,
      34,    0,  276,    2, 0x09 /* Protected */,
      35,    0,  277,    2, 0x09 /* Protected */,
      36,    0,  278,    2, 0x09 /* Protected */,
      37,    0,  279,    2, 0x09 /* Protected */,
      38,    0,  280,    2, 0x09 /* Protected */,
      39,    0,  281,    2, 0x09 /* Protected */,
      30,    1,  282,    2, 0x09 /* Protected */,
      41,    1,  285,    2, 0x09 /* Protected */,
      42,    2,  288,    2, 0x09 /* Protected */,
      45,    0,  293,    2, 0x09 /* Protected */,
      46,    0,  294,    2, 0x09 /* Protected */,
      47,    0,  295,    2, 0x09 /* Protected */,
      48,    0,  296,    2, 0x09 /* Protected */,
      49,    2,  297,    2, 0x09 /* Protected */,
      52,    1,  302,    2, 0x09 /* Protected */,
      54,    0,  305,    2, 0x09 /* Protected */,
      55,    0,  306,    2, 0x09 /* Protected */,
      56,    0,  307,    2, 0x09 /* Protected */,
      57,    0,  308,    2, 0x09 /* Protected */,
      58,    0,  309,    2, 0x09 /* Protected */,
      59,    1,  310,    2, 0x09 /* Protected */,
      61,    0,  313,    2, 0x09 /* Protected */,
      62,    0,  314,    2, 0x09 /* Protected */,
      63,    0,  315,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   21,   22,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   24,   25,
    QMetaType::Void, 0x80000000 | 13,   24,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   24,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QImage, QMetaType::Int,   43,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   50,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   60,
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
        case 0: _t->saveSelected(); break;
        case 1: _t->selectSaved(); break;
        case 2: _t->sendSelected(); break;
        case 3: _t->newContents((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->reorder((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->modeChanging((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->beginningScan((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onECClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->endingScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scanComplete(); break;
        case 10: _t->slotNewScannedPage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->slotItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->slotShowInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->slotSetTarget((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 14: _t->slotReset(); break;
        case 15: _t->slotCommitScanStack(); break;
        case 16: _t->slotNewScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->updateWindow(); break;
        case 18: _t->slotDelayedUpdate(); break;
        case 19: _t->slotZoomFit(); break;
        case 20: _t->slotZoomOrig(); break;
        case 21: _t->slotZoomIn(); break;
        case 22: _t->slotZoomOut(); break;
        case 23: _t->slotZoom(); break;
        case 24: _t->slotNewScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->slotPreviewPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: _t->slotNewScaledImage((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->slotBeginningPage(); break;
        case 28: _t->slotSave(); break;
        case 29: _t->slotSendNow(); break;
        case 30: _t->slotRevert(); break;
        case 31: _t->slotStackChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 32: _t->slotChangeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->slotAnnotChanged(); break;
        case 34: _t->ocrFlipView(); break;
        case 35: _t->ocrPage(); break;
        case 36: _t->ocrClear(); break;
        case 37: _t->ocrCopy(); break;
        case 38: _t->addRotate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->slotRotateRight(); break;
        case 40: _t->slotRotate180(); break;
        case 41: _t->slotRotateLeft(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pagewidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::saveSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::selectSaved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::sendSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::newContents)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::reorder)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Pagewidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagewidget::modeChanging)) {
                *result = 5;
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
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void Pagewidget::saveSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Pagewidget::selectSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Pagewidget::sendSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Pagewidget::newContents(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Pagewidget::reorder(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Pagewidget::modeChanging(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
