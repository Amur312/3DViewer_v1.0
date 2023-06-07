#ifndef PARSER_H
#define PARSER_H


#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define OK  1
#define Error 0

// Структура "Vertex" представляет вершину в 3D-пространстве.
// Она содержит координаты x, y и z, которые определяют положение вершины в 3D-пространстве.
typedef struct {
    float x;  // Координата X вершины
    float y;  // Координата Y вершины
    float z;  // Координата Z вершины
} Vertex;

// Структура "Face" представляет грань в 3D-модели. 
// Она состоит из трех целых чисел (v1, v2, v3), которые представляют индексы вершин, образующих грань.
// Обратите внимание, что индексы соответствуют вершинам в массиве вершин 3D-модели.
typedef struct {
    int v1;  // Индекс первой вершины грани
    int v2;  // Индекс второй вершины грани
    int v3;  // Индекс третьей вершины грани
} Face;

// Структура "Model" представляет 3D-модель. 
// Она содержит указатель на массив вершин, количество вершин в этом массиве, 
// указатель на массив граней и количество граней в этом массиве.
typedef struct {
    Vertex *vertices;   // Указатель на массив вершин модели
    int num_vertices;   // Количество вершин в модели
    Face *faces;        // Указатель на массив граней модели
    int num_faces;      // Количество граней в модели
} Model;


void free_model(Model *model);
Model *load_obj(const char *filename);
void print_model(const Model *model);
#endif  // PARSER_H