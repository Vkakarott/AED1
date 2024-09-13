#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    scanf("%d", &size);

    int *array = (int *) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Erro ao alocar");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("- %d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}