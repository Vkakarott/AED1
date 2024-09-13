#include <stdio.h>

int main() {
    int array[] = {3, 7, 15, 30, 9};
    int *ptr;
        
    printf("Valores originais do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    ptr = array;
    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 7;
    }
    
    printf("\nValores modificados do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
