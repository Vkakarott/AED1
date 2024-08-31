#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, value;

    printf("Tamanho da matriz: ");
    scanf("%d", &M);

    int **matriz = (int **)malloc(M * sizeof(int *));

    if (matriz == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < M; i++) {
        matriz[i] = (int *)malloc((i + 1) * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
        }
    }

    printf("\nMatriz Original:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Quintuplicada:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", 5 * matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < M; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}