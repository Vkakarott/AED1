#include <stdio.h>
#include <stdlib.h>

struct Student {
    int *registration;
    char *name;
    double *grades;
};

int main() {
    struct Student *student;

    student = (struct Student *) malloc(sizeof(struct Student));

    if (student == NULL) {
        printf("Erro ao tentar alocar\n");
        return 1;
    }

    student->name = (char *) malloc(100 * sizeof(char));

    if (student->name == NULL) {
        printf("Erro ao alocar\n");
        free(student);
        return 1;
    }

    student->grades = (double *) malloc(3 * sizeof(double));

    if (student->grades == NULL) {
        printf("Erro ao alocar\n");
        free(student->name);
        free(student);
        return 1;
    }

    student->registration = (int *) malloc(3 * sizeof(int));

    if (student->registration == NULL) {
        printf("Erro ao alocar\n");
        free(student->name);
        free(student->grades);
        free(student);
        return 1;
    }

    printf("O tamanho da estrutura Student (com alocação dinâmica) é: %zu bytes\n", sizeof(*student) + (100 * sizeof(char)) + (3 * sizeof(float) + sizeof(int)));

    free(student->name);
    free(student->grades);
    free(student->registration);
    free(student);

    return 0;
}
