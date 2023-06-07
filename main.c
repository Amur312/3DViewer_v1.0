#include "parser.h"
#include "transformations.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Необходимо указать .obj файл в качестве аргумента.\n");
        return 1;
    }

    Model *model = load_obj(argv[1]);
    if (!model) {
        printf("Ошибка при загрузке .obj файла.\n");
        return 1;
    }

    printf("Исходная модель:\n");
    // Добавьте функцию для вывода модели
    print_model(model);
    // Создаем матрицу перемещения модели на (1, 1, 1)
    Matrix translationMatrix = make_translation_matrix(1, 1, 1);
    // Применяем перемещение к модели
    apply_transformation(model, &translationMatrix);
    printf("Модель после перемещения:\n");
    // Добавьте функцию для вывода модели
    print_model(model);
    // Создаем матрицу поворота модели на 45 градусов вокруг оси Y
    Matrix rotationMatrix = make_rotation_matrix(0, 45, 0);
    // Применяем поворот к модели
    apply_transformation(model, &rotationMatrix);
    printf("Модель после поворота:\n");
    // Добавьте функцию для вывода модели
    print_model(model);
    // Создаем матрицу масштабирования модели в 2 раза
    Matrix scaleMatrix = make_scale_matrix(2, 2, 2);
    // Применяем масштабирование к модели
    apply_transformation(model, &scaleMatrix);
    printf("Модель после масштабирования:\n");
    // Добавьте функцию для вывода модели

    // TODO: Добавьте функцию free_model
    free_model(model);

    return 0;
}