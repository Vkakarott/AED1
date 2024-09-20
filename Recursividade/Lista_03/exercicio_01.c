#include <stdio.h>

void printNatural(int x, int y){
    if(y < 0) return;

    printf("%d ", x - y);
    

    printNatural(x, y - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printNatural(n, n);

    return 0;
}