/****************************************************************************
** Meta object code from reading C++ file 'smarthometemperature.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SmartHomeTemperature/smarthometemperature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smarthometemperature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SmartHomeTemperature_t {
    const uint offsetsAndSize[24];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SmartHomeTemperature_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SmartHomeTemperature_t qt_meta_stringdata_SmartHomeTemperature = {
    {
QT_MOC_LITERAL(0, 20), // "SmartHomeTemperature"
QT_MOC_LITERAL(21, 25), // "on_btn_add_wtsapp_clicked"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 28), // "on_btn_remove_wtsapp_clicked"
QT_MOC_LITERAL(77, 23), // "on_btn_add_mail_clicked"
QT_MOC_LITERAL(101, 26), // "on_btn_remove_mail_clicked"
QT_MOC_LITERAL(128, 22), // "on_btn_add_lcd_clicked"
QT_MOC_LITERAL(151, 25), // "on_btn_remove_lcd_clicked"
QT_MOC_LITERAL(177, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(201, 17), // "change_global_url"
QT_MOC_LITERAL(219, 11), // "std::string"
QT_MOC_LITERAL(231, 7) // "new_url"

    },
    "SmartHomeTemperature\0on_btn_add_wtsapp_clicked\0"
    "\0on_btn_remove_wtsapp_clicked\0"
    "on_btn_add_mail_clicked\0"
    "on_btn_remove_mail_clicked\0"
    "on_btn_add_lcd_clicked\0on_btn_remove_lcd_clicked\0"
    "on_pushButton_7_clicked\0change_global_url\0"
    "std::string\0new_url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartHomeTemperature[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    1,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void SmartHomeTemperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SmartHomeTemperature *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_add_wtsapp_clicked(); break;
        case 1: _t->on_btn_remove_wtsapp_clicked(); break;
        case 2: _t->on_btn_add_mail_clicked(); break;
        case 3: _t->on_btn_remove_mail_clicked(); break;
        case 4: _t->on_btn_add_lcd_clicked(); break;
        case 5: _t->on_btn_remove_lcd_clicked(); break;
        case 6: _t->on_pushButton_7_clicked(); break;
        case 7: _t->change_global_url((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SmartHomeTemperature::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SmartHomeTemperature.offsetsAndSize,
    qt_meta_data_SmartHomeTemperature,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SmartHomeTemperature_t
, QtPrivate::TypeAndForceComplete<SmartHomeTemperature, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>


>,
    nullptr
} };


const QMetaObject *SmartHomeTemperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartHomeTemperature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SmartHomeTemperature.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SmartHomeTemperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
