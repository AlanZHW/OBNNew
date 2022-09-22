/****************************************************************************
** Meta object code from reading C++ file 'mainwinunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwinunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwinunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModToolButton_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModToolButton_t qt_meta_stringdata_ModToolButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ModToolButton"
QT_MOC_LITERAL(1, 14, 9), // "signalRun"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "ModuleName"
QT_MOC_LITERAL(4, 36, 11), // "signalAbout"
QT_MOC_LITERAL(5, 48, 30), // "slotCustomContextMenuRequested"
QT_MOC_LITERAL(6, 79, 9), // "slotAbout"
QT_MOC_LITERAL(7, 89, 7) // "slotRun"

    },
    "ModToolButton\0signalRun\0\0ModuleName\0"
    "signalAbout\0slotCustomContextMenuRequested\0"
    "slotAbout\0slotRun"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModToolButton *_t = static_cast<ModToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRun((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signalAbout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotCustomContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->slotAbout(); break;
        case 4: _t->slotRun(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModToolButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModToolButton::signalRun)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModToolButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModToolButton::signalAbout)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ModToolButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_ModToolButton.data,
      qt_meta_data_ModToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModToolButton.stringdata0))
        return static_cast<void*>(const_cast< ModToolButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int ModToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void ModToolButton::signalRun(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModToolButton::signalAbout(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ProjectManager_t {
    QByteArrayData data[10];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectManager_t qt_meta_stringdata_ProjectManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProjectManager"
QT_MOC_LITERAL(1, 15, 17), // "signalOpenProject"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "slotRecentFiles"
QT_MOC_LITERAL(4, 50, 8), // "QAction*"
QT_MOC_LITERAL(5, 59, 17), // "slotDoubleClicked"
QT_MOC_LITERAL(6, 77, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 94, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(8, 121, 17), // "listWgOpenProject"
QT_MOC_LITERAL(9, 139, 25) // "listWgClearRencentProject"

    },
    "ProjectManager\0signalOpenProject\0\0"
    "slotRecentFiles\0QAction*\0slotDoubleClicked\0"
    "QListWidgetItem*\0customContextMenuRequested\0"
    "listWgOpenProject\0listWgClearRencentProject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectManager *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpenProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotRecentFiles((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->slotDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->listWgOpenProject(); break;
        case 5: _t->listWgClearRencentProject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProjectManager::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProjectManager::signalOpenProject)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ProjectManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ProjectManager.data,
      qt_meta_data_ProjectManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectManager.stringdata0))
        return static_cast<void*>(const_cast< ProjectManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ProjectManager::signalOpenProject(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateProjDialog_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateProjDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateProjDialog_t qt_meta_stringdata_CreateProjDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CreateProjDialog"
QT_MOC_LITERAL(1, 17, 6), // "slotOk"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "slotCancel"
QT_MOC_LITERAL(4, 36, 11), // "slotBrowser"
QT_MOC_LITERAL(5, 48, 18), // "slotProNameChanged"
QT_MOC_LITERAL(6, 67, 7) // "proName"

    },
    "CreateProjDialog\0slotOk\0\0slotCancel\0"
    "slotBrowser\0slotProNameChanged\0proName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateProjDialog[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void CreateProjDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateProjDialog *_t = static_cast<CreateProjDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOk(); break;
        case 1: _t->slotCancel(); break;
        case 2: _t->slotBrowser(); break;
        case 3: _t->slotProNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CreateProjDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateProjDialog.data,
      qt_meta_data_CreateProjDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateProjDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateProjDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateProjDialog.stringdata0))
        return static_cast<void*>(const_cast< CreateProjDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateProjDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
