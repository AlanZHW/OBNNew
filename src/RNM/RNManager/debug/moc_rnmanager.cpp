/****************************************************************************
** Meta object code from reading C++ file 'rnmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rnmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rnmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RNManager_t {
    QByteArrayData data[26];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RNManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RNManager_t qt_meta_stringdata_RNManager = {
    {
QT_MOC_LITERAL(0, 0, 9), // "RNManager"
QT_MOC_LITERAL(1, 10, 20), // "slotSetSearchIpScope"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "slotQuit"
QT_MOC_LITERAL(4, 41, 10), // "slotLimits"
QT_MOC_LITERAL(5, 52, 21), // "slotSetUpdateInterval"
QT_MOC_LITERAL(6, 74, 8), // "interval"
QT_MOC_LITERAL(7, 83, 19), // "slotStartStopUpdate"
QT_MOC_LITERAL(8, 103, 5), // "start"
QT_MOC_LITERAL(9, 109, 18), // "slotNodeFtpManager"
QT_MOC_LITERAL(10, 128, 22), // "slotShowAllOrConnected"
QT_MOC_LITERAL(11, 151, 4), // "show"
QT_MOC_LITERAL(12, 156, 20), // "slotShowStatusReport"
QT_MOC_LITERAL(13, 177, 18), // "slotDisplayFilters"
QT_MOC_LITERAL(14, 196, 9), // "slotAbout"
QT_MOC_LITERAL(15, 206, 15), // "slotInitDisplay"
QT_MOC_LITERAL(16, 222, 14), // "QVector<Node*>"
QT_MOC_LITERAL(17, 237, 5), // "nodes"
QT_MOC_LITERAL(18, 243, 17), // "slotLimitsChanged"
QT_MOC_LITERAL(19, 261, 18), // "QVector<LimitData>"
QT_MOC_LITERAL(20, 280, 9), // "limitData"
QT_MOC_LITERAL(21, 290, 16), // "slotUpdateStatus"
QT_MOC_LITERAL(22, 307, 14), // "slotSearchNode"
QT_MOC_LITERAL(23, 322, 4), // "node"
QT_MOC_LITERAL(24, 327, 22), // "slotPrintWarningEnable"
QT_MOC_LITERAL(25, 350, 6) // "enable"

    },
    "RNManager\0slotSetSearchIpScope\0\0"
    "slotQuit\0slotLimits\0slotSetUpdateInterval\0"
    "interval\0slotStartStopUpdate\0start\0"
    "slotNodeFtpManager\0slotShowAllOrConnected\0"
    "show\0slotShowStatusReport\0slotDisplayFilters\0"
    "slotAbout\0slotInitDisplay\0QVector<Node*>\0"
    "nodes\0slotLimitsChanged\0QVector<LimitData>\0"
    "limitData\0slotUpdateStatus\0slotSearchNode\0"
    "node\0slotPrintWarningEnable\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RNManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      21,    0,  113,    2, 0x08 /* Private */,
      22,    1,  114,    2, 0x08 /* Private */,
      24,    1,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::Bool,   25,

       0        // eod
};

void RNManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RNManager *_t = static_cast<RNManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSetSearchIpScope(); break;
        case 1: _t->slotQuit(); break;
        case 2: _t->slotLimits(); break;
        case 3: _t->slotSetUpdateInterval((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->slotStartStopUpdate((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->slotNodeFtpManager(); break;
        case 6: _t->slotShowAllOrConnected((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->slotShowStatusReport(); break;
        case 8: _t->slotDisplayFilters((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 9: _t->slotAbout(); break;
        case 10: _t->slotInitDisplay((*reinterpret_cast< const QVector<Node*>(*)>(_a[1]))); break;
        case 11: _t->slotLimitsChanged((*reinterpret_cast< const QVector<LimitData>(*)>(_a[1]))); break;
        case 12: _t->slotUpdateStatus(); break;
        case 13: _t->slotSearchNode((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 14: _t->slotPrintWarningEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Node*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject RNManager::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RNManager.data,
      qt_meta_data_RNManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RNManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RNManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RNManager.stringdata0))
        return static_cast<void*>(const_cast< RNManager*>(this));
    if (!strcmp(_clname, "CommModule"))
        return static_cast< CommModule*>(const_cast< RNManager*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RNManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
