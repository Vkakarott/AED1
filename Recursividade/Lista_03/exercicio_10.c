#include <stdio.h>

int checkSegurity(int size, int i, int j, int data) {
    if(data == 'V') j++;
    if(data == '<') i--;
    if(data == '>') i++;
    if(data == 'A') j--;

    if(i > size || j > size || i < 0 || j < 0) return 0;
    return 1;
}

int main(){
    int size;

    printf("Digite o tamanho do tabuleiro: ");
    scanf("%d", &size);

    getchar();

    char board[size][size];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf(" %c", &board[i][j]);
        }
    }

    int secure = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(checkSegurity(size, i, j, board[i][j])) secure++;
        }
    }

    printf("%d\n", secure);
}