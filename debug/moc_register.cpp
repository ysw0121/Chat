/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chat/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[18];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 18), // "on_Return2_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 24), // "on_ShowPassword2_clicked"
QT_MOC_LITERAL(4, 54, 7), // "checked"
QT_MOC_LITERAL(5, 62, 20), // "generateRandomNumber"
QT_MOC_LITERAL(6, 83, 10), // "paintEvent"
QT_MOC_LITERAL(7, 94, 12), // "QPaintEvent*"
QT_MOC_LITERAL(8, 107, 15), // "mousePressEvent"
QT_MOC_LITERAL(9, 123, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 136, 5), // "event"
QT_MOC_LITERAL(11, 142, 23), // "on_RegistButton_clicked"
QT_MOC_LITERAL(12, 166, 22), // "on_nickname_textEdited"
QT_MOC_LITERAL(13, 189, 4), // "arg1"
QT_MOC_LITERAL(14, 194, 19), // "on_phone_textEdited"
QT_MOC_LITERAL(15, 214, 22), // "on_Password_textEdited"
QT_MOC_LITERAL(16, 237, 31), // "on_ReconfirmPassword_textEdited"
QT_MOC_LITERAL(17, 269, 22) // "on_identify_textEdited"

    },
    "Register\0on_Return2_clicked\0\0"
    "on_ShowPassword2_clicked\0checked\0"
    "generateRandomNumber\0paintEvent\0"
    "QPaintEvent*\0mousePressEvent\0QMouseEvent*\0"
    "event\0on_RegistButton_clicked\0"
    "on_nickname_textEdited\0arg1\0"
    "on_phone_textEdited\0on_Password_textEdited\0"
    "on_ReconfirmPassword_textEdited\0"
    "on_identify_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,
      16,    1,   90,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Return2_clicked(); break;
        case 1: _t->on_ShowPassword2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { QString _r = _t->generateRandomNumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->on_RegistButton_clicked(); break;
        case 6: _t->on_nickname_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_phone_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_Password_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_ReconfirmPassword_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_identify_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Register::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Register.data,
    qt_meta_data_Register,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
