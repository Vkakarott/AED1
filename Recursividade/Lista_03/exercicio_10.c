#include <stdio.h>
#include <stdlib.h>

void move_board(char direction,int i,int j){
    if(direction == 'V') j++;
    if(direction == '>') i++;
    if(direction == '<') i--;
    if(direction == 'A') j--;
}

checkNotSecure(char board[],int size,int i,int j){
    if(board)
}

int check_board(int size, char board[],int i,int j){
    if(i == size && j == size) return 1;
    move_board(board[i][j],i,j);
    if(i < 0 || i >= size || j < 0 || j >= size) checkNotSecure(board,size,i,j); 
}

int main() {
    int size;
    
    printf("Digite o tamanho do tabuleiro: ");
    scanf("%d", &size);
    
    char board[size][size];
    
    getchar();

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf(" %c", &board[i][j]);
        }
    }

    check_board(board, size, 0, 0);
}