#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;

    do {
        printf("Digite o tamanho do array: ");
        scanf("%d", &size);
    } while (size <=0);

    int *array = (int *) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Erro ao alocar");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        do {
            printf("Digite os valores do vetor: ");
            scanf("%d", &array[i]);
        } while (array[i] <= 2);
    }

    free(array);

    return 0;
}