#include "transformations.h"
#include <math.h>
#include "parser.h"

// Вспомогательная функция для умножения вершины на матрицу
static Vertex multiply_vertex_by_matrix(const Vertex *vertex, const Matrix *matrix) {
    Vertex result = {
        .x = matrix->m[0][0] * vertex->x + matrix->m[0][1] * vertex->y + matrix->m[0][2] * vertex->z + matrix->m[0][3],
        .y = matrix->m[1][0] * vertex->x + matrix->m[1][1] * vertex->y + matrix->m[1][2] * vertex->z + matrix->m[1][3],
        .z = matrix->m[2][0] * vertex->x + matrix->m[2][1] * vertex->y + matrix->m[2][2] * vertex->z + matrix->m[2][3]
    };
    return result;
}

void apply_transformation(Model *model, const Matrix *matrix) {
    for (int i = 0; i < model->num_vertices; i++) {
        model->vertices[i] = multiply_vertex_by_matrix(&model->vertices[i], matrix);
    }
}

Matrix make_translation_matrix(float tx, float ty, float tz) {
    Matrix matrix = {
        .m = {{1, 0, 0, tx},
              {0, 1, 0, ty},
              {0, 0, 1, tz},
              {0, 0, 0, 1}}
    };
    return matrix;
}

Matrix make_scale_matrix(float sx, float sy, float sz) {
    Matrix matrix = {
        .m = {{sx, 0, 0, 0},
              {0, sy, 0, 0},
              {0, 0, sz, 0},
              {0, 0, 0, 1}}
    };
    return matrix;
}

Matrix make_rotation_matrix(float rx, float ry, float rz) {
    // Перевод углов из градусов в радианы
    float rad_x = rx * M_PI / 180;
    float rad_y = ry * M_PI / 180;
    float rad_z = rz * M_PI / 180;

    // Создание матриц вращения вокруг осей X, Y и Z
    Matrix rot_x = {
        .m = {{1, 0, 0, 0},
              {0, cos(rad_x), -sin(rad_x), 0},
              {0, sin(rad_x), cos(rad_x), 0},
              {0, 0, 0, 1}}
    };
    Matrix rot_y = {
        .m = {{cos(rad_y), 0, sin(rad_y), 0},
              {0, 1, 0, 0},
              {-sin(rad_y), 0, cos(rad_y), 0},
              {0, 0, 0, 1}}
    };
    Matrix rot_z = {
        .m = {{cos(rad_z), -sin(rad_z), 0, 0},
              {sin(rad_z), cos(rad_z), 0, 0},
              {0, 0, 1, 0},
              {0, 0, 0, 1}}
    };

    // Умножение матриц вращения
    // TODO: Реализовать функцию умножения матриц
    Matrix result = multiply_matrices(&rot_x, &rot_y, &rot_z);
    return result;
}


Matrix multiply_matrices(const Matrix *m1,const Matrix *m2,const Matrix *m3 ){
    Matrix result;
    Matrix final_result;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result.m[i][j] = 0.0;
            for (int k = 0; k < 4; k++) {
                result.m[i][j] += m1->m[i][k] * m2->m[k][j];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            final_result.m[i][j] = 0.0;
            for (int k = 0; k < 4; k++) {
                final_result.m[i][j] += result.m[i][k] * m3->m[k][j];
            }
        }
    }
    
    return final_result;
}