/****************************************************************************
** Meta object code from reading C++ file 'newfriend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chat/newfriend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newfriend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_newFriend_t {
    QByteArrayData data[11];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_newFriend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_newFriend_t qt_meta_stringdata_newFriend = {
    {
QT_MOC_LITERAL(0, 0, 9), // "newFriend"
QT_MOC_LITERAL(1, 10, 19), // "on_return_2_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "on_go_clicked"
QT_MOC_LITERAL(4, 45, 27), // "on_name_accord_stateChanged"
QT_MOC_LITERAL(5, 73, 4), // "arg1"
QT_MOC_LITERAL(6, 78, 28), // "on_phone_accord_stateChanged"
QT_MOC_LITERAL(7, 107, 23), // "on_result_doubleClicked"
QT_MOC_LITERAL(8, 131, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 143, 5), // "index"
QT_MOC_LITERAL(10, 149, 26) // "on_applyList_doubleClicked"

    },
    "newFriend\0on_return_2_clicked\0\0"
    "on_go_clicked\0on_name_accord_stateChanged\0"
    "arg1\0on_phone_accord_stateChanged\0"
    "on_result_doubleClicked\0QModelIndex\0"
    "index\0on_applyList_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_newFriend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void newFriend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<newFriend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_return_2_clicked(); break;
        case 1: _t->on_go_clicked(); break;
        case 2: _t->on_name_accord_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_phone_accord_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_result_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_applyList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject newFriend::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_newFriend.data,
    qt_meta_data_newFriend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *newFriend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newFriend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_newFriend.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int newFriend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
