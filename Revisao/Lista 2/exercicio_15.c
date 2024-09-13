#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int **matriz;
    int value;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &N);

    printf("Digite o valor inicial: ");
    scanf("%d", &value);

    matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc((i + 1) * sizeof(int));
    }

    int current = value;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            matriz[i][j] = current;
            current *= 2;
        }
    }

    printf("Matriz triangular inferior:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
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
