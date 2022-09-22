/****************************************************************************
** Meta object code from reading C++ file 'gpositionsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gpositionsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpositionsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPositionSystem_t {
    QByteArrayData data[25];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPositionSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPositionSystem_t qt_meta_stringdata_GPositionSystem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GPositionSystem"
QT_MOC_LITERAL(1, 16, 12), // "startPostion"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "stopPostion"
QT_MOC_LITERAL(4, 42, 15), // "slotRecvGpsCord"
QT_MOC_LITERAL(5, 58, 8), // "GpsCoord"
QT_MOC_LITERAL(6, 67, 4), // "cord"
QT_MOC_LITERAL(7, 72, 17), // "slotRecvDelaytime"
QT_MOC_LITERAL(8, 90, 20), // "slotRecvSondaryrange"
QT_MOC_LITERAL(9, 111, 18), // "slotRecvSendSignal"
QT_MOC_LITERAL(10, 130, 20), // "slotRecvClickedStart"
QT_MOC_LITERAL(11, 151, 18), // "slotBrowseVelocity"
QT_MOC_LITERAL(12, 170, 21), // "slot_recv_coordsystem"
QT_MOC_LITERAL(13, 192, 3), // "pX0"
QT_MOC_LITERAL(14, 196, 3), // "pY0"
QT_MOC_LITERAL(15, 200, 3), // "pZ0"
QT_MOC_LITERAL(16, 204, 30), // "slot_recv_coordAfterCalculator"
QT_MOC_LITERAL(17, 235, 13), // "slot_OBS_info"
QT_MOC_LITERAL(18, 249, 7), // "pOBSMin"
QT_MOC_LITERAL(19, 257, 7), // "pOBSMax"
QT_MOC_LITERAL(20, 265, 18), // "slot_stop_deckUnit"
QT_MOC_LITERAL(21, 284, 8), // "showText"
QT_MOC_LITERAL(22, 293, 4), // "text"
QT_MOC_LITERAL(23, 298, 18), // "slot_recv_loadinfo"
QT_MOC_LITERAL(24, 317, 8) // "loadinfo"

    },
    "GPositionSystem\0startPostion\0\0stopPostion\0"
    "slotRecvGpsCord\0GpsCoord\0cord\0"
    "slotRecvDelaytime\0slotRecvSondaryrange\0"
    "slotRecvSendSignal\0slotRecvClickedStart\0"
    "slotBrowseVelocity\0slot_recv_coordsystem\0"
    "pX0\0pY0\0pZ0\0slot_recv_coordAfterCalculator\0"
    "slot_OBS_info\0pOBSMin\0pOBSMax\0"
    "slot_stop_deckUnit\0showText\0text\0"
    "slot_recv_loadinfo\0loadinfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPositionSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x09 /* Protected */,
       3,    0,   85,    2, 0x09 /* Protected */,
       4,    1,   86,    2, 0x09 /* Protected */,
       7,    4,   89,    2, 0x09 /* Protected */,
       8,    4,   98,    2, 0x09 /* Protected */,
       9,    0,  107,    2, 0x09 /* Protected */,
      10,    0,  108,    2, 0x09 /* Protected */,
      11,    1,  109,    2, 0x09 /* Protected */,
      12,    3,  112,    2, 0x09 /* Protected */,
      16,    3,  119,    2, 0x09 /* Protected */,
      17,    2,  126,    2, 0x09 /* Protected */,
      20,    0,  131,    2, 0x09 /* Protected */,
      21,    1,  132,    2, 0x0a /* Public */,
      23,    1,  135,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void GPositionSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPositionSystem *_t = static_cast<GPositionSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startPostion(); break;
        case 1: _t->stopPostion(); break;
        case 2: _t->slotRecvGpsCord((*reinterpret_cast< const GpsCoord(*)>(_a[1]))); break;
        case 3: _t->slotRecvDelaytime((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 4: _t->slotRecvSondaryrange((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4]))); break;
        case 5: _t->slotRecvSendSignal(); break;
        case 6: _t->slotRecvClickedStart(); break;
        case 7: _t->slotBrowseVelocity((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slot_recv_coordsystem((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 9: _t->slot_recv_coordAfterCalculator((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 10: _t->slot_OBS_info((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->slot_stop_deckUnit(); break;
        case 12: _t->showText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->slot_recv_loadinfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GPositionSystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GPositionSystem.data,
      qt_meta_data_GPositionSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPositionSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPositionSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPositionSystem.stringdata0))
        return static_cast<void*>(const_cast< GPositionSystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int GPositionSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
