/****************************************************************************
** Meta object code from reading C++ file 'email.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../email.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'email.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Email_t {
    QByteArrayData data[15];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Email_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Email_t qt_meta_stringdata_Email = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Email"
QT_MOC_LITERAL(1, 6, 14), // "composerOpened"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "successful"
QT_MOC_LITERAL(4, 33, 16), // "setSenderAddress"
QT_MOC_LITERAL(5, 50, 6), // "sender"
QT_MOC_LITERAL(6, 57, 18), // "setReceiverAddress"
QT_MOC_LITERAL(7, 76, 8), // "receiver"
QT_MOC_LITERAL(8, 85, 10), // "setSubject"
QT_MOC_LITERAL(9, 96, 7), // "subject"
QT_MOC_LITERAL(10, 104, 14), // "setMessageText"
QT_MOC_LITERAL(11, 119, 7), // "message"
QT_MOC_LITERAL(12, 127, 13), // "addAttachment"
QT_MOC_LITERAL(13, 141, 4), // "path"
QT_MOC_LITERAL(14, 146, 20) // "openInDefaultProgram"

    },
    "Email\0composerOpened\0\0successful\0"
    "setSenderAddress\0sender\0setReceiverAddress\0"
    "receiver\0setSubject\0subject\0setMessageText\0"
    "message\0addAttachment\0path\0"
    "openInDefaultProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Email[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      14,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void Email::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Email *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->composerOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setSenderAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setReceiverAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setSubject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setMessageText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->addAttachment((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->openInDefaultProgram(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Email::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Email::composerOpened)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Email::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Email.data,
    qt_meta_data_Email,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Email::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Email::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Email.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Email::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Email::composerOpened(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
