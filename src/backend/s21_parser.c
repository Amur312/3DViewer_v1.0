#include "s21_parser.h"

/**
 * @brief Освобождает память, выделенную для структуры ResultStruct.
 *
 * @param result Указатель на структуру ResultStruct, для которой необходимо освободить память.
 */
void free_result_struct(struct ResultStruct *result) {
    free(result->pointsCoordinates);
    free(result->connectionIndices);
    free(result);
}

/**
 * @brief Инициализирует структуру ResultStruct, устанавливая начальные значения для её полей.
 *
 * @param temp Указатель на структуру ResultStruct, которую необходимо инициализировать.
 */
void initialize_result_struct(struct ResultStruct *temp) {
    temp->numPoints = 0;
    temp->pointsCoordinates = (double *)calloc(1, sizeof(double));
    temp->numConnections = 0;
    temp->connectionIndices = (int *)calloc(1, sizeof(int));
    if (temp->connectionIndices == NULL) {
        free(temp->pointsCoordinates);
        return;
    }
    for (int i = 0; i < NUM_AXES; i++) {
        temp->minBounds[i] = 0;
        temp->maxBounds[i] = 0;
    }
}

/**
 * @brief Считывает числовое значение типа double из строки, начиная с указанной позиции.
 *
 * @param inputString Указатель на символ в строке, с которого начинается считывание.
 * @param parsedNumber Указатель на переменную типа double, в которую будет записано считанное число.
 * @return Указатель на последний символ, который был считан.
 */
char *read_coordinate_from_string(char *inputString, double *parsedNumber) {
    char *numberBuffer = calloc(BUFFER_SIZE, sizeof(char));
    int index = 0;

    while (*inputString != ' ' && *inputString != '\n' && *inputString != '\0' && *inputString != '\r') {
        numberBuffer[index] = *inputString;
        inputString++;
        index++;
    }

    *parsedNumber = strtod(numberBuffer, NULL);
    free(numberBuffer);
    return inputString - 1;
}

/**
 * @brief Обновляет минимальное и максимальное значения координат для определенной оси.
 *
 * @param coordinateData Указатель на структуру, содержащую данные о координатах.
 * @param axisIndex Индекс оси (0 для X, 1 для Y, 2 для Z) для которой необходимо обновить границы.
 */
void update_min_max_coordinates(struct ResultStruct *coordinateData, int axisIndex) {
    if (coordinateData->numPoints < 4) {
        coordinateData->maxBounds[axisIndex] = coordinateData->pointsCoordinates[coordinateData->numPoints - 1];
        coordinateData->minBounds[axisIndex] = coordinateData->pointsCoordinates[coordinateData->numPoints - 1];
    } else {
        if (coordinateData->maxBounds[axisIndex] < coordinateData->pointsCoordinates[coordinateData->numPoints - 1]) {
            coordinateData->maxBounds[axisIndex] = coordinateData->pointsCoordinates[coordinateData->numPoints- 1];
        }

        if (coordinateData->minBounds[axisIndex] > coordinateData->pointsCoordinates[coordinateData->numPoints - 1]) {
            coordinateData->minBounds[axisIndex] = coordinateData->pointsCoordinates[coordinateData->numPoints - 1];
        }
    }
}

/**
 * @brief Считывает индекс вершины из строки, представляющей грань в формате OBJ.
 *
 * @param inputCursor Указатель на символ в строке, с которого начинается считывание индекса.
 * @param parsedIndex Указатель на переменную типа size_t, в которую будет записан считанный индекс.
 * @return Указатель на символ, следующий сразу за считанным индексом, что позволяет продолжить считывание следующих данных из строки.
 */
char *read_face_vertex_indices(char *inputCursor, size_t *parsedIndex) {
    char *indexBuffer = calloc(BUFFER_SIZE, sizeof(char));
    int digitCount = 0;
    while (*inputCursor == ' ') inputCursor++;
    while (*inputCursor >= '0' && *inputCursor <= '9') {
        indexBuffer[digitCount] = *inputCursor;
        inputCursor++;
        digitCount++;
    }
    if (digitCount) *parsedIndex = atoi(indexBuffer) - 1;
    if (*inputCursor == '/') {
        while (*inputCursor != ' ' && *inputCursor != '\0' && *inputCursor != '\n' && *inputCursor != '\r')
            inputCursor++;
    }
    free(indexBuffer);
    return inputCursor;
}

/**
 * @brief Добавляет индекс вершины в массив индексов соединений.
 *
 * @param coordinateData Указатель на структуру, содержащую данные о координатах и соединениях.
 * @param vertexIndex Индекс вершины, который нужно добавить в массив.
 */
void add_index_to_connections(struct ResultStruct *coordinateData, size_t vertexIndex) {
    coordinateData->numConnections++;
    coordinateData->connectionIndices =
        realloc(coordinateData->connectionIndices, coordinateData->numConnections * sizeof(int));
    coordinateData->connectionIndices[coordinateData->numConnections - 1] = vertexIndex;
}

/**
 * @brief Добавляет несколько индексов вершин в массив индексов соединений.
 *
 * @param vertexIndices Массив индексов вершин, которые нужно добавить.
 * @param numIndices Количество индексов в массиве.
 * @param coordinateData Указатель на структуру, содержащую данные о координатах и соединениях.
 */
void append_index_to_connections(size_t *vertexIndices, int numIndices,
                                 struct ResultStruct *coordinateData) {
    for (int i = 0; i < numIndices; i++) {
        add_index_to_connections(coordinateData, vertexIndices[i]);
        if (i) {
            add_index_to_connections(coordinateData, vertexIndices[i]);
        }
    }
    add_index_to_connections(coordinateData, vertexIndices[0]);
}

/**
 * @brief Обрабатывает строку с информацией о вершине и добавляет координаты вершины в структуру coordinateData.
 *
 * @param vertexLine Указатель на строку с информацией о вершине.
 * @param coordinateData Указатель на структуру, в которую будут добавлены координаты.
 */
void process_vertex_line(char *vertexLine, struct ResultStruct *coordinateData) {
    for (int axisIndex = 0; axisIndex < 3; axisIndex++) {
        coordinateData->numPoints++;
        coordinateData->pointsCoordinates =
            realloc(coordinateData->pointsCoordinates, coordinateData->numPoints * sizeof(double));
        vertexLine = read_coordinate_from_string(vertexLine + 2, &coordinateData->pointsCoordinates[coordinateData->numPoints - 1]);
        update_min_max_coordinates(coordinateData, axisIndex);
    }
}

/**
 * @brief Обрабатывает строку с информацией о грани и добавляет индексы вершин грани в структуру coordinateData.
 *
 * @param faceLine Указатель на строку с информацией о грани.
 * @param coordinateData Указатель на структуру, в которую будут добавлены индексы вершин.
 */
void process_face_line(char *faceLine, struct ResultStruct *coordinateData) {
    int indexCounter = 0;
    size_t *vertexIndices = malloc(sizeof(size_t));
    while (*faceLine != '\n' && *faceLine != '\0' && *faceLine != '\r') {
        indexCounter++;
        vertexIndices = realloc(vertexIndices, indexCounter * sizeof(size_t));
        faceLine = read_face_vertex_indices(faceLine, &vertexIndices[indexCounter - 1]);
    }
    append_index_to_connections(vertexIndices, indexCounter, coordinateData);
    free(vertexIndices);
}

/**
 * @brief Считывает и анализирует файл в формате OBJ. Извлекает координаты вершин и индексы вершин граней.
 *
 * @param file_name Имя файла OBJ для чтения.
 * @return Указатель на структуру ResultStruct с извлеченными данными или NULL, если файл не может быть открыт.
 */
struct ResultStruct *read_and_parse_obj_file(char *file_name) {
    struct ResultStruct *result = NULL;
    FILE *object_file = fopen(file_name, "r");
    if (object_file) {
        result = malloc(sizeof(struct ResultStruct));
        initialize_result_struct(result);
        char *buffer_line = malloc(BUFFER_SIZE * sizeof(char));
        while (fgets(buffer_line, BUFFER_SIZE, object_file)) {
            size_t length = strlen(buffer_line);
            char *temp = buffer_line;
            if (length > 2 && temp[0] == 'v' && temp[1] == ' ') {
                process_vertex_line(temp, result);
            }
            if (length > 2 && temp[0] == 'f' && temp[1] == ' ') {
                process_face_line(temp + 2, result);
            }
        }
        free(buffer_line);
        fclose(object_file);
    }
    scaleCoordinatesToFit(result, 0.9);
    centerPoints(result);
    return result;
}
