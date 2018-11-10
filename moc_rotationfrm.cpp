/****************************************************************************
** Meta object code from reading C++ file 'rotationfrm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtHypCam/rotationfrm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rotationfrm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rotationFrm_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rotationFrm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rotationFrm_t qt_meta_stringdata_rotationFrm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "rotationFrm"
QT_MOC_LITERAL(1, 12, 12), // "angleChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "angle"
QT_MOC_LITERAL(4, 32, 25), // "on_pbSaveRotation_clicked"
QT_MOC_LITERAL(5, 58, 25), // "on_spinAngle_valueChanged"
QT_MOC_LITERAL(6, 84, 4), // "arg1"
QT_MOC_LITERAL(7, 89, 29) // "on_pbLoadLastRotation_clicked"

    },
    "rotationFrm\0angleChanged\0\0angle\0"
    "on_pbSaveRotation_clicked\0"
    "on_spinAngle_valueChanged\0arg1\0"
    "on_pbLoadLastRotation_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rotationFrm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,

       0        // eod
};

void rotationFrm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        rotationFrm *_t = static_cast<rotationFrm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->angleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->on_pbSaveRotation_clicked(); break;
        case 2: _t->on_spinAngle_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_pbLoadLastRotation_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (rotationFrm::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rotationFrm::angleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject rotationFrm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rotationFrm.data,
      qt_meta_data_rotationFrm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *rotationFrm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rotationFrm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rotationFrm.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rotationFrm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void rotationFrm::angleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
