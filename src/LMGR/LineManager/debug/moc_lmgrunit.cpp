/****************************************************************************
** Meta object code from reading C++ file 'lmgrunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lmgrunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lmgrunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractAreaDialog_t {
    QByteArrayData data[17];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractAreaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractAreaDialog_t qt_meta_stringdata_AbstractAreaDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AbstractAreaDialog"
QT_MOC_LITERAL(1, 19, 16), // "signalCreateArea"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "areaName"
QT_MOC_LITERAL(4, 46, 16), // "signalUpdateArea"
QT_MOC_LITERAL(5, 63, 16), // "signalDeleteArea"
QT_MOC_LITERAL(6, 80, 16), // "setProgressValue"
QT_MOC_LITERAL(7, 97, 5), // "value"
QT_MOC_LITERAL(8, 103, 14), // "setOperateHint"
QT_MOC_LITERAL(9, 118, 4), // "hint"
QT_MOC_LITERAL(10, 123, 15), // "setProgressInfo"
QT_MOC_LITERAL(11, 139, 18), // "slotBrowserSPSFile"
QT_MOC_LITERAL(12, 158, 11), // "slotOperate"
QT_MOC_LITERAL(13, 170, 17), // "slotReplaceUpdate"
QT_MOC_LITERAL(14, 188, 15), // "slotMergeUpdate"
QT_MOC_LITERAL(15, 204, 3), // "run"
QT_MOC_LITERAL(16, 208, 8) // "slotHelp"

    },
    "AbstractAreaDialog\0signalCreateArea\0"
    "\0areaName\0signalUpdateArea\0signalDeleteArea\0"
    "setProgressValue\0value\0setOperateHint\0"
    "hint\0setProgressInfo\0slotBrowserSPSFile\0"
    "slotOperate\0slotReplaceUpdate\0"
    "slotMergeUpdate\0run\0slotHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractAreaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   81,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
      10,    2,   87,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x09 /* Protected */,
      12,    0,   93,    2, 0x09 /* Protected */,
      13,    0,   94,    2, 0x09 /* Protected */,
      14,    0,   95,    2, 0x09 /* Protected */,
      15,    0,   96,    2, 0x09 /* Protected */,
      16,    0,   97,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AbstractAreaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractAreaDialog *_t = static_cast<AbstractAreaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCreateArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signalUpdateArea(); break;
        case 2: _t->signalDeleteArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setProgressValue((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->setOperateHint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setProgressInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 6: _t->slotBrowserSPSFile(); break;
        case 7: _t->slotOperate(); break;
        case 8: _t->slotReplaceUpdate(); break;
        case 9: _t->slotMergeUpdate(); break;
        case 10: _t->run(); break;
        case 11: _t->slotHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractAreaDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractAreaDialog::signalCreateArea)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractAreaDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractAreaDialog::signalUpdateArea)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractAreaDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractAreaDialog::signalDeleteArea)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AbstractAreaDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AbstractAreaDialog.data,
      qt_meta_data_AbstractAreaDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractAreaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractAreaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractAreaDialog.stringdata0))
        return static_cast<void*>(const_cast< AbstractAreaDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AbstractAreaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AbstractAreaDialog::signalCreateArea(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractAreaDialog::signalUpdateArea()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AbstractAreaDialog::signalDeleteArea(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_CreateAreaDialog_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateAreaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateAreaDialog_t qt_meta_stringdata_CreateAreaDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CreateAreaDialog"
QT_MOC_LITERAL(1, 17, 3), // "run"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8) // "slotHelp"

    },
    "CreateAreaDialog\0run\0\0slotHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateAreaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CreateAreaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateAreaDialog *_t = static_cast<CreateAreaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->slotHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CreateAreaDialog::staticMetaObject = {
    { &AbstractAreaDialog::staticMetaObject, qt_meta_stringdata_CreateAreaDialog.data,
      qt_meta_data_CreateAreaDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateAreaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateAreaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateAreaDialog.stringdata0))
        return static_cast<void*>(const_cast< CreateAreaDialog*>(this));
    return AbstractAreaDialog::qt_metacast(_clname);
}

int CreateAreaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAreaDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_UpdateAreaDialog_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateAreaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateAreaDialog_t qt_meta_stringdata_UpdateAreaDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UpdateAreaDialog"
QT_MOC_LITERAL(1, 17, 3), // "run"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8) // "slotHelp"

    },
    "UpdateAreaDialog\0run\0\0slotHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateAreaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpdateAreaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdateAreaDialog *_t = static_cast<UpdateAreaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->slotHelp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UpdateAreaDialog::staticMetaObject = {
    { &AbstractAreaDialog::staticMetaObject, qt_meta_stringdata_UpdateAreaDialog.data,
      qt_meta_data_UpdateAreaDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpdateAreaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateAreaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateAreaDialog.stringdata0))
        return static_cast<void*>(const_cast< UpdateAreaDialog*>(this));
    return AbstractAreaDialog::qt_metacast(_clname);
}

int UpdateAreaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractAreaDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AreaListDlg_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AreaListDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AreaListDlg_t qt_meta_stringdata_AreaListDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AreaListDlg"
QT_MOC_LITERAL(1, 12, 14), // "signalOpenArea"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "areaName"
QT_MOC_LITERAL(4, 37, 16), // "signalDeleteArea"
QT_MOC_LITERAL(5, 54, 6) // "slotOk"

    },
    "AreaListDlg\0signalOpenArea\0\0areaName\0"
    "signalDeleteArea\0slotOk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AreaListDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AreaListDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AreaListDlg *_t = static_cast<AreaListDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpenArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signalDeleteArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotOk(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AreaListDlg::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AreaListDlg::signalOpenArea)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AreaListDlg::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AreaListDlg::signalDeleteArea)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AreaListDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AreaListDlg.data,
      qt_meta_data_AreaListDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AreaListDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AreaListDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AreaListDlg.stringdata0))
        return static_cast<void*>(const_cast< AreaListDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int AreaListDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AreaListDlg::signalOpenArea(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AreaListDlg::signalDeleteArea(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_PreferenceDlg_t {
    QByteArrayData data[10];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferenceDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferenceDlg_t qt_meta_stringdata_PreferenceDlg = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PreferenceDlg"
QT_MOC_LITERAL(1, 14, 12), // "colorChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "id"
QT_MOC_LITERAL(4, 31, 5), // "color"
QT_MOC_LITERAL(5, 37, 15), // "colorMapChanged"
QT_MOC_LITERAL(6, 53, 16), // "QMap<int,QColor>"
QT_MOC_LITERAL(7, 70, 8), // "colorMap"
QT_MOC_LITERAL(8, 79, 9), // "slotOkBtn"
QT_MOC_LITERAL(9, 89, 13) // "slotCancelBtn"

    },
    "PreferenceDlg\0colorChanged\0\0id\0color\0"
    "colorMapChanged\0QMap<int,QColor>\0"
    "colorMap\0slotOkBtn\0slotCancelBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferenceDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   42,    2, 0x08 /* Private */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferenceDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferenceDlg *_t = static_cast<PreferenceDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 1: _t->colorMapChanged((*reinterpret_cast< const QMap<int,QColor>(*)>(_a[1]))); break;
        case 2: _t->slotOkBtn(); break;
        case 3: _t->slotCancelBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PreferenceDlg::*_t)(const int & , const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreferenceDlg::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PreferenceDlg::*_t)(const QMap<int,QColor> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PreferenceDlg::colorMapChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PreferenceDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferenceDlg.data,
      qt_meta_data_PreferenceDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreferenceDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferenceDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreferenceDlg.stringdata0))
        return static_cast<void*>(const_cast< PreferenceDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreferenceDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PreferenceDlg::colorChanged(const int & _t1, const QColor & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreferenceDlg::colorMapChanged(const QMap<int,QColor> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
