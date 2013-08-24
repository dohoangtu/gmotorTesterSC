/****************************************************************************
** Meta object code from reading C++ file 'panelcontrolmotor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../panelcontrolmotor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelcontrolmotor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_panelControlMotor_t {
    QByteArrayData data[24];
    char stringdata[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_panelControlMotor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_panelControlMotor_t qt_meta_stringdata_panelControlMotor = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 11),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 3),
QT_MOC_LITERAL(5, 41, 5),
QT_MOC_LITERAL(6, 47, 22),
QT_MOC_LITERAL(7, 70, 9),
QT_MOC_LITERAL(8, 80, 11),
QT_MOC_LITERAL(9, 92, 10),
QT_MOC_LITERAL(10, 103, 12),
QT_MOC_LITERAL(11, 116, 14),
QT_MOC_LITERAL(12, 131, 6),
QT_MOC_LITERAL(13, 138, 12),
QT_MOC_LITERAL(14, 151, 14),
QT_MOC_LITERAL(15, 166, 12),
QT_MOC_LITERAL(16, 179, 12),
QT_MOC_LITERAL(17, 192, 12),
QT_MOC_LITERAL(18, 205, 5),
QT_MOC_LITERAL(19, 211, 14),
QT_MOC_LITERAL(20, 226, 12),
QT_MOC_LITERAL(21, 239, 19),
QT_MOC_LITERAL(22, 259, 8),
QT_MOC_LITERAL(23, 268, 9)
    },
    "panelControlMotor\0writePannel\0\0power\0"
    "dir\0speed\0closePanelControlMotor\0"
    "showEvent\0QShowEvent*\0closeEvent\0"
    "QCloseEvent*\0btPowerClicked\0status\0"
    "btRunClicked\0btPauseClicked\0btDirClicked\0"
    "VSpeedChange\0VPowerChange\0Power\0"
    "timeProcessOut\0timeMotorOut\0"
    "timeDisplayMotorOut\0loadForm\0closeForm\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_panelControlMotor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x05,
       6,    0,   96,    2, 0x05,
       7,    1,   97,    2, 0x05,
       9,    1,  100,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      11,    1,  103,    2, 0x08,
      13,    1,  106,    2, 0x08,
      14,    1,  109,    2, 0x08,
      15,    1,  112,    2, 0x08,
      16,    1,  115,    2, 0x08,
      17,    1,  118,    2, 0x08,
      19,    0,  121,    2, 0x08,
      20,    0,  122,    2, 0x08,
      21,    0,  123,    2, 0x08,
      22,    0,  124,    2, 0x08,
      23,    0,  125,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Char, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void panelControlMotor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        panelControlMotor *_t = static_cast<panelControlMotor *>(_o);
        switch (_id) {
        case 0: _t->writePannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->closePanelControlMotor(); break;
        case 2: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->btPowerClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->btRunClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->btPauseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->btDirClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->VSpeedChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->VPowerChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->timeProcessOut(); break;
        case 11: _t->timeMotorOut(); break;
        case 12: _t->timeDisplayMotorOut(); break;
        case 13: _t->loadForm(); break;
        case 14: _t->closeForm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (panelControlMotor::*_t)(int , char , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&panelControlMotor::writePannel)) {
                *result = 0;
            }
        }
        {
            typedef void (panelControlMotor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&panelControlMotor::closePanelControlMotor)) {
                *result = 1;
            }
        }
        {
            typedef void (panelControlMotor::*_t)(QShowEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&panelControlMotor::showEvent)) {
                *result = 2;
            }
        }
        {
            typedef void (panelControlMotor::*_t)(QCloseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&panelControlMotor::closeEvent)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject panelControlMotor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_panelControlMotor.data,
      qt_meta_data_panelControlMotor,  qt_static_metacall, 0, 0}
};


const QMetaObject *panelControlMotor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *panelControlMotor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_panelControlMotor.stringdata))
        return static_cast<void*>(const_cast< panelControlMotor*>(this));
    return QWidget::qt_metacast(_clname);
}

int panelControlMotor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void panelControlMotor::writePannel(int _t1, char _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void panelControlMotor::closePanelControlMotor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void panelControlMotor::showEvent(QShowEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void panelControlMotor::closeEvent(QCloseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
