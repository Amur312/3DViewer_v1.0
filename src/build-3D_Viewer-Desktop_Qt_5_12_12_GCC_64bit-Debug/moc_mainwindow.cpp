/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3D_Viewer/headers/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_rotate_x_valueChanged",
    "value",
    "on_rotate_y_valueChanged",
    "on_rotate_z_valueChanged",
    "on_move_x_editingFinished",
    "on_move_y_editingFinished",
    "on_move_z_editingFinished",
    "on_scale_valueChanged",
    "on_scale_sliderReleased",
    "on_comboBox_currentIndexChanged",
    "index",
    "on_comboBox_2_currentIndexChanged",
    "on_ribs_thick_valueChanged",
    "on_comboBox_3_currentIndexChanged",
    "on_ribs_thick_2_valueChanged",
    "on_ribs_thick_3_valueChanged",
    "on_x_num2_editingFinished",
    "on_y_num2_editingFinished",
    "on_z_num2_editingFinished",
    "on_rib_color_valueChanged",
    "on_dot_color_valueChanged",
    "save_settings",
    "put_settings",
    "on_screen_pressed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[6];
    char stringdata5[25];
    char stringdata6[25];
    char stringdata7[26];
    char stringdata8[26];
    char stringdata9[26];
    char stringdata10[22];
    char stringdata11[24];
    char stringdata12[32];
    char stringdata13[6];
    char stringdata14[34];
    char stringdata15[27];
    char stringdata16[34];
    char stringdata17[29];
    char stringdata18[29];
    char stringdata19[26];
    char stringdata20[26];
    char stringdata21[26];
    char stringdata22[26];
    char stringdata23[26];
    char stringdata24[14];
    char stringdata25[13];
    char stringdata26[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 24),  // "on_rotate_x_valueChanged"
        QT_MOC_LITERAL(59, 5),  // "value"
        QT_MOC_LITERAL(65, 24),  // "on_rotate_y_valueChanged"
        QT_MOC_LITERAL(90, 24),  // "on_rotate_z_valueChanged"
        QT_MOC_LITERAL(115, 25),  // "on_move_x_editingFinished"
        QT_MOC_LITERAL(141, 25),  // "on_move_y_editingFinished"
        QT_MOC_LITERAL(167, 25),  // "on_move_z_editingFinished"
        QT_MOC_LITERAL(193, 21),  // "on_scale_valueChanged"
        QT_MOC_LITERAL(215, 23),  // "on_scale_sliderReleased"
        QT_MOC_LITERAL(239, 31),  // "on_comboBox_currentIndexChanged"
        QT_MOC_LITERAL(271, 5),  // "index"
        QT_MOC_LITERAL(277, 33),  // "on_comboBox_2_currentIndexCha..."
        QT_MOC_LITERAL(311, 26),  // "on_ribs_thick_valueChanged"
        QT_MOC_LITERAL(338, 33),  // "on_comboBox_3_currentIndexCha..."
        QT_MOC_LITERAL(372, 28),  // "on_ribs_thick_2_valueChanged"
        QT_MOC_LITERAL(401, 28),  // "on_ribs_thick_3_valueChanged"
        QT_MOC_LITERAL(430, 25),  // "on_x_num2_editingFinished"
        QT_MOC_LITERAL(456, 25),  // "on_y_num2_editingFinished"
        QT_MOC_LITERAL(482, 25),  // "on_z_num2_editingFinished"
        QT_MOC_LITERAL(508, 25),  // "on_rib_color_valueChanged"
        QT_MOC_LITERAL(534, 25),  // "on_dot_color_valueChanged"
        QT_MOC_LITERAL(560, 13),  // "save_settings"
        QT_MOC_LITERAL(574, 12),  // "put_settings"
        QT_MOC_LITERAL(587, 17)   // "on_screen_pressed"
    },
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_rotate_x_valueChanged",
    "value",
    "on_rotate_y_valueChanged",
    "on_rotate_z_valueChanged",
    "on_move_x_editingFinished",
    "on_move_y_editingFinished",
    "on_move_z_editingFinished",
    "on_scale_valueChanged",
    "on_scale_sliderReleased",
    "on_comboBox_currentIndexChanged",
    "index",
    "on_comboBox_2_currentIndexChanged",
    "on_ribs_thick_valueChanged",
    "on_comboBox_3_currentIndexChanged",
    "on_ribs_thick_2_valueChanged",
    "on_ribs_thick_3_valueChanged",
    "on_x_num2_editingFinished",
    "on_y_num2_editingFinished",
    "on_z_num2_editingFinished",
    "on_rib_color_valueChanged",
    "on_dot_color_valueChanged",
    "save_settings",
    "put_settings",
    "on_screen_pressed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    1,  153,    2, 0x08,    2 /* Private */,
       5,    1,  156,    2, 0x08,    4 /* Private */,
       6,    1,  159,    2, 0x08,    6 /* Private */,
       7,    0,  162,    2, 0x08,    8 /* Private */,
       8,    0,  163,    2, 0x08,    9 /* Private */,
       9,    0,  164,    2, 0x08,   10 /* Private */,
      10,    1,  165,    2, 0x08,   11 /* Private */,
      11,    0,  168,    2, 0x08,   13 /* Private */,
      12,    1,  169,    2, 0x08,   14 /* Private */,
      14,    1,  172,    2, 0x08,   16 /* Private */,
      15,    1,  175,    2, 0x08,   18 /* Private */,
      16,    1,  178,    2, 0x08,   20 /* Private */,
      17,    1,  181,    2, 0x08,   22 /* Private */,
      18,    1,  184,    2, 0x08,   24 /* Private */,
      19,    0,  187,    2, 0x08,   26 /* Private */,
      20,    0,  188,    2, 0x08,   27 /* Private */,
      21,    0,  189,    2, 0x08,   28 /* Private */,
      22,    1,  190,    2, 0x08,   29 /* Private */,
      23,    1,  193,    2, 0x08,   31 /* Private */,
      24,    0,  196,    2, 0x08,   33 /* Private */,
      25,    0,  197,    2, 0x08,   34 /* Private */,
      26,    0,  198,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotate_x_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_rotate_y_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_rotate_z_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_move_x_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_move_y_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_move_z_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scale_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_scale_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_2_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ribs_thick_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_3_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ribs_thick_2_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ribs_thick_3_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_x_num2_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_y_num2_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_z_num2_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rib_color_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_dot_color_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'save_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'put_settings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_screen_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_rotate_x_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_rotate_y_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_rotate_z_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_move_x_editingFinished(); break;
        case 5: _t->on_move_y_editingFinished(); break;
        case 6: _t->on_move_z_editingFinished(); break;
        case 7: _t->on_scale_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_scale_sliderReleased(); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_ribs_thick_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_ribs_thick_2_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_ribs_thick_3_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_x_num2_editingFinished(); break;
        case 16: _t->on_y_num2_editingFinished(); break;
        case 17: _t->on_z_num2_editingFinished(); break;
        case 18: _t->on_rib_color_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_dot_color_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->save_settings(); break;
        case 21: _t->put_settings(); break;
        case 22: _t->on_screen_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
