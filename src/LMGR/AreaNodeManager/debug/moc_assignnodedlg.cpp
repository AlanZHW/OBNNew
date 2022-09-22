/****************************************************************************
** Meta object code from reading C++ file 'assignnodedlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../assignnodedlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'assignnodedlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AssignNodeDlg_t {
    QByteArrayData data[20];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssignNodeDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssignNodeDlg_t qt_meta_stringdata_AssignNodeDlg = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AssignNodeDlg"
QT_MOC_LITERAL(1, 14, 23), // "signalUpdateAssignedDev"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "areaName"
QT_MOC_LITERAL(4, 48, 22), // "slotCurrentAreaChanged"
QT_MOC_LITERAL(5, 71, 4), // "area"
QT_MOC_LITERAL(6, 76, 20), // "on_assignBtn_clicked"
QT_MOC_LITERAL(7, 97, 22), // "on_unassignBtn_clicked"
QT_MOC_LITERAL(8, 120, 20), // "on_moveUpBtn_clicked"
QT_MOC_LITERAL(9, 141, 22), // "on_moveDownBtn_clicked"
QT_MOC_LITERAL(10, 164, 30), // "on_lineCbx_currentIndexChanged"
QT_MOC_LITERAL(11, 195, 5), // "index"
QT_MOC_LITERAL(12, 201, 25), // "on_filterEdit_textChanged"
QT_MOC_LITERAL(13, 227, 4), // "arg1"
QT_MOC_LITERAL(14, 232, 26), // "slotDepolySelectionChanged"
QT_MOC_LITERAL(15, 259, 22), // "slotRNSelectionChanged"
QT_MOC_LITERAL(16, 282, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(17, 299, 19), // "on_applyBtn_clicked"
QT_MOC_LITERAL(18, 319, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(19, 340, 20) // "on_updateDev_clicked"

    },
    "AssignNodeDlg\0signalUpdateAssignedDev\0"
    "\0areaName\0slotCurrentAreaChanged\0area\0"
    "on_assignBtn_clicked\0on_unassignBtn_clicked\0"
    "on_moveUpBtn_clicked\0on_moveDownBtn_clicked\0"
    "on_lineCbx_currentIndexChanged\0index\0"
    "on_filterEdit_textChanged\0arg1\0"
    "slotDepolySelectionChanged\0"
    "slotRNSelectionChanged\0on_okBtn_clicked\0"
    "on_applyBtn_clicked\0on_cancelBtn_clicked\0"
    "on_updateDev_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssignNodeDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   87,    2, 0x08 /* Private */,
       6,    0,   90,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssignNodeDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssignNodeDlg *_t = static_cast<AssignNodeDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUpdateAssignedDev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotCurrentAreaChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_assignBtn_clicked(); break;
        case 3: _t->on_unassignBtn_clicked(); break;
        case 4: _t->on_moveUpBtn_clicked(); break;
        case 5: _t->on_moveDownBtn_clicked(); break;
        case 6: _t->on_lineCbx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_filterEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotDepolySelectionChanged(); break;
        case 9: _t->slotRNSelectionChanged(); break;
        case 10: _t->on_okBtn_clicked(); break;
        case 11: _t->on_applyBtn_clicked(); break;
        case 12: _t->on_cancelBtn_clicked(); break;
        case 13: _t->on_updateDev_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AssignNodeDlg::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AssignNodeDlg::signalUpdateAssignedDev)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AssignNodeDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AssignNodeDlg.data,
      qt_meta_data_AssignNodeDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AssignNodeDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssignNodeDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AssignNodeDlg.stringdata0))
        return static_cast<void*>(const_cast< AssignNodeDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AssignNodeDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AssignNodeDlg::signalUpdateAssignedDev(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
