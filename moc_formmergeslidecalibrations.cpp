/****************************************************************************
** Meta object code from reading C++ file 'formmergeslidecalibrations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtHypCam/formmergeslidecalibrations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formmergeslidecalibrations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_formMergeSlideCalibrations_t {
    QByteArrayData data[18];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formMergeSlideCalibrations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formMergeSlideCalibrations_t qt_meta_stringdata_formMergeSlideCalibrations = {
    {
QT_MOC_LITERAL(0, 0, 26), // "formMergeSlideCalibrations"
QT_MOC_LITERAL(1, 27, 23), // "on_pbHorizontal_clicked"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21), // "on_pbVertical_clicked"
QT_MOC_LITERAL(4, 74, 29), // "on_pbMergeCalibration_clicked"
QT_MOC_LITERAL(5, 104, 24), // "funcSaveSlideCalibration"
QT_MOC_LITERAL(6, 129, 8), // "QString*"
QT_MOC_LITERAL(7, 138, 11), // "pathDestine"
QT_MOC_LITERAL(8, 150, 23), // "structSlideCalibration*"
QT_MOC_LITERAL(9, 174, 16), // "slideCalibration"
QT_MOC_LITERAL(10, 191, 19), // "structSlideStrSens*"
QT_MOC_LITERAL(11, 211, 12), // "slideStrSens"
QT_MOC_LITERAL(12, 224, 11), // "QTransform*"
QT_MOC_LITERAL(13, 236, 1), // "T"
QT_MOC_LITERAL(14, 238, 21), // "funcReadSensitivities"
QT_MOC_LITERAL(15, 260, 8), // "filePath"
QT_MOC_LITERAL(16, 269, 24), // "on_pbAffineTrans_clicked"
QT_MOC_LITERAL(17, 294, 26) // "on_pbSensitivities_clicked"

    },
    "formMergeSlideCalibrations\0"
    "on_pbHorizontal_clicked\0\0on_pbVertical_clicked\0"
    "on_pbMergeCalibration_clicked\0"
    "funcSaveSlideCalibration\0QString*\0"
    "pathDestine\0structSlideCalibration*\0"
    "slideCalibration\0structSlideStrSens*\0"
    "slideStrSens\0QTransform*\0T\0"
    "funcReadSensitivities\0filePath\0"
    "on_pbAffineTrans_clicked\0"
    "on_pbSensitivities_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formMergeSlideCalibrations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    4,   52,    2, 0x08 /* Private */,
      14,    2,   61,    2, 0x08 /* Private */,
      16,    0,   66,    2, 0x08 /* Private */,
      17,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10, 0x80000000 | 12,    7,    9,   11,   13,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 10,   15,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void formMergeSlideCalibrations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formMergeSlideCalibrations *_t = static_cast<formMergeSlideCalibrations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbHorizontal_clicked(); break;
        case 1: _t->on_pbVertical_clicked(); break;
        case 2: _t->on_pbMergeCalibration_clicked(); break;
        case 3: { int _r = _t->funcSaveSlideCalibration((*reinterpret_cast< QString*(*)>(_a[1])),(*reinterpret_cast< structSlideCalibration*(*)>(_a[2])),(*reinterpret_cast< structSlideStrSens*(*)>(_a[3])),(*reinterpret_cast< QTransform*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->funcReadSensitivities((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< structSlideStrSens*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_pbAffineTrans_clicked(); break;
        case 6: _t->on_pbSensitivities_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject formMergeSlideCalibrations::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formMergeSlideCalibrations.data,
      qt_meta_data_formMergeSlideCalibrations,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *formMergeSlideCalibrations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formMergeSlideCalibrations::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_formMergeSlideCalibrations.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int formMergeSlideCalibrations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
