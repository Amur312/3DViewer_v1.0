#include "parser.h"
#include "transformations.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Необходимо указать файл .obj в качестве аргумента.\n");
        return 1;
    }

    Model model;
    if (load_model(&model, argv[1]) != 0) {
        printf("Ошибка при загрузке файла .obj.\n");
        return 1;
    }

    printf("Изначальная модель:\n");
    print_model(&model);

    // Перемещение модели на (1, 1, 1)
    transform_model(&model, translate(1, 1, 1));
    printf("Модель после перемещения:\n");
    print_model(&model);

    // Поворот модели на 45 градусов вокруг оси Y
    transform_model(&model, rotate_y(45));
    printf("Модель после поворота:\n");
    print_model(&model);

    // Масштабирование модели в 2 раза
    transform_model(&model, scale(2, 2, 2));
    printf("Модель после масштабирования:\n");
    print_model(&model);

    free_model(&model);

    return 0;
}
