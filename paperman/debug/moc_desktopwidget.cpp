/****************************************************************************
** Meta object code from reading C++ file 'desktopwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../desktopwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktopwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Desktopwidget_t {
    QByteArrayData data[74];
    char stringdata0[847];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktopwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktopwidget_t qt_meta_stringdata_Desktopwidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Desktopwidget"
QT_MOC_LITERAL(1, 14, 11), // "newContents"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "str"
QT_MOC_LITERAL(4, 31, 10), // "updateDone"
QT_MOC_LITERAL(5, 42, 11), // "undoChanged"
QT_MOC_LITERAL(6, 54, 8), // "showPage"
QT_MOC_LITERAL(7, 63, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 75, 5), // "index"
QT_MOC_LITERAL(9, 81, 12), // "itemSelected"
QT_MOC_LITERAL(10, 94, 13), // "slotPopupMenu"
QT_MOC_LITERAL(11, 108, 12), // "QModelIndex&"
QT_MOC_LITERAL(12, 121, 15), // "slotItemClicked"
QT_MOC_LITERAL(13, 137, 5), // "which"
QT_MOC_LITERAL(14, 143, 15), // "slotItemPreview"
QT_MOC_LITERAL(15, 159, 3), // "now"
QT_MOC_LITERAL(16, 163, 10), // "stackRight"
QT_MOC_LITERAL(17, 174, 9), // "stackLeft"
QT_MOC_LITERAL(18, 184, 8), // "pageLeft"
QT_MOC_LITERAL(19, 193, 9), // "pageRight"
QT_MOC_LITERAL(20, 203, 9), // "openStack"
QT_MOC_LITERAL(21, 213, 17), // "slotBeginningScan"
QT_MOC_LITERAL(22, 231, 4), // "sind"
QT_MOC_LITERAL(23, 236, 14), // "slotEndingScan"
QT_MOC_LITERAL(24, 251, 6), // "cancel"
QT_MOC_LITERAL(25, 258, 12), // "scanComplete"
QT_MOC_LITERAL(26, 271, 11), // "matchChange"
QT_MOC_LITERAL(27, 283, 11), // "matchUpdate"
QT_MOC_LITERAL(28, 295, 11), // "findClicked"
QT_MOC_LITERAL(29, 307, 11), // "resetFilter"
QT_MOC_LITERAL(30, 319, 14), // "slotDirChanged"
QT_MOC_LITERAL(31, 334, 8), // "QString&"
QT_MOC_LITERAL(32, 343, 7), // "dirPath"
QT_MOC_LITERAL(33, 351, 7), // "deskind"
QT_MOC_LITERAL(34, 359, 11), // "dirSelected"
QT_MOC_LITERAL(35, 371, 10), // "allow_undo"
QT_MOC_LITERAL(36, 382, 19), // "slotDroppedOnFolder"
QT_MOC_LITERAL(37, 402, 16), // "const QMimeData*"
QT_MOC_LITERAL(38, 419, 5), // "event"
QT_MOC_LITERAL(39, 425, 3), // "dir"
QT_MOC_LITERAL(40, 429, 14), // "slotUpdateDone"
QT_MOC_LITERAL(41, 444, 9), // "renameDir"
QT_MOC_LITERAL(42, 454, 6), // "newDir"
QT_MOC_LITERAL(43, 461, 9), // "deleteDir"
QT_MOC_LITERAL(44, 471, 10), // "refreshDir"
QT_MOC_LITERAL(45, 482, 11), // "addToRecent"
QT_MOC_LITERAL(46, 494, 17), // "slotAddRepository"
QT_MOC_LITERAL(47, 512, 20), // "slotRemoveRepository"
QT_MOC_LITERAL(48, 533, 13), // "updatePreview"
QT_MOC_LITERAL(49, 547, 9), // "duplicate"
QT_MOC_LITERAL(50, 557, 12), // "duplicateMax"
QT_MOC_LITERAL(51, 570, 12), // "duplicatePdf"
QT_MOC_LITERAL(52, 583, 13), // "duplicateJpeg"
QT_MOC_LITERAL(53, 597, 13), // "duplicateEven"
QT_MOC_LITERAL(54, 611, 12), // "duplicateOdd"
QT_MOC_LITERAL(55, 624, 5), // "email"
QT_MOC_LITERAL(56, 630, 8), // "emailMax"
QT_MOC_LITERAL(57, 639, 8), // "emailPdf"
QT_MOC_LITERAL(58, 648, 4), // "send"
QT_MOC_LITERAL(59, 653, 10), // "deliverOut"
QT_MOC_LITERAL(60, 664, 12), // "locateFolder"
QT_MOC_LITERAL(61, 677, 12), // "deleteStacks"
QT_MOC_LITERAL(62, 690, 13), // "unstackStacks"
QT_MOC_LITERAL(63, 704, 11), // "unstackPage"
QT_MOC_LITERAL(64, 716, 13), // "duplicatePage"
QT_MOC_LITERAL(65, 730, 10), // "stackPages"
QT_MOC_LITERAL(66, 741, 11), // "renameStack"
QT_MOC_LITERAL(67, 753, 10), // "renamePage"
QT_MOC_LITERAL(68, 764, 16), // "slotModeChanging"
QT_MOC_LITERAL(69, 781, 8), // "new_mode"
QT_MOC_LITERAL(70, 790, 8), // "old_mode"
QT_MOC_LITERAL(71, 799, 24), // "slotUpdateRepositoryList"
QT_MOC_LITERAL(72, 824, 7), // "dirname"
QT_MOC_LITERAL(73, 832, 14) // "add_not_delete"

    },
    "Desktopwidget\0newContents\0\0str\0"
    "updateDone\0undoChanged\0showPage\0"
    "QModelIndex\0index\0itemSelected\0"
    "slotPopupMenu\0QModelIndex&\0slotItemClicked\0"
    "which\0slotItemPreview\0now\0stackRight\0"
    "stackLeft\0pageLeft\0pageRight\0openStack\0"
    "slotBeginningScan\0sind\0slotEndingScan\0"
    "cancel\0scanComplete\0matchChange\0"
    "matchUpdate\0findClicked\0resetFilter\0"
    "slotDirChanged\0QString&\0dirPath\0deskind\0"
    "dirSelected\0allow_undo\0slotDroppedOnFolder\0"
    "const QMimeData*\0event\0dir\0slotUpdateDone\0"
    "renameDir\0newDir\0deleteDir\0refreshDir\0"
    "addToRecent\0slotAddRepository\0"
    "slotRemoveRepository\0updatePreview\0"
    "duplicate\0duplicateMax\0duplicatePdf\0"
    "duplicateJpeg\0duplicateEven\0duplicateOdd\0"
    "email\0emailMax\0emailPdf\0send\0deliverOut\0"
    "locateFolder\0deleteStacks\0unstackStacks\0"
    "unstackPage\0duplicatePage\0stackPages\0"
    "renameStack\0renamePage\0slotModeChanging\0"
    "new_mode\0old_mode\0slotUpdateRepositoryList\0"
    "dirname\0add_not_delete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktopwidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,
       4,    0,  287,    2, 0x06 /* Public */,
       5,    0,  288,    2, 0x06 /* Public */,
       6,    1,  289,    2, 0x06 /* Public */,
       9,    1,  292,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  295,    2, 0x0a /* Public */,
      12,    2,  298,    2, 0x0a /* Public */,
      14,    3,  303,    2, 0x0a /* Public */,
      16,    0,  310,    2, 0x0a /* Public */,
      17,    0,  311,    2, 0x0a /* Public */,
      18,    0,  312,    2, 0x0a /* Public */,
      19,    0,  313,    2, 0x0a /* Public */,
      20,    1,  314,    2, 0x0a /* Public */,
      21,    1,  317,    2, 0x0a /* Public */,
      23,    1,  320,    2, 0x0a /* Public */,
      25,    0,  323,    2, 0x0a /* Public */,
      26,    1,  324,    2, 0x0a /* Public */,
      27,    0,  327,    2, 0x0a /* Public */,
      28,    0,  328,    2, 0x0a /* Public */,
      29,    0,  329,    2, 0x0a /* Public */,
      30,    2,  330,    2, 0x08 /* Private */,
      34,    2,  335,    2, 0x08 /* Private */,
      34,    1,  340,    2, 0x28 /* Private | MethodCloned */,
      36,    2,  343,    2, 0x08 /* Private */,
      40,    0,  348,    2, 0x08 /* Private */,
      41,    0,  349,    2, 0x08 /* Private */,
      42,    0,  350,    2, 0x08 /* Private */,
      43,    0,  351,    2, 0x08 /* Private */,
      44,    0,  352,    2, 0x08 /* Private */,
      45,    0,  353,    2, 0x08 /* Private */,
      46,    0,  354,    2, 0x08 /* Private */,
      47,    0,  355,    2, 0x08 /* Private */,
      48,    0,  356,    2, 0x08 /* Private */,
      49,    0,  357,    2, 0x08 /* Private */,
      50,    0,  358,    2, 0x08 /* Private */,
      51,    0,  359,    2, 0x08 /* Private */,
      52,    0,  360,    2, 0x08 /* Private */,
      53,    0,  361,    2, 0x08 /* Private */,
      54,    0,  362,    2, 0x08 /* Private */,
      55,    0,  363,    2, 0x08 /* Private */,
      56,    0,  364,    2, 0x08 /* Private */,
      57,    0,  365,    2, 0x08 /* Private */,
      58,    0,  366,    2, 0x08 /* Private */,
      59,    0,  367,    2, 0x08 /* Private */,
      60,    0,  368,    2, 0x08 /* Private */,
      61,    0,  369,    2, 0x08 /* Private */,
      62,    0,  370,    2, 0x08 /* Private */,
      63,    0,  371,    2, 0x08 /* Private */,
      64,    0,  372,    2, 0x08 /* Private */,
      65,    0,  373,    2, 0x08 /* Private */,
      66,    0,  374,    2, 0x08 /* Private */,
      67,    0,  375,    2, 0x08 /* Private */,
      68,    2,  376,    2, 0x08 /* Private */,
      71,    2,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,    8,   13,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 11,   32,   33,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,   35,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 37, 0x80000000 | 31,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   69,   70,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool,   72,   73,

       0        // eod
};

void Desktopwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktopwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newContents((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateDone(); break;
        case 2: _t->undoChanged(); break;
        case 3: _t->showPage((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->slotPopupMenu((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->slotItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotItemPreview((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->stackRight(); break;
        case 9: _t->stackLeft(); break;
        case 10: _t->pageLeft(); break;
        case 11: _t->pageRight(); break;
        case 12: _t->openStack((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->slotBeginningScan((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->slotEndingScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->scanComplete(); break;
        case 16: _t->matchChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->matchUpdate(); break;
        case 18: _t->findClicked(); break;
        case 19: _t->resetFilter(); break;
        case 20: _t->slotDirChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 21: _t->dirSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->dirSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 23: _t->slotDroppedOnFolder((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->slotUpdateDone(); break;
        case 25: _t->renameDir(); break;
        case 26: _t->newDir(); break;
        case 27: _t->deleteDir(); break;
        case 28: _t->refreshDir(); break;
        case 29: _t->addToRecent(); break;
        case 30: _t->slotAddRepository(); break;
        case 31: _t->slotRemoveRepository(); break;
        case 32: _t->updatePreview(); break;
        case 33: _t->duplicate(); break;
        case 34: _t->duplicateMax(); break;
        case 35: _t->duplicatePdf(); break;
        case 36: _t->duplicateJpeg(); break;
        case 37: _t->duplicateEven(); break;
        case 38: _t->duplicateOdd(); break;
        case 39: _t->email(); break;
        case 40: _t->emailMax(); break;
        case 41: _t->emailPdf(); break;
        case 42: _t->send(); break;
        case 43: _t->deliverOut(); break;
        case 44: _t->locateFolder(); break;
        case 45: _t->deleteStacks(); break;
        case 46: _t->unstackStacks(); break;
        case 47: _t->unstackPage(); break;
        case 48: _t->duplicatePage(); break;
        case 49: _t->stackPages(); break;
        case 50: _t->renameStack(); break;
        case 51: _t->renamePage(); break;
        case 52: _t->slotModeChanging((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->slotUpdateRepositoryList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Desktopwidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopwidget::newContents)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Desktopwidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopwidget::updateDone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Desktopwidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopwidget::undoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Desktopwidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopwidget::showPage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Desktopwidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Desktopwidget::itemSelected)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Desktopwidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplitter::staticMetaObject>(),
    qt_meta_stringdata_Desktopwidget.data,
    qt_meta_data_Desktopwidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktopwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktopwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktopwidget.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int Desktopwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void Desktopwidget::newContents(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Desktopwidget::updateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Desktopwidget::undoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Desktopwidget::showPage(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Desktopwidget::itemSelected(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
