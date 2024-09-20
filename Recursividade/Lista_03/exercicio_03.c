#include <stdio.h>

int ackermannFunction(int m, int n) {
    if(m == 0) return n + 1;
    if(n == 0) return ackermannFunction(m - 1, 1);
    if(n > 0) return ackermannFunction(m - 1, ackermannFunction(m, n - 1));

    return -1;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    printf("%d\n", ackermannFunction(m, n));

    return 0;
}