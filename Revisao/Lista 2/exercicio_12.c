#include <stdio.h>

int main() {
    int var;
    int *ptr1;
    int **ptr2;
    int ***ptr3;

    ptr1 = &var;   
    ptr2 = &ptr1;  
    ptr3 = &ptr2; 

    printf("Digite um valor: ");
    scanf("%d", &var);

    int dobro = (*ptr1) * 2;
    int triplo = (**ptr2) * 3;
    int quadruplo = (***ptr3) * 4;

    printf("Dobro: %d\n", dobro);
    printf("Triplo: %d\n", triplo);
    printf("Quádruplo: %d\n", quadruplo);

    return 0;
}
