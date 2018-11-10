/****************************************************************************
** Meta object code from reading C++ file 'formslidelinearregression.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtHypCam/formslidelinearregression.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formslidelinearregression.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_formSlideLinearRegression_t {
    QByteArrayData data[24];
    char stringdata0[458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formSlideLinearRegression_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formSlideLinearRegression_t qt_meta_stringdata_formSlideLinearRegression = {
    {
QT_MOC_LITERAL(0, 0, 25), // "formSlideLinearRegression"
QT_MOC_LITERAL(1, 26, 23), // "on_pbSelectFile_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 26), // "on_pbGenRegression_clicked"
QT_MOC_LITERAL(4, 78, 23), // "on_pbRemoveItem_clicked"
QT_MOC_LITERAL(5, 102, 17), // "funcAddRowToTable"
QT_MOC_LITERAL(6, 120, 8), // "QString*"
QT_MOC_LITERAL(7, 129, 8), // "filePath"
QT_MOC_LITERAL(8, 138, 31), // "funcSaveVerticalCalibrationFile"
QT_MOC_LITERAL(9, 170, 11), // "structLine*"
QT_MOC_LITERAL(10, 182, 12), // "lowerVerLine"
QT_MOC_LITERAL(11, 195, 16), // "linearRegresion*"
QT_MOC_LITERAL(12, 212, 11), // "dist2WaveLR"
QT_MOC_LITERAL(13, 224, 11), // "wave2DistLR"
QT_MOC_LITERAL(14, 236, 6), // "vertLR"
QT_MOC_LITERAL(15, 243, 34), // "structVerticalCalibrationSett..."
QT_MOC_LITERAL(16, 278, 17), // "vertCalibSettings"
QT_MOC_LITERAL(17, 296, 29), // "on_pbGenHorRegression_clicked"
QT_MOC_LITERAL(18, 326, 15), // "funcTableToList"
QT_MOC_LITERAL(19, 342, 18), // "QList<structLine>*"
QT_MOC_LITERAL(20, 361, 8), // "lstLines"
QT_MOC_LITERAL(21, 370, 33), // "funcUpdateVerticalCalibration..."
QT_MOC_LITERAL(22, 404, 26), // "structVerticalCalibration*"
QT_MOC_LITERAL(23, 431, 26) // "on_pbGenAffinTrans_clicked"

    },
    "formSlideLinearRegression\0"
    "on_pbSelectFile_clicked\0\0"
    "on_pbGenRegression_clicked\0"
    "on_pbRemoveItem_clicked\0funcAddRowToTable\0"
    "QString*\0filePath\0funcSaveVerticalCalibrationFile\0"
    "structLine*\0lowerVerLine\0linearRegresion*\0"
    "dist2WaveLR\0wave2DistLR\0vertLR\0"
    "structVerticalCalibrationSettings*\0"
    "vertCalibSettings\0on_pbGenHorRegression_clicked\0"
    "funcTableToList\0QList<structLine>*\0"
    "lstLines\0funcUpdateVerticalCalibrationFile\0"
    "structVerticalCalibration*\0"
    "on_pbGenAffinTrans_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formSlideLinearRegression[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       8,    5,   65,    2, 0x08 /* Private */,
      17,    0,   76,    2, 0x08 /* Private */,
      18,    1,   77,    2, 0x08 /* Private */,
      21,    1,   80,    2, 0x08 /* Private */,
      23,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6,    7,
    QMetaType::Int, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 15,   10,   12,   13,   14,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Int, 0x80000000 | 22,   16,
    QMetaType::Void,

       0        // eod
};

void formSlideLinearRegression::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formSlideLinearRegression *_t = static_cast<formSlideLinearRegression *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbSelectFile_clicked(); break;
        case 1: _t->on_pbGenRegression_clicked(); break;
        case 2: _t->on_pbRemoveItem_clicked(); break;
        case 3: { bool _r = _t->funcAddRowToTable((*reinterpret_cast< QString*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->funcSaveVerticalCalibrationFile((*reinterpret_cast< structLine*(*)>(_a[1])),(*reinterpret_cast< linearRegresion*(*)>(_a[2])),(*reinterpret_cast< linearRegresion*(*)>(_a[3])),(*reinterpret_cast< linearRegresion*(*)>(_a[4])),(*reinterpret_cast< structVerticalCalibrationSettings*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_pbGenHorRegression_clicked(); break;
        case 6: _t->funcTableToList((*reinterpret_cast< QList<structLine>*(*)>(_a[1]))); break;
        case 7: { int _r = _t->funcUpdateVerticalCalibrationFile((*reinterpret_cast< structVerticalCalibration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_pbGenAffinTrans_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject formSlideLinearRegression::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formSlideLinearRegression.data,
      qt_meta_data_formSlideLinearRegression,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *formSlideLinearRegression::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formSlideLinearRegression::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_formSlideLinearRegression.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int formSlideLinearRegression::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
