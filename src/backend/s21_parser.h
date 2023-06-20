#ifndef S21_PARSER_H_
#define S21_PARSER_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_AXES 3 // Определение константы для числа осей (X, Y, Z)
#define BUFFER_SIZE 1024
#define NEGATIVE_INFINITY -1E28

struct ResultStruct {
    double minBounds[NUM_AXES]; // Минимальные значения координат по каждой оси (X, Y, Z)
    double maxBounds[NUM_AXES]; // Максимальные значения координат по каждой оси (X, Y, Z)

    int numPoints;              // Количество точек (вершин) в 3D-модели
    double *pointsCoordinates;  // Массив координат точек (вершин)

    int numConnections;         // Количество соединений (граней) в 3D-модели
    int *connectionIndices;     // Массив индексов точек, образующих грани
};

void rotatePointsAroundAxis(int rotationAxis, double rotationAngleInDegrees, struct ResultStruct *coordinateData);
void scalePoints(double scaleFactor, struct ResultStruct *coordinateData);
void shiftPointsAlongAxis(int shiftAxis, double shiftDistance, struct ResultStruct *coordinateData);
void centerPoints(struct ResultStruct *coordinateData);
void scaleCoordinatesToFit(struct ResultStruct *coordinateData, double targetSize);
double findMaxDimension(struct ResultStruct *coordinateData);

void free_result_struct(struct ResultStruct *result);
void initialize_result_struct(struct ResultStruct *temp);
char *read_coordinate_from_string(char *temp, double *parsedNumber);
void update_min_max_coordinates(struct ResultStruct *coordinateData, int axisIndex);
char *read_face_vertex_indices(char *inputCursor, size_t *parsedIndex);
void add_index_to_connections(struct ResultStruct *result, size_t value);
void append_index_to_connections(size_t *vertexIndices, int numIndices,
                                 struct ResultStruct *coordinateData);
void process_vertex_line(char *line, struct ResultStruct *result);
void process_face_line(char *line, struct ResultStruct *result);
struct ResultStruct *read_and_parse_obj_file(char *file_name);

#endif  // S21_PARSER_H_
