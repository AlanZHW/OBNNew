/****************************************************************************
** Meta object code from reading C++ file 'deploysystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../deploysystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deploysystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeploySystem_t {
    QByteArrayData data[21];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeploySystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeploySystem_t qt_meta_stringdata_DeploySystem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeploySystem"
QT_MOC_LITERAL(1, 13, 24), // "signalDepolySysConnected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "signalDepolySysStateChanged"
QT_MOC_LITERAL(4, 67, 18), // "signalUpdateDevice"
QT_MOC_LITERAL(5, 86, 8), // "areaName"
QT_MOC_LITERAL(6, 95, 22), // "slotSocketStateChanged"
QT_MOC_LITERAL(7, 118, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(8, 147, 5), // "state"
QT_MOC_LITERAL(9, 153, 19), // "slotSocketReadyRead"
QT_MOC_LITERAL(10, 173, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(11, 193, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(12, 213, 17), // "on_ConCbx_clicked"
QT_MOC_LITERAL(13, 231, 7), // "checked"
QT_MOC_LITERAL(14, 239, 36), // "on_workStatusCbx_currentIndex..."
QT_MOC_LITERAL(15, 276, 5), // "index"
QT_MOC_LITERAL(16, 282, 29), // "on_areaCbx_currentTextChanged"
QT_MOC_LITERAL(17, 312, 4), // "arg1"
QT_MOC_LITERAL(18, 317, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(19, 335, 20), // "on_closeBtn2_clicked"
QT_MOC_LITERAL(20, 356, 21) // "on_pushButton_clicked"

    },
    "DeploySystem\0signalDepolySysConnected\0"
    "\0signalDepolySysStateChanged\0"
    "signalUpdateDevice\0areaName\0"
    "slotSocketStateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "slotSocketReadyRead\0on_clearBtn_clicked\0"
    "on_closeBtn_clicked\0on_ConCbx_clicked\0"
    "checked\0on_workStatusCbx_currentIndexChanged\0"
    "index\0on_areaCbx_currentTextChanged\0"
    "arg1\0on_addBtn_clicked\0on_closeBtn2_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeploySystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   88,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeploySystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeploySystem *_t = static_cast<DeploySystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalDepolySysConnected((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->signalDepolySysStateChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->signalUpdateDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotSocketStateChanged((*reinterpret_cast< const QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->slotSocketReadyRead(); break;
        case 5: _t->on_clearBtn_clicked(); break;
        case 6: _t->on_closeBtn_clicked(); break;
        case 7: _t->on_ConCbx_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_workStatusCbx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_areaCbx_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_addBtn_clicked(); break;
        case 11: _t->on_closeBtn2_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeploySystem::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeploySystem::signalDepolySysConnected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeploySystem::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeploySystem::signalDepolySysStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DeploySystem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeploySystem::signalUpdateDevice)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DeploySystem::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeploySystem.data,
      qt_meta_data_DeploySystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeploySystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeploySystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeploySystem.stringdata0))
        return static_cast<void*>(const_cast< DeploySystem*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeploySystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DeploySystem::signalDepolySysConnected(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeploySystem::signalDepolySysStateChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeploySystem::signalUpdateDevice(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
