/****************************************************************************
** Meta object code from reading C++ file 'logindlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../logindlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginDlg_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDlg_t qt_meta_stringdata_LoginDlg = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LoginDlg"
QT_MOC_LITERAL(1, 9, 15), // "slotInformation"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "slotTechAdv"
QT_MOC_LITERAL(4, 38, 9), // "slotLogIn"
QT_MOC_LITERAL(5, 48, 12), // "slotIsRmbPwd"
QT_MOC_LITERAL(6, 61, 6), // "rmbPWd"
QT_MOC_LITERAL(7, 68, 13), // "slotChangePwd"
QT_MOC_LITERAL(8, 82, 17) // "slotPwdHintNormal"

    },
    "LoginDlg\0slotInformation\0\0slotTechAdv\0"
    "slotLogIn\0slotIsRmbPwd\0rmbPWd\0"
    "slotChangePwd\0slotPwdHintNormal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    1,   47,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDlg *_t = static_cast<LoginDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInformation(); break;
        case 1: _t->slotTechAdv(); break;
        case 2: _t->slotLogIn(); break;
        case 3: _t->slotIsRmbPwd((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->slotChangePwd(); break;
        case 5: _t->slotPwdHintNormal(); break;
        default: ;
        }
    }
}

const QMetaObject LoginDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDlg.data,
      qt_meta_data_LoginDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDlg.stringdata0))
        return static_cast<void*>(const_cast< LoginDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_ChangePasswordDlg_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChangePasswordDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChangePasswordDlg_t qt_meta_stringdata_ChangePasswordDlg = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ChangePasswordDlg"
QT_MOC_LITERAL(1, 18, 13), // "slotChangePwd"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "clearInput"
QT_MOC_LITERAL(4, 44, 17), // "slotOldPwdChanged"
QT_MOC_LITERAL(5, 62, 4), // "text"
QT_MOC_LITERAL(6, 67, 18), // "slotNewPwd1Changed"
QT_MOC_LITERAL(7, 86, 18), // "slotNewPwd2Changed"
QT_MOC_LITERAL(8, 105, 11), // "checkPWdStr"
QT_MOC_LITERAL(9, 117, 8), // "QString&"
QT_MOC_LITERAL(10, 126, 6) // "pwdStr"

    },
    "ChangePasswordDlg\0slotChangePwd\0\0"
    "clearInput\0slotOldPwdChanged\0text\0"
    "slotNewPwd1Changed\0slotNewPwd2Changed\0"
    "checkPWdStr\0QString&\0pwdStr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChangePasswordDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    1,   46,    2, 0x09 /* Protected */,
       6,    1,   49,    2, 0x09 /* Protected */,
       7,    1,   52,    2, 0x09 /* Protected */,
       8,    1,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 9,   10,

       0        // eod
};

void ChangePasswordDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChangePasswordDlg *_t = static_cast<ChangePasswordDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotChangePwd(); break;
        case 1: _t->clearInput(); break;
        case 2: _t->slotOldPwdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotNewPwd1Changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotNewPwd2Changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = _t->checkPWdStr((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ChangePasswordDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangePasswordDlg.data,
      qt_meta_data_ChangePasswordDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChangePasswordDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangePasswordDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChangePasswordDlg.stringdata0))
        return static_cast<void*>(const_cast< ChangePasswordDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangePasswordDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
