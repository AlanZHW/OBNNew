/****************************************************************************
** Meta object code from reading C++ file 'gobsdtmagerdifftime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gobsdtmagerdifftime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gobsdtmagerdifftime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GobsDtMagerDiffTime_t {
    QByteArrayData data[6];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GobsDtMagerDiffTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GobsDtMagerDiffTime_t qt_meta_stringdata_GobsDtMagerDiffTime = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GobsDtMagerDiffTime"
QT_MOC_LITERAL(1, 20, 18), // "slotReadACUSuccess"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_PushBrowse_clicked"
QT_MOC_LITERAL(4, 62, 24), // "on_PushImplement_clicked"
QT_MOC_LITERAL(5, 87, 23) // "on_buttonConfig_clicked"

    },
    "GobsDtMagerDiffTime\0slotReadACUSuccess\0"
    "\0on_PushBrowse_clicked\0on_PushImplement_clicked\0"
    "on_buttonConfig_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GobsDtMagerDiffTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    0,   37,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GobsDtMagerDiffTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GobsDtMagerDiffTime *_t = static_cast<GobsDtMagerDiffTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotReadACUSuccess((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->on_PushBrowse_clicked(); break;
        case 2: _t->on_PushImplement_clicked(); break;
        case 3: _t->on_buttonConfig_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject GobsDtMagerDiffTime::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GobsDtMagerDiffTime.data,
      qt_meta_data_GobsDtMagerDiffTime,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GobsDtMagerDiffTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GobsDtMagerDiffTime::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GobsDtMagerDiffTime.stringdata0))
        return static_cast<void*>(const_cast< GobsDtMagerDiffTime*>(this));
    return QDialog::qt_metacast(_clname);
}

int GobsDtMagerDiffTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
