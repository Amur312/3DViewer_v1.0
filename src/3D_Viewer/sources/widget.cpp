#include "./headers/widget.h"

widget::widget() {
    setWindowTitle("3D_Viewer"); // Установка заголовка окна виджета на "3D_Viewer"
}

widget::~widget() {
    if (model) free_result_struct(model); // Освобождение ресурсов модели, если она существует
}

void widget::paintGL() {
    // Цвет фона
    glClearColor(back_red, back_green, back_blue, 1); // Установка цвета фона

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Очистка буферов цвета и глубины

    if (model) {
        glMatrixMode(GL_PROJECTION); // Установка матрицы проекции
        glLoadIdentity();

        // Тип модели
        if (!progection_mode)
            glOrtho(-1.5, 1.5, -1.5, 1.5, -2, 1000); // Установка ортогональной проекции
        else {
            glFrustum(-1.5, 1.5, -1.5, 1.5, 0.8, 1000); // Установка перспективной проекции
            glTranslatef(0, 0, -2); // Смещение модели вглубь экрана
        }

        // Отрисовка модели
        glEnableClientState(GL_VERTEX_ARRAY); // Включение клиентского состояния массива вершин
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); // Установка режима отрисовки граней (линии)

        if (rib_type) {
            glEnable(GL_LINE_STIPPLE); // Включение штриховки линий
            glLineStipple(1, 0x00F0); // Установка шаблона штриховки
        } else {
            glDisable(GL_LINE_STIPPLE); // Отключение штриховки линий
        }

        glLineWidth(rib_width); // Установка толщины линий
        glColor3d(rib_red, rib_green, rib_blue); // Установка цвета граней

        glVertexPointer(3, GL_DOUBLE, 0, model->pointsCoordinates); // Установка указателя на массив вершин
        glDrawElements(GL_LINES, model->numConnections, GL_UNSIGNED_INT, model->connectionIndices); // Отрисовка модели

        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); // Установка режима отрисовки граней (заполнение)

        if (dot_type) {
            if (dot_type == 1)
                glEnable(GL_POINT_SMOOTH); // Включение сглаживания точек
            else
                glDisable(GL_POINT_SMOOTH); // Отключение сглаживания точек

            glPointSize(dot_width); // Установка размера точек
            glColor3d(dot_red, dot_green, dot_blue); // Установка цвета точек

            glDrawArrays(GL_POINTS, 0, model->numPoints / 3); // Отрисовка точек модели
        }

        glDisable(GL_LINE_STIPPLE); // Отключение штриховки линий
        glDisable(GL_POINT_SMOOTH); // Отключение сглаживания точек
        glDisableClientState(GL_VERTEX_ARRAY); // Отключение клиентского состояния массива вершин
    }
}

void widget::initializeGL() {
    model = NULL;
    progection_mode = 0;
    dot_type = 0;
    rib_type = 0;
    rib_width = 1;
    dot_width = 1;
    back_red = 0.;
    back_green = 0.;
    back_blue = 0.;
    rib_red = 255.;
    rib_green = 255.;
    rib_blue = 255.;
    dot_red = 255.;
    dot_green = 0.;
    dot_blue = 0.;

    glEnable(GL_DEPTH_TEST); // Включение режима тестирования глубины
}
