#include <stdio.h>
#include <math.h>

typedef struct {
    int A;
    int B;
} Point;

int cauculateDistance (Point A, Point B) {
    int distance = sqrt(pow((B.A - A.A), 2) + pow((B.B - B.A), 2)); // 
    return distance;
}

int main() {
    Point ponto[2];

    printf("Ponto 1 [x] [y]: ");
    scanf("%d", &ponto[0].A);
    scanf("%d", &ponto[0].B);

    printf("Ponto 2 [x] [y]: ");
    scanf("%d", &ponto[1].A);
    scanf("%d", &ponto[1].B);

    printf("A distancia entre os pontos é %d\n", cauculateDistance(ponto[0], ponto[1]));    

    return 0;
}