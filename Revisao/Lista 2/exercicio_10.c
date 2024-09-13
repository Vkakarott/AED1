#include <stdio.h>

int main(){
    int X;
    int Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    int *ptr_X = &X;
    int *ptr_Y = &Y;

    if (ptr_X > ptr_Y) printf("O maior endereco é da variavel de valor %d\n", X);
    else printf("O maior endereco é da variavel de valor %d\n", Y);

    return 0;
}