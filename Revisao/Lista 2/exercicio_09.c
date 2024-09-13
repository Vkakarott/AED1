#include <stdio.h>

int main(){
    int A;
    int B;

    int *ptr_A = &A;
    int *ptr_B = &B;

    if (ptr_A < ptr_B) printf("O maior endereco é %p\n", (void *)ptr_B);
    else printf("O maior ponteiro é %p\n", (void *)ptr_A);

    return 0;
}