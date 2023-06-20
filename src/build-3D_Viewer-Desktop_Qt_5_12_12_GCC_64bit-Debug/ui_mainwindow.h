/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_widget;
    QPushButton *pushButton;
    QLineEdit *filename;
    QSlider *rotate_x;
    QSlider *rotate_y;
    QSlider *rotate_z;
    QDoubleSpinBox *move_x;
    QDoubleSpinBox *move_y;
    QDoubleSpinBox *move_z;
    QSlider *scale;
    QLineEdit *scale_num;
    QComboBox *comboBox;
    QLineEdit *rotare;
    QLineEdit *rotare_2;
    QLineEdit *rotare_3;
    QLineEdit *rotare_4;
    QLineEdit *rotare_5;
    QLineEdit *rotare_6;
    QComboBox *comboBox_2;
    QLineEdit *rotare_7;
    QSlider *ribs_thick;
    QLineEdit *rotare_9;
    QLineEdit *rotare_10;
    QComboBox *comboBox_3;
    QLineEdit *rotare_11;
    QSlider *ribs_thick_2;
    QLineEdit *rotare_12;
    QLineEdit *rotare_13;
    QSlider *ribs_thick_3;
    QDoubleSpinBox *x_num2;
    QDoubleSpinBox *y_num2;
    QDoubleSpinBox *z_num2;
    QLineEdit *rotare_14;
    QSlider *rib_color;
    QSlider *dot_color;
    QLineEdit *rotare_15;
    QLineEdit *rotare_8;
    QLineEdit *rotare_16;
    QLineEdit *ribs;
    QLineEdit *dots;
    QPushButton *screen;
    QLineEdit *rotare_17;
    QLineEdit *rotare_18;
    QLineEdit *rotare_19;
    QLineEdit *rotare_20;
    QLineEdit *rotare_21;
    QLineEdit *rotare_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1162, 935);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 200);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(320, 80, 831, 801));
        gridLayout_widget = new QGridLayout(layoutWidget);
        gridLayout_widget->setObjectName("gridLayout_widget");
        gridLayout_widget->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 10, 141, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"        border-radius: 2px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"    background-color: rgba(91, 87, 217, 100);\n"
"}"));
        filename = new QLineEdit(centralwidget);
        filename->setObjectName("filename");
        filename->setGeometry(QRect(370, 20, 581, 31));
        filename->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        filename->setAlignment(Qt::AlignCenter);
        filename->setReadOnly(true);
        rotate_x = new QSlider(centralwidget);
        rotate_x->setObjectName("rotate_x");
        rotate_x->setGeometry(QRect(50, 130, 161, 25));
        rotate_x->setMaximum(360);
        rotate_x->setValue(0);
        rotate_x->setOrientation(Qt::Horizontal);
        rotate_y = new QSlider(centralwidget);
        rotate_y->setObjectName("rotate_y");
        rotate_y->setGeometry(QRect(50, 170, 160, 25));
        rotate_y->setMaximum(360);
        rotate_y->setOrientation(Qt::Horizontal);
        rotate_z = new QSlider(centralwidget);
        rotate_z->setObjectName("rotate_z");
        rotate_z->setGeometry(QRect(50, 210, 160, 25));
        rotate_z->setMaximum(360);
        rotate_z->setValue(0);
        rotate_z->setTracking(true);
        rotate_z->setOrientation(Qt::Horizontal);
        rotate_z->setInvertedControls(false);
        rotate_z->setTickPosition(QSlider::NoTicks);
        move_x = new QDoubleSpinBox(centralwidget);
        move_x->setObjectName("move_x");
        move_x->setGeometry(QRect(220, 270, 62, 22));
        move_x->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        move_x->setAlignment(Qt::AlignCenter);
        move_x->setMinimum(-1000.000000000000000);
        move_x->setMaximum(1000.000000000000000);
        move_y = new QDoubleSpinBox(centralwidget);
        move_y->setObjectName("move_y");
        move_y->setGeometry(QRect(220, 300, 62, 22));
        move_y->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        move_y->setAlignment(Qt::AlignCenter);
        move_y->setMinimum(-1000.000000000000000);
        move_y->setMaximum(1000.000000000000000);
        move_z = new QDoubleSpinBox(centralwidget);
        move_z->setObjectName("move_z");
        move_z->setGeometry(QRect(220, 330, 62, 22));
        move_z->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        move_z->setAlignment(Qt::AlignCenter);
        move_z->setMinimum(-1000.000000000000000);
        move_z->setMaximum(1000.000000000000000);
        scale = new QSlider(centralwidget);
        scale->setObjectName("scale");
        scale->setGeometry(QRect(50, 390, 160, 25));
        scale->setAcceptDrops(false);
        scale->setMinimum(-9);
        scale->setMaximum(9);
        scale->setValue(0);
        scale->setTracking(true);
        scale->setOrientation(Qt::Horizontal);
        scale->setInvertedControls(false);
        scale->setTickPosition(QSlider::NoTicks);
        scale_num = new QLineEdit(centralwidget);
        scale_num->setObjectName("scale_num");
        scale_num->setGeometry(QRect(230, 390, 51, 21));
        scale_num->setAlignment(Qt::AlignCenter);
        scale_num->setReadOnly(true);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(140, 480, 141, 32));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"}\n"
"\n"
" QComboBox:pressed {\n"
"    background-color: rgba(91, 87, 217, 100);\n"
"}"));
        rotare = new QLineEdit(centralwidget);
        rotare->setObjectName("rotare");
        rotare->setGeometry(QRect(80, 100, 141, 21));
        rotare->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare->setAlignment(Qt::AlignCenter);
        rotare->setReadOnly(true);
        rotare_2 = new QLineEdit(centralwidget);
        rotare_2->setObjectName("rotare_2");
        rotare_2->setGeometry(QRect(80, 240, 141, 21));
        rotare_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare_2->setAlignment(Qt::AlignCenter);
        rotare_2->setReadOnly(true);
        rotare_3 = new QLineEdit(centralwidget);
        rotare_3->setObjectName("rotare_3");
        rotare_3->setGeometry(QRect(80, 360, 141, 21));
        rotare_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare_3->setAlignment(Qt::AlignCenter);
        rotare_3->setReadOnly(true);
        rotare_4 = new QLineEdit(centralwidget);
        rotare_4->setObjectName("rotare_4");
        rotare_4->setGeometry(QRect(20, 480, 111, 21));
        rotare_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_4->setReadOnly(true);
        rotare_5 = new QLineEdit(centralwidget);
        rotare_5->setObjectName("rotare_5");
        rotare_5->setGeometry(QRect(80, 520, 141, 21));
        rotare_5->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare_5->setReadOnly(true);
        rotare_6 = new QLineEdit(centralwidget);
        rotare_6->setObjectName("rotare_6");
        rotare_6->setGeometry(QRect(20, 550, 91, 21));
        rotare_6->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_6->setAlignment(Qt::AlignCenter);
        rotare_6->setReadOnly(true);
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(140, 550, 141, 32));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"}\n"
"\n"
" QComboBox:pressed {\n"
"    background-color: rgba(91, 87, 217, 100);\n"
"}"));
        rotare_7 = new QLineEdit(centralwidget);
        rotare_7->setObjectName("rotare_7");
        rotare_7->setGeometry(QRect(20, 590, 91, 21));
        rotare_7->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_7->setAlignment(Qt::AlignCenter);
        rotare_7->setReadOnly(true);
        ribs_thick = new QSlider(centralwidget);
        ribs_thick->setObjectName("ribs_thick");
        ribs_thick->setGeometry(QRect(120, 590, 160, 25));
        ribs_thick->setAcceptDrops(false);
        ribs_thick->setMinimum(1);
        ribs_thick->setMaximum(10);
        ribs_thick->setValue(1);
        ribs_thick->setTracking(true);
        ribs_thick->setOrientation(Qt::Horizontal);
        ribs_thick->setInvertedControls(false);
        ribs_thick->setTickPosition(QSlider::NoTicks);
        rotare_9 = new QLineEdit(centralwidget);
        rotare_9->setObjectName("rotare_9");
        rotare_9->setGeometry(QRect(80, 670, 141, 21));
        rotare_9->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare_9->setAlignment(Qt::AlignCenter);
        rotare_9->setReadOnly(true);
        rotare_10 = new QLineEdit(centralwidget);
        rotare_10->setObjectName("rotare_10");
        rotare_10->setGeometry(QRect(20, 700, 171, 21));
        rotare_10->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_10->setReadOnly(true);
        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(200, 700, 101, 32));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"}\n"
"\n"
" QComboBox:pressed {\n"
"    background-color: rgba(91, 87, 217, 100);\n"
"}"));
        rotare_11 = new QLineEdit(centralwidget);
        rotare_11->setObjectName("rotare_11");
        rotare_11->setGeometry(QRect(80, 435, 141, 21));
        rotare_11->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(91, 87, 217);"));
        rotare_11->setReadOnly(true);
        ribs_thick_2 = new QSlider(centralwidget);
        ribs_thick_2->setObjectName("ribs_thick_2");
        ribs_thick_2->setGeometry(QRect(140, 730, 160, 25));
        ribs_thick_2->setAcceptDrops(false);
        ribs_thick_2->setMinimum(1);
        ribs_thick_2->setMaximum(10);
        ribs_thick_2->setValue(1);
        ribs_thick_2->setTracking(true);
        ribs_thick_2->setOrientation(Qt::Horizontal);
        ribs_thick_2->setInvertedControls(false);
        ribs_thick_2->setTickPosition(QSlider::NoTicks);
        rotare_12 = new QLineEdit(centralwidget);
        rotare_12->setObjectName("rotare_12");
        rotare_12->setGeometry(QRect(20, 730, 91, 21));
        rotare_12->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_12->setReadOnly(true);
        rotare_13 = new QLineEdit(centralwidget);
        rotare_13->setObjectName("rotare_13");
        rotare_13->setGeometry(QRect(20, 790, 91, 21));
        rotare_13->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_13->setReadOnly(true);
        ribs_thick_3 = new QSlider(centralwidget);
        ribs_thick_3->setObjectName("ribs_thick_3");
        ribs_thick_3->setGeometry(QRect(140, 790, 160, 25));
        ribs_thick_3->setAcceptDrops(false);
        ribs_thick_3->setMinimum(0);
        ribs_thick_3->setMaximum(7);
        ribs_thick_3->setValue(0);
        ribs_thick_3->setTracking(true);
        ribs_thick_3->setOrientation(Qt::Horizontal);
        ribs_thick_3->setInvertedControls(false);
        ribs_thick_3->setTickPosition(QSlider::NoTicks);
        x_num2 = new QDoubleSpinBox(centralwidget);
        x_num2->setObjectName("x_num2");
        x_num2->setGeometry(QRect(220, 130, 62, 22));
        x_num2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        x_num2->setAlignment(Qt::AlignCenter);
        x_num2->setDecimals(0);
        x_num2->setMinimum(0.000000000000000);
        x_num2->setMaximum(360.000000000000000);
        y_num2 = new QDoubleSpinBox(centralwidget);
        y_num2->setObjectName("y_num2");
        y_num2->setGeometry(QRect(220, 170, 62, 22));
        y_num2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        y_num2->setAlignment(Qt::AlignCenter);
        y_num2->setDecimals(0);
        y_num2->setMinimum(0.000000000000000);
        y_num2->setMaximum(360.000000000000000);
        z_num2 = new QDoubleSpinBox(centralwidget);
        z_num2->setObjectName("z_num2");
        z_num2->setGeometry(QRect(220, 210, 62, 22));
        z_num2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        z_num2->setAlignment(Qt::AlignCenter);
        z_num2->setDecimals(0);
        z_num2->setMinimum(0.000000000000000);
        z_num2->setMaximum(360.000000000000000);
        rotare_14 = new QLineEdit(centralwidget);
        rotare_14->setObjectName("rotare_14");
        rotare_14->setGeometry(QRect(20, 630, 91, 21));
        rotare_14->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_14->setAlignment(Qt::AlignCenter);
        rotare_14->setReadOnly(true);
        rib_color = new QSlider(centralwidget);
        rib_color->setObjectName("rib_color");
        rib_color->setGeometry(QRect(120, 630, 160, 25));
        rib_color->setAcceptDrops(false);
        rib_color->setMinimum(0);
        rib_color->setMaximum(7);
        rib_color->setValue(0);
        rib_color->setTracking(true);
        rib_color->setOrientation(Qt::Horizontal);
        rib_color->setInvertedControls(false);
        rib_color->setTickPosition(QSlider::NoTicks);
        dot_color = new QSlider(centralwidget);
        dot_color->setObjectName("dot_color");
        dot_color->setGeometry(QRect(140, 760, 160, 25));
        dot_color->setAcceptDrops(false);
        dot_color->setMinimum(0);
        dot_color->setMaximum(7);
        dot_color->setValue(0);
        dot_color->setTracking(true);
        dot_color->setOrientation(Qt::Horizontal);
        dot_color->setInvertedControls(false);
        dot_color->setTickPosition(QSlider::NoTicks);
        rotare_15 = new QLineEdit(centralwidget);
        rotare_15->setObjectName("rotare_15");
        rotare_15->setGeometry(QRect(20, 760, 91, 21));
        rotare_15->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_15->setReadOnly(true);
        rotare_8 = new QLineEdit(centralwidget);
        rotare_8->setObjectName("rotare_8");
        rotare_8->setGeometry(QRect(990, 10, 51, 21));
        rotare_8->setStyleSheet(QString::fromUtf8("        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"\n"
"\n"
""));
        rotare_8->setAlignment(Qt::AlignCenter);
        rotare_8->setReadOnly(true);
        rotare_16 = new QLineEdit(centralwidget);
        rotare_16->setObjectName("rotare_16");
        rotare_16->setGeometry(QRect(990, 40, 51, 21));
        rotare_16->setStyleSheet(QString::fromUtf8("        color: white;\n"
"    	   background-color: rgb(91, 87, 217);"));
        rotare_16->setAlignment(Qt::AlignCenter);
        rotare_16->setReadOnly(true);
        ribs = new QLineEdit(centralwidget);
        ribs->setObjectName("ribs");
        ribs->setGeometry(QRect(1070, 40, 81, 21));
        ribs->setStyleSheet(QString::fromUtf8("        color: white;\n"
"    	   background-color: rgb(91, 87, 217);"));
        ribs->setAlignment(Qt::AlignCenter);
        ribs->setReadOnly(true);
        dots = new QLineEdit(centralwidget);
        dots->setObjectName("dots");
        dots->setGeometry(QRect(1070, 10, 81, 21));
        dots->setStyleSheet(QString::fromUtf8("        color: white;\n"
"    	   background-color: rgb(91, 87, 217);"));
        dots->setAlignment(Qt::AlignCenter);
        dots->setReadOnly(true);
        screen = new QPushButton(centralwidget);
        screen->setObjectName("screen");
        screen->setGeometry(QRect(20, 830, 91, 51));
        screen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        color: white;\n"
"    	   background-color: rgb(91, 87, 217);\n"
"        border-radius: 2px;\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"    background-color: rgba(91, 87, 217, 100);\n"
"}"));
        rotare_17 = new QLineEdit(centralwidget);
        rotare_17->setObjectName("rotare_17");
        rotare_17->setGeometry(QRect(20, 130, 16, 21));
        rotare_17->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_17->setAlignment(Qt::AlignCenter);
        rotare_17->setReadOnly(true);
        rotare_18 = new QLineEdit(centralwidget);
        rotare_18->setObjectName("rotare_18");
        rotare_18->setGeometry(QRect(20, 170, 16, 21));
        rotare_18->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_18->setAlignment(Qt::AlignCenter);
        rotare_18->setDragEnabled(false);
        rotare_18->setReadOnly(true);
        rotare_19 = new QLineEdit(centralwidget);
        rotare_19->setObjectName("rotare_19");
        rotare_19->setGeometry(QRect(20, 210, 16, 21));
        rotare_19->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_19->setAlignment(Qt::AlignCenter);
        rotare_19->setReadOnly(true);
        rotare_20 = new QLineEdit(centralwidget);
        rotare_20->setObjectName("rotare_20");
        rotare_20->setGeometry(QRect(20, 270, 131, 21));
        rotare_20->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_20->setAlignment(Qt::AlignCenter);
        rotare_20->setReadOnly(true);
        rotare_21 = new QLineEdit(centralwidget);
        rotare_21->setObjectName("rotare_21");
        rotare_21->setGeometry(QRect(20, 300, 131, 21));
        rotare_21->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_21->setAlignment(Qt::AlignCenter);
        rotare_21->setReadOnly(true);
        rotare_22 = new QLineEdit(centralwidget);
        rotare_22->setObjectName("rotare_22");
        rotare_22->setGeometry(QRect(20, 330, 131, 21));
        rotare_22->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(70, 70, 217);"));
        rotare_22->setAlignment(Qt::AlignCenter);
        rotare_22->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1162, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        scale_num->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));

        rotare->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        rotare_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        rotare_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        rotare_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        rotare_5->setText(QCoreApplication::translate("MainWindow", "             \320\240\320\265\320\261\321\200\320\260", nullptr));
        rotare_6->setText(QCoreApplication::translate("MainWindow", "\321\202\320\270\320\277", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\321\201\320\277\320\273\320\276\321\210\320\275\321\213\320\265", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\321\213\320\265", nullptr));

        rotare_7->setText(QCoreApplication::translate("MainWindow", "\321\202\320\276\320\273\321\211\320\270\320\275\320\260", nullptr));
        rotare_9->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        rotare_10->setText(QCoreApplication::translate("MainWindow", "\321\201\320\277\320\276\321\201\320\276\320\261 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "\320\275\320\265\321\202", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\321\200\321\203\320\263", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));

        rotare_11->setText(QCoreApplication::translate("MainWindow", "        \320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        rotare_12->setText(QCoreApplication::translate("MainWindow", "   \321\202\320\276\320\273\321\211\320\270\320\275\320\260", nullptr));
        rotare_13->setText(QCoreApplication::translate("MainWindow", "  \321\206\320\262\320\265\321\202 \321\204\320\276\320\275\320\260", nullptr));
        rotare_14->setText(QCoreApplication::translate("MainWindow", "\321\206\320\262\320\265\321\202 \321\200\320\265\320\261\320\265\321\200", nullptr));
        rotare_15->setText(QCoreApplication::translate("MainWindow", " \321\206\320\262\320\265\321\202 \321\202\320\276\321\207\320\265\320\272", nullptr));
        rotare_8->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\265\320\272", nullptr));
        rotare_16->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\261\320\265\321\200", nullptr));
        ribs->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dots->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        screen->setText(QCoreApplication::translate("MainWindow", "\321\201\320\272\321\200\320\270\320\275\321\210\320\276\321\202", nullptr));
        rotare_17->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        rotare_18->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        rotare_19->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        rotare_20->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 X", nullptr));
        rotare_21->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 Y", nullptr));
        rotare_22->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
