#include <stdio.h>

int reverseNumber(int n, int reverse) {
    if(n == 0) return reverse;

    reverse = reverse * 10 + (n % 10);

    return reverseNumber(n / 10, reverse);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("O numero reverso de %d é %d\n", n, reverseNumber(n, 0));

    return 0;
}