/****************************************************************************
** Meta object code from reading C++ file 'gmotortestersc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gmotortestersc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gmotortestersc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GmotorTesterSC_t {
    QByteArrayData data[12];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GmotorTesterSC_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GmotorTesterSC_t qt_meta_stringdata_GmotorTesterSC = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 9),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 9),
QT_MOC_LITERAL(4, 36, 5),
QT_MOC_LITERAL(5, 42, 14),
QT_MOC_LITERAL(6, 57, 12),
QT_MOC_LITERAL(7, 70, 9),
QT_MOC_LITERAL(8, 80, 13),
QT_MOC_LITERAL(9, 94, 10),
QT_MOC_LITERAL(10, 105, 13),
QT_MOC_LITERAL(11, 119, 6)
    },
    "GmotorTesterSC\0addTabNew\0\0deleteTab\0"
    "index\0EnableMainForm\0actionDelete\0"
    "actionNew\0actionSetting\0actionExit\0"
    "actionConnect\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GmotorTesterSC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08,
       3,    1,   55,    2, 0x08,
       5,    0,   58,    2, 0x08,
       6,    0,   59,    2, 0x08,
       7,    0,   60,    2, 0x08,
       8,    0,   61,    2, 0x08,
       9,    0,   62,    2, 0x08,
      10,    1,   63,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void GmotorTesterSC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GmotorTesterSC *_t = static_cast<GmotorTesterSC *>(_o);
        switch (_id) {
        case 0: _t->addTabNew(); break;
        case 1: _t->deleteTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->EnableMainForm(); break;
        case 3: _t->actionDelete(); break;
        case 4: _t->actionNew(); break;
        case 5: _t->actionSetting(); break;
        case 6: _t->actionExit(); break;
        case 7: _t->actionConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GmotorTesterSC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GmotorTesterSC.data,
      qt_meta_data_GmotorTesterSC,  qt_static_metacall, 0, 0}
};


const QMetaObject *GmotorTesterSC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GmotorTesterSC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GmotorTesterSC.stringdata))
        return static_cast<void*>(const_cast< GmotorTesterSC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GmotorTesterSC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE