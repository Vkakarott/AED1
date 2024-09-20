#include <stdio.h>

void towerHanoi(int n, char init, char end, char append) {
    if (n == 1) {
        printf("(%c,%c)\n", init, end);
        return;
    }
    
    towerHanoi(n - 1, init, append, end);
    
    printf("(%c,%c)\n", init, end);
    
    towerHanoi(n - 1, append, end, init);
}

int main() {
    int n;

    scanf("%d", &n);

    towerHanoi(n, 'O', 'D', 'A');

    return 0;
}
