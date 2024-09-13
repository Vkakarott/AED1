#include <stdio.h>

void printNatural(int current, int n){
    printf("%d ", current);
    
    if(current == n){
        printf("\n");
    }

    printNatural(current + 1, n);
}
int main() {
    int n;
    scanf("%d", &n);

    printNatural(1, n);

    return 0;
}