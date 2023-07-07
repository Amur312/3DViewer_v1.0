#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include "widget.h"
#include "qgifimage.h"
#include <QThread>
#include <QTimer>
#include <QWidget>
#include <QFileDialog>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QStandardPaths>
#include <QMovie>
#include <QImageWriter>
//
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    QImage image;

private slots:
    void on_pushButton_clicked();

    void on_rotate_x_valueChanged(int value);

    void on_rotate_y_valueChanged(int value);

    void on_rotate_z_valueChanged(int value);

    void on_move_x_editingFinished();

    void on_move_y_editingFinished();

    void on_move_z_editingFinished();

    void on_scale_valueChanged(int value);

    void on_scale_sliderReleased();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_ribs_thick_valueChanged(int value);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_ribs_thick_2_valueChanged(int value);

    void on_ribs_thick_3_valueChanged(int value);

    void on_x_num2_editingFinished();

    void on_y_num2_editingFinished();

    void on_z_num2_editingFinished();

    void on_rib_color_valueChanged(int value);

    void on_dot_color_valueChanged(int value);

    void save_settings();
    void put_settings();

    void on_screen_pressed();
    void on_gif_button_clicked();
    void start_timer_gif();
    void timeUpdate();
    void record_gif();

private:
    void form_color(float* r, float* g, float* b, float value);
    Ui::MainWindow* ui;
    widget* myWidget;
    int numberFps;
    int frameCount;
    QString file_name;
      QTimer* timerGIF;  // идентификатор таймера
      int frame;
      QGifImage* gif;
      QFile* ptr_save_file;

    QTimer *gifTmr;
    QGifImage *gifImg;
    QString gifFileName;

};
#endif  // MAINWINDOW_H
