/****************************************************************************
** Meta object code from reading C++ file 'slidehypcam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtHypCam/slidehypcam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slidehypcam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_slideHypCam_t {
    QByteArrayData data[11];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_slideHypCam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_slideHypCam_t qt_meta_stringdata_slideHypCam = {
    {
QT_MOC_LITERAL(0, 0, 11), // "slideHypCam"
QT_MOC_LITERAL(1, 12, 24), // "funcUpdateSlideToDisplay"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 22), // "funcGenerateSlideImage"
QT_MOC_LITERAL(4, 61, 14), // "funcGetNumImgs"
QT_MOC_LITERAL(5, 76, 4), // "path"
QT_MOC_LITERAL(6, 81, 33), // "on_actionpbGetSlideCube_trigg..."
QT_MOC_LITERAL(7, 115, 11), // "resizeEvent"
QT_MOC_LITERAL(8, 127, 13), // "QResizeEvent*"
QT_MOC_LITERAL(9, 141, 5), // "event"
QT_MOC_LITERAL(10, 147, 33) // "on_actionSlide_settings_trigg..."

    },
    "slideHypCam\0funcUpdateSlideToDisplay\0"
    "\0funcGenerateSlideImage\0funcGetNumImgs\0"
    "path\0on_actionpbGetSlideCube_triggered\0"
    "resizeEvent\0QResizeEvent*\0event\0"
    "on_actionSlide_settings_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_slideHypCam[] = {

 // content:
       7,       // revision
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
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void slideHypCam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        slideHypCam *_t = static_cast<slideHypCam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->funcUpdateSlideToDisplay(); break;
        case 1: _t->funcGenerateSlideImage(); break;
        case 2: { int _r = _t->funcGetNumImgs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on_actionpbGetSlideCube_triggered(); break;
        case 4: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 5: _t->on_actionSlide_settings_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject slideHypCam::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_slideHypCam.data,
      qt_meta_data_slideHypCam,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *slideHypCam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *slideHypCam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_slideHypCam.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int slideHypCam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
