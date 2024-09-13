#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int **matriz;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &N);

    matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matriz[i][j] = 0;
            } else if (i < j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = -1;
            }
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    
    free(matriz);

    return 0;
}
