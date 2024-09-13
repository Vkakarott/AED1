#include <stdio.h>
#include <math.h>

typedef struct {
    int X;
    int Y;
} Coordinate;

double distance(int x, int y) {
    double distance = sqrt((pow(x, 2) + pow(y, 2)));

    return distance;
}

int main () {
    Coordinate points;
    printf("Pontos [x] [y]: ");
    scanf("%d %d", &points.X, &points.Y);

    printf("A distancia do ponto (%d,%d) ao ponto (0,0) é %.2f\n", points.X, points.Y, distance(points.X, points.Y));

    return 0;
}
