#include <stdio.h>

long int convertToBinary(long int decimal) {
    if(decimal == 0) return 0;

    return (decimal % 2) + 10 * convertToBinary(decimal / 2);
}

int main() {
    int cases;
    long int decimal;

    scanf("%d", &cases);
    long int binary[cases];

    for(int i = 0; i < cases; i++) {
        scanf("%ld", &decimal);
        binary[i] = convertToBinary(decimal);
    }

    for(int i = 0; i < cases; i++) {
        printf("%ld\n", binary[i]);
    }

    return 0;
}