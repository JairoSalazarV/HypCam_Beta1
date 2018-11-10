/****************************************************************************
** Meta object code from reading C++ file 'chosewavetoextract.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtHypCam/chosewavetoextract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chosewavetoextract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_choseWaveToExtract_t {
    QByteArrayData data[17];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_choseWaveToExtract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_choseWaveToExtract_t qt_meta_stringdata_choseWaveToExtract = {
    {
QT_MOC_LITERAL(0, 0, 18), // "choseWaveToExtract"
QT_MOC_LITERAL(1, 19, 9), // "addByStep"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "on_pbAdd_clicked"
QT_MOC_LITERAL(4, 47, 14), // "switchSelected"
QT_MOC_LITERAL(5, 62, 13), // "QTableWidget*"
QT_MOC_LITERAL(6, 76, 9), // "tableOrig"
QT_MOC_LITERAL(7, 86, 9), // "tableDest"
QT_MOC_LITERAL(8, 96, 17), // "fromTablesToFiles"
QT_MOC_LITERAL(9, 114, 22), // "on_pbRemoveAll_clicked"
QT_MOC_LITERAL(10, 137, 19), // "on_pbAddAll_clicked"
QT_MOC_LITERAL(11, 157, 19), // "on_pbRemove_clicked"
QT_MOC_LITERAL(12, 177, 29), // "on_tableOptions_doubleClicked"
QT_MOC_LITERAL(13, 207, 5), // "index"
QT_MOC_LITERAL(14, 213, 29), // "on_tableChoises_doubleClicked"
QT_MOC_LITERAL(15, 243, 15), // "iniOptsAndChois"
QT_MOC_LITERAL(16, 259, 10) // "allOptions"

    },
    "choseWaveToExtract\0addByStep\0\0"
    "on_pbAdd_clicked\0switchSelected\0"
    "QTableWidget*\0tableOrig\0tableDest\0"
    "fromTablesToFiles\0on_pbRemoveAll_clicked\0"
    "on_pbAddAll_clicked\0on_pbRemove_clicked\0"
    "on_tableOptions_doubleClicked\0index\0"
    "on_tableChoises_doubleClicked\0"
    "iniOptsAndChois\0allOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_choseWaveToExtract[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    2,   66,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      14,    1,   78,    2, 0x08 /* Private */,
      15,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void choseWaveToExtract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        choseWaveToExtract *_t = static_cast<choseWaveToExtract *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addByStep(); break;
        case 1: _t->on_pbAdd_clicked(); break;
        case 2: _t->switchSelected((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidget*(*)>(_a[2]))); break;
        case 3: _t->fromTablesToFiles(); break;
        case 4: _t->on_pbRemoveAll_clicked(); break;
        case 5: _t->on_pbAddAll_clicked(); break;
        case 6: _t->on_pbRemove_clicked(); break;
        case 7: _t->on_tableOptions_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_tableChoises_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->iniOptsAndChois((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject choseWaveToExtract::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_choseWaveToExtract.data,
      qt_meta_data_choseWaveToExtract,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *choseWaveToExtract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *choseWaveToExtract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_choseWaveToExtract.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int choseWaveToExtract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
