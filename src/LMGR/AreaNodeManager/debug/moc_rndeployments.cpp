/****************************************************************************
** Meta object code from reading C++ file 'rndeployments.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rndeployments.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rndeployments.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditCoordDlg_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditCoordDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditCoordDlg_t qt_meta_stringdata_EditCoordDlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EditCoordDlg"
QT_MOC_LITERAL(1, 13, 18), // "editedCurrentCoord"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "Coordinate"
QT_MOC_LITERAL(4, 44, 4), // "Cord"
QT_MOC_LITERAL(5, 49, 16), // "slotOkBtnClicked"
QT_MOC_LITERAL(6, 66, 20) // "slotCancelBtnClicked"

    },
    "EditCoordDlg\0editedCurrentCoord\0\0"
    "Coordinate\0Cord\0slotOkBtnClicked\0"
    "slotCancelBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditCoordDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditCoordDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditCoordDlg *_t = static_cast<EditCoordDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editedCurrentCoord((*reinterpret_cast< const Coordinate(*)>(_a[1]))); break;
        case 1: _t->slotOkBtnClicked(); break;
        case 2: _t->slotCancelBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EditCoordDlg::*_t)(const Coordinate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditCoordDlg::editedCurrentCoord)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EditCoordDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditCoordDlg.data,
      qt_meta_data_EditCoordDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditCoordDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditCoordDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditCoordDlg.stringdata0))
        return static_cast<void*>(const_cast< EditCoordDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditCoordDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EditCoordDlg::editedCurrentCoord(const Coordinate & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EditDataTimeDlg_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditDataTimeDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditDataTimeDlg_t qt_meta_stringdata_EditDataTimeDlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EditDataTimeDlg"
QT_MOC_LITERAL(1, 16, 14), // "editedDataTime"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "NodeTimeInfo"
QT_MOC_LITERAL(4, 45, 8), // "timeInfo"
QT_MOC_LITERAL(5, 54, 16), // "slotOkBtnClicked"
QT_MOC_LITERAL(6, 71, 20) // "slotCancelBtnClicked"

    },
    "EditDataTimeDlg\0editedDataTime\0\0"
    "NodeTimeInfo\0timeInfo\0slotOkBtnClicked\0"
    "slotCancelBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditDataTimeDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EditDataTimeDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditDataTimeDlg *_t = static_cast<EditDataTimeDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editedDataTime((*reinterpret_cast< const NodeTimeInfo(*)>(_a[1]))); break;
        case 1: _t->slotOkBtnClicked(); break;
        case 2: _t->slotCancelBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EditDataTimeDlg::*_t)(const NodeTimeInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditDataTimeDlg::editedDataTime)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EditDataTimeDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditDataTimeDlg.data,
      qt_meta_data_EditDataTimeDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditDataTimeDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditDataTimeDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditDataTimeDlg.stringdata0))
        return static_cast<void*>(const_cast< EditDataTimeDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditDataTimeDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EditDataTimeDlg::editedDataTime(const NodeTimeInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RNDeployments_t {
    QByteArrayData data[23];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RNDeployments_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RNDeployments_t qt_meta_stringdata_RNDeployments = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RNDeployments"
QT_MOC_LITERAL(1, 14, 25), // "signalUpdateRNDepolyments"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "signalUpdateRecvCoord"
QT_MOC_LITERAL(4, 63, 4), // "line"
QT_MOC_LITERAL(5, 68, 6), // "staion"
QT_MOC_LITERAL(6, 75, 10), // "Coordinate"
QT_MOC_LITERAL(7, 86, 4), // "cord"
QT_MOC_LITERAL(8, 91, 27), // "on_deleteDepolysBtn_clicked"
QT_MOC_LITERAL(9, 119, 28), // "on_editPickupTimeBtn_clicked"
QT_MOC_LITERAL(10, 148, 27), // "on_editDepoyTimeBtn_clicked"
QT_MOC_LITERAL(11, 176, 23), // "on_editCoordBtn_clicked"
QT_MOC_LITERAL(12, 200, 21), // "on_refreshBtn_clicked"
QT_MOC_LITERAL(13, 222, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(14, 242, 26), // "on_importDepolyBtn_clicked"
QT_MOC_LITERAL(15, 269, 25), // "on_exportSheetBtn_clicked"
QT_MOC_LITERAL(16, 295, 22), // "slotEditedCurrentCoord"
QT_MOC_LITERAL(17, 318, 18), // "slotEditedDateTime"
QT_MOC_LITERAL(18, 337, 12), // "NodeTimeInfo"
QT_MOC_LITERAL(19, 350, 17), // "importDepolyments"
QT_MOC_LITERAL(20, 368, 8), // "fileName"
QT_MOC_LITERAL(21, 377, 6), // "lineNo"
QT_MOC_LITERAL(22, 384, 4) // "name"

    },
    "RNDeployments\0signalUpdateRNDepolyments\0"
    "\0signalUpdateRecvCoord\0line\0staion\0"
    "Coordinate\0cord\0on_deleteDepolysBtn_clicked\0"
    "on_editPickupTimeBtn_clicked\0"
    "on_editDepoyTimeBtn_clicked\0"
    "on_editCoordBtn_clicked\0on_refreshBtn_clicked\0"
    "on_closeBtn_clicked\0on_importDepolyBtn_clicked\0"
    "on_exportSheetBtn_clicked\0"
    "slotEditedCurrentCoord\0slotEditedDateTime\0"
    "NodeTimeInfo\0importDepolyments\0fileName\0"
    "lineNo\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RNDeployments[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    3,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      17,    1,  103,    2, 0x08 /* Private */,
      19,    1,  106,    2, 0x08 /* Private */,
      21,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Int, 0x80000000 | 6,    4,    5,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Int, QMetaType::QString,   22,

       0        // eod
};

void RNDeployments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RNDeployments *_t = static_cast<RNDeployments *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUpdateRNDepolyments(); break;
        case 1: _t->signalUpdateRecvCoord((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Coordinate(*)>(_a[3]))); break;
        case 2: _t->on_deleteDepolysBtn_clicked(); break;
        case 3: _t->on_editPickupTimeBtn_clicked(); break;
        case 4: _t->on_editDepoyTimeBtn_clicked(); break;
        case 5: _t->on_editCoordBtn_clicked(); break;
        case 6: _t->on_refreshBtn_clicked(); break;
        case 7: _t->on_closeBtn_clicked(); break;
        case 8: _t->on_importDepolyBtn_clicked(); break;
        case 9: _t->on_exportSheetBtn_clicked(); break;
        case 10: _t->slotEditedCurrentCoord((*reinterpret_cast< const Coordinate(*)>(_a[1]))); break;
        case 11: _t->slotEditedDateTime((*reinterpret_cast< const NodeTimeInfo(*)>(_a[1]))); break;
        case 12: _t->importDepolyments((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: { int _r = _t->lineNo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RNDeployments::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RNDeployments::signalUpdateRNDepolyments)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RNDeployments::*_t)(float , int , Coordinate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RNDeployments::signalUpdateRecvCoord)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RNDeployments::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RNDeployments.data,
      qt_meta_data_RNDeployments,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RNDeployments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RNDeployments::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RNDeployments.stringdata0))
        return static_cast<void*>(const_cast< RNDeployments*>(this));
    return QDialog::qt_metacast(_clname);
}

int RNDeployments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RNDeployments::signalUpdateRNDepolyments()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RNDeployments::signalUpdateRecvCoord(float _t1, int _t2, Coordinate _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
