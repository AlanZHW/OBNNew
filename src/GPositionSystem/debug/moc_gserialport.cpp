/****************************************************************************
** Meta object code from reading C++ file 'gserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GSerialPort_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GSerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GSerialPort_t qt_meta_stringdata_GSerialPort = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GSerialPort"
QT_MOC_LITERAL(1, 12, 11), // "recvGpsCord"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "GpsCoord"
QT_MOC_LITERAL(4, 34, 14), // "gpsErrorOccurs"
QT_MOC_LITERAL(5, 49, 22), // "recvReadGPSInformation"
QT_MOC_LITERAL(6, 72, 22), // "signal_recv_sendsignal"
QT_MOC_LITERAL(7, 95, 13) // "slotReadyRead"

    },
    "GSerialPort\0recvGpsCord\0\0GpsCoord\0"
    "gpsErrorOccurs\0recvReadGPSInformation\0"
    "signal_recv_sendsignal\0slotReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GSerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       6,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GSerialPort *_t = static_cast<GSerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recvGpsCord((*reinterpret_cast< const GpsCoord(*)>(_a[1]))); break;
        case 1: _t->gpsErrorOccurs(); break;
        case 2: _t->recvReadGPSInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->signal_recv_sendsignal(); break;
        case 4: _t->slotReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GSerialPort::*_t)(const GpsCoord & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSerialPort::recvGpsCord)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GSerialPort::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSerialPort::gpsErrorOccurs)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GSerialPort::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSerialPort::recvReadGPSInformation)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GSerialPort::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GSerialPort::signal_recv_sendsignal)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GSerialPort::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GSerialPort.data,
      qt_meta_data_GSerialPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GSerialPort.stringdata0))
        return static_cast<void*>(const_cast< GSerialPort*>(this));
    return QWidget::qt_metacast(_clname);
}

int GSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GSerialPort::recvGpsCord(const GpsCoord & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GSerialPort::gpsErrorOccurs()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GSerialPort::recvReadGPSInformation(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GSerialPort::signal_recv_sendsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
