#ifndef TRANSFORMATIONS_H
#define TRANSFORMATIONS_H

#include "parser.h"


typedef struct {
    float m[4][4];
} Matrix;

void apply_transformation(Model *model, const Matrix *matrix);

Matrix make_translation_matrix(float tx, float ty, float tz);
Matrix make_rotation_matrix(float rx, float ry, float rz);
Matrix make_scale_matrix(float sx, float sy, float sz);

#endif