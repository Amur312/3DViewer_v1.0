#include "s21_parser.h"


/**
 * @brief Изменяет масштаб координат точек в структуре coordinateData, чтобы они умещались в заданный диапазон размеров.
 *
 * @param coordinateData Указатель на структуру, содержащую координаты точек и границы.
 * @param targetSize Целевой размер, в который должны умещаться координаты.
 */
void scaleCoordinatesToFit(struct ResultStruct *coordinateData, double targetSize) {
    double maxDimension = findMaxDimension(coordinateData);
    double scalingFactor = targetSize * targetSize / maxDimension;

    for (int i = 0; i < coordinateData->numPoints; i++) {
        coordinateData->pointsCoordinates[i] *= scalingFactor;
    }
    for (int i = 0; i < NUM_AXES; i++) {
        coordinateData->maxBounds[i] *= scalingFactor;
        coordinateData->minBounds[i] *= scalingFactor;
    }
}

/**
 * @brief Вычисляет и возвращает максимальное измерение среди всех осей координат в структуре coordinateData.
 *
 * @param coordinateData Указатель на структуру, содержащую координаты точек и границы.
 * @return Максимальное измерение среди всех осей координат.
 */
double findMaxDimension(struct ResultStruct *coordinateData) {
    double maxDimension = NEGATIVE_INFINITY;
    for (int i = 0; i < NUM_AXES; i++) {
        if (coordinateData->maxBounds[i] - coordinateData->minBounds[i] > maxDimension) {
            maxDimension = coordinateData->maxBounds[i] - coordinateData->minBounds[i];
        }
    }
    return maxDimension;
}

/**
 * @brief Выполняет аффинное вращение точек в структуре coordinateData вокруг одной из осей координат на заданный угол.
 *
 * @param rotationAxis Ось вращения (0 - X, 1 - Y, 2 - Z).
 * @param rotationAngleInDegrees Угол вращения в градусах.
 * @param coordinateData Указатель на структуру, содержащую координаты точек.
 */
void rotatePointsAroundAxis(int rotationAxis, double rotationAngleInDegrees, struct ResultStruct *coordinateData) {
    double rotationAngleInRadians = rotationAngleInDegrees * (3.14 / 180.0);
    for (int i = 0; i < coordinateData->numPoints; i += 3) {
        int firstCoordinateIndex = -1;
        int secondCoordinateIndex = -1;
        for (int j = 0; j < NUM_AXES; j++) {
            if (rotationAxis != j && (firstCoordinateIndex != -1)) secondCoordinateIndex = i + j;
            if (rotationAxis != j && (firstCoordinateIndex == -1)) firstCoordinateIndex = i + j;
        }
        double originalFirstCoordinate = coordinateData->pointsCoordinates[firstCoordinateIndex];
        double originalSecondCoordinate = coordinateData->pointsCoordinates[secondCoordinateIndex];
        coordinateData->pointsCoordinates[firstCoordinateIndex] = cos(rotationAngleInRadians) * originalFirstCoordinate + sin(rotationAngleInRadians) * originalSecondCoordinate;
        coordinateData->pointsCoordinates[secondCoordinateIndex] = -sin(rotationAngleInRadians) * originalFirstCoordinate + cos(rotationAngleInRadians) * originalSecondCoordinate;
    }
}

/**
 * @brief Сдвигает координаты точек в структуре coordinateData вдоль одной из осей на заданное расстояние.
 *
 * @param shiftAxis Ось сдвига (0 - X, 1 - Y, 2 - Z).
 * @param shiftDistance Расстояние сдвига.
 * @param coordinateData Указатель на структуру, содержащую координаты точек.
 */
void shiftPointsAlongAxis(int shiftAxis, double shiftDistance, struct ResultStruct *coordinateData) {
    for (int i = 0; i < coordinateData->numPoints; i += 3) {
        for (int j = 0; j < NUM_AXES; j++) {
            if (j == shiftAxis) coordinateData->pointsCoordinates[i + j] += shiftDistance;
        }
    }
}

/**
 * @brief Масштабирует координаты всех точек в структуре coordinateData, умножая их на заданный масштабный коэффициент.
 *
 * @param scaleFactor Масштабный коэффициент.
 * @param coordinateData Указатель на структуру, содержащую координаты точек.
 */
void scalePoints(double scaleFactor, struct ResultStruct *coordinateData) {
    for (int i = 0; i < coordinateData->numPoints; i++) coordinateData->pointsCoordinates[i] *= scaleFactor;
}

/**
 * @brief Центрирует координаты точек в структуре coordinateData, так что центр масс всех точек совпадает с началом координат (0,0,0).
 *
 * @param coordinateData Указатель на структуру, содержащую координаты точек.
 */
void centerPoints(struct ResultStruct *coordinateData) {
    double center[NUM_AXES];
    for (int i = 0; i < NUM_AXES; i++) {
        center[i] = coordinateData->minBounds[i] + (coordinateData->maxBounds[i] - coordinateData->minBounds[i]) / 2;
    }
    for (int i = 0; i < coordinateData->numPoints; i += 3) {
        for (int j = 0; j < NUM_AXES; j++) coordinateData->pointsCoordinates[i + j] -= center[j];
    }
}
