/****************************************************************************
** Meta object code from reading C++ file 'settingserial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settingserial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingserial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_settingSerial_t {
    QByteArrayData data[15];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_settingSerial_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_settingSerial_t qt_meta_stringdata_settingSerial = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 23),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 16),
QT_MOC_LITERAL(4, 56, 9),
QT_MOC_LITERAL(5, 66, 11),
QT_MOC_LITERAL(6, 78, 9),
QT_MOC_LITERAL(7, 88, 11),
QT_MOC_LITERAL(8, 100, 10),
QT_MOC_LITERAL(9, 111, 12),
QT_MOC_LITERAL(10, 124, 16),
QT_MOC_LITERAL(11, 141, 16),
QT_MOC_LITERAL(12, 158, 6),
QT_MOC_LITERAL(13, 165, 8),
QT_MOC_LITERAL(14, 174, 9)
    },
    "settingSerial\0buttonOK_SettingClicked\0"
    "\0closeSettingForm\0showEvent\0QShowEvent*\0"
    "hideEvent\0QHideEvent*\0closeEvent\0"
    "QCloseEvent*\0addCurrentConfig\0"
    "QAbstractButton*\0button\0loadForm\0"
    "closeForm\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_settingSerial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x05,
       3,    0,   55,    2, 0x05,
       4,    1,   56,    2, 0x05,
       6,    1,   59,    2, 0x05,
       8,    1,   62,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      10,    1,   65,    2, 0x08,
      13,    0,   68,    2, 0x08,
      14,    0,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void settingSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        settingSerial *_t = static_cast<settingSerial *>(_o);
        switch (_id) {
        case 0: _t->buttonOK_SettingClicked(); break;
        case 1: _t->closeSettingForm(); break;
        case 2: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 3: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->addCurrentConfig((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 6: _t->loadForm(); break;
        case 7: _t->closeForm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (settingSerial::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingSerial::buttonOK_SettingClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (settingSerial::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingSerial::closeSettingForm)) {
                *result = 1;
            }
        }
        {
            typedef void (settingSerial::*_t)(QShowEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingSerial::showEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (settingSerial::*_t)(QHideEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingSerial::hideEvent)) {
                *result = 3;
            }
        }
        {
            typedef void (settingSerial::*_t)(QCloseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&settingSerial::closeEvent)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject settingSerial::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_settingSerial.data,
      qt_meta_data_settingSerial,  qt_static_metacall, 0, 0}
};


const QMetaObject *settingSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settingSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_settingSerial.stringdata))
        return static_cast<void*>(const_cast< settingSerial*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int settingSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void settingSerial::buttonOK_SettingClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void settingSerial::closeSettingForm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void settingSerial::showEvent(QShowEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void settingSerial::hideEvent(QHideEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void settingSerial::closeEvent(QCloseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
