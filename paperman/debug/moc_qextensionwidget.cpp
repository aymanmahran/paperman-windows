/****************************************************************************
** Meta object code from reading C++ file 'qextensionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../qi/qextensionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qextensionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QExtensionWidget_t {
    QByteArrayData data[16];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QExtensionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QExtensionWidget_t qt_meta_stringdata_QExtensionWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QExtensionWidget"
QT_MOC_LITERAL(1, 17, 17), // "slotChangeDocPath"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "slotChangeTempPath"
QT_MOC_LITERAL(4, 55, 19), // "slotChangeTransPath"
QT_MOC_LITERAL(5, 75, 14), // "slotChangePage"
QT_MOC_LITERAL(6, 90, 5), // "index"
QT_MOC_LITERAL(7, 96, 19), // "slotTiffJpegQuality"
QT_MOC_LITERAL(8, 116, 5), // "value"
QT_MOC_LITERAL(9, 122, 15), // "slotJpegQuality"
QT_MOC_LITERAL(10, 138, 18), // "slotPngCompression"
QT_MOC_LITERAL(11, 157, 17), // "slotEnableHistory"
QT_MOC_LITERAL(12, 175, 6), // "enable"
QT_MOC_LITERAL(13, 182, 16), // "slotLimitHistory"
QT_MOC_LITERAL(14, 199, 1), // "b"
QT_MOC_LITERAL(15, 201, 6) // "accept"

    },
    "QExtensionWidget\0slotChangeDocPath\0\0"
    "slotChangeTempPath\0slotChangeTransPath\0"
    "slotChangePage\0index\0slotTiffJpegQuality\0"
    "value\0slotJpegQuality\0slotPngCompression\0"
    "slotEnableHistory\0enable\0slotLimitHistory\0"
    "b\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QExtensionWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

       0        // eod
};

void QExtensionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QExtensionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotChangeDocPath(); break;
        case 1: _t->slotChangeTempPath(); break;
        case 2: _t->slotChangeTransPath(); break;
        case 3: _t->slotChangePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotTiffJpegQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotJpegQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotPngCompression((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotEnableHistory((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotLimitHistory((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->accept(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QExtensionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QExtensionWidget.data,
    qt_meta_data_QExtensionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QExtensionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QExtensionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QExtensionWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QExtensionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
