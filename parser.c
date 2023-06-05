#include "parser.h"



Model *load_obj(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Не удалось открыть файл: %s\n", filename);
        return NULL;
    }

    // Инициализация модели
    Model *model = malloc(sizeof(Model));
    model->num_vertices = 0;
    model->num_faces = 0;
    model->vertices = NULL;
    model->faces = NULL;

    // Чтение файла
    char line[128];
    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v') {
            // Чтение вершины
            model->vertices = realloc(model->vertices, (model->num_vertices + 1) * sizeof(Vertex));
            // читает три числа с плавающей точкой из строки, начиная со второго символа, и присваивает их полям x, y и z новой вершины.
            // читаем со второго символа т.к строка начинается с 'v' и пробел "v 1.0 2.0 3.0"
            sscanf(line + 2, "%f %f %f", &model->vertices[model->num_vertices].x,
                   &model->vertices[model->num_vertices].y, &model->vertices[model->num_vertices].z);
            // величивает счетчик вершин модели
            model->num_vertices++;
        } else if (line[0] == 'f') {
            // Чтение грани
            model->faces = realloc(model->faces, (model->num_faces + 1) * sizeof(Face));
            sscanf(line + 2, "%d %d %d", &model->faces[model->num_faces].v1,
                   &model->faces[model->num_faces].v2, &model->faces[model->num_faces].v3);
            model->num_faces++;
        }
    }

    fclose(file);
    return model;
}


