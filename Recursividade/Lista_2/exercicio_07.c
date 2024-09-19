#include <stdio.h>

int main() {
    int value;
    int N2, N5, N10, N20, N50, N100;

    scanf("%d", &value);
    scanf("%d %d %d %d %d %d", &N2, &N5, &N10, &N20, &N50, &N100);

    int shapes[1001] = {0};  
    shapes[0] = 1;

    int notes[] = {2, 5, 10, 20, 50, 100};
    int quantities[] = {N2, N5, N10, N20, N50, N100};

    for (int i = 0; i < 6; i++) {
        int note = notes[i];
        int quantity = quantities[i];

        for (int j = value; j >= note; j--) {
            for (int k = 1; k <= quantity && k * note <= j; k++) {
                shapes[j] += shapes[j - k * note];
            }
        }
    }

    printf("%d\n", shapes[value]);

    return 0;
}
