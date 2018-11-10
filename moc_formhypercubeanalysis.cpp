/****************************************************************************
** Meta object code from reading C++ file 'formhypercubeanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtHypCam/formhypercubeanalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formhypercubeanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_formHypercubeAnalysis_t {
    QByteArrayData data[20];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formHypercubeAnalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formHypercubeAnalysis_t qt_meta_stringdata_formHypercubeAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 21), // "formHypercubeAnalysis"
QT_MOC_LITERAL(1, 22, 27), // "on_slideTmpImg_valueChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "value"
QT_MOC_LITERAL(4, 57, 22), // "on_pbCubeToImg_clicked"
QT_MOC_LITERAL(5, 80, 21), // "on_pbLoadCube_clicked"
QT_MOC_LITERAL(6, 102, 17), // "updateProgressBar"
QT_MOC_LITERAL(7, 120, 5), // "label"
QT_MOC_LITERAL(8, 126, 15), // "updateSignature"
QT_MOC_LITERAL(9, 142, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 155, 1), // "e"
QT_MOC_LITERAL(11, 157, 16), // "addRemarkedPixel"
QT_MOC_LITERAL(12, 174, 18), // "updateSlidePicture"
QT_MOC_LITERAL(13, 193, 1), // "l"
QT_MOC_LITERAL(14, 195, 11), // "updateLabel"
QT_MOC_LITERAL(15, 207, 9), // "plotPixel"
QT_MOC_LITERAL(16, 217, 17), // "strlstRemarkedPix"
QT_MOC_LITERAL(17, 235, 11), // "remarkedPix"
QT_MOC_LITERAL(18, 247, 9), // "boundArea"
QT_MOC_LITERAL(19, 257, 18) // "on_pbReset_clicked"

    },
    "formHypercubeAnalysis\0on_slideTmpImg_valueChanged\0"
    "\0value\0on_pbCubeToImg_clicked\0"
    "on_pbLoadCube_clicked\0updateProgressBar\0"
    "label\0updateSignature\0QMouseEvent*\0e\0"
    "addRemarkedPixel\0updateSlidePicture\0"
    "l\0updateLabel\0plotPixel\0strlstRemarkedPix\0"
    "remarkedPix\0boundArea\0on_pbReset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formHypercubeAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    2,   69,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,
      15,    2,   86,    2, 0x08 /* Private */,
      19,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Int,   17,   18,
    QMetaType::Void,

       0        // eod
};

void formHypercubeAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formHypercubeAnalysis *_t = static_cast<formHypercubeAnalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_slideTmpImg_valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->on_pbCubeToImg_clicked(); break;
        case 2: _t->on_pbLoadCube_clicked(); break;
        case 3: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->updateSignature((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->addRemarkedPixel((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->updateSlidePicture((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->updateLabel((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->plotPixel((*reinterpret_cast< const strlstRemarkedPix(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 9: _t->on_pbReset_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject formHypercubeAnalysis::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formHypercubeAnalysis.data,
      qt_meta_data_formHypercubeAnalysis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *formHypercubeAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formHypercubeAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_formHypercubeAnalysis.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int formHypercubeAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
