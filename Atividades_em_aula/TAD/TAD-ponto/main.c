#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main(){
    float d;
    Point *point1, *point2;
    float a = 0, b = 0;

    point1 = pto_cria(10, 21);
    point2 = pto_cria(7, 25);

    printf("Valores dos pontos antes \"a\" e \"b\": %.2f -- %.2f\n", a, b);
    pto_acessa(point1, &a, &b);
    printf("Valores dos pontos depois \"a\" e \"b\": %.2f -- %.2f\n", a, b);

    d = pto_distancia(point1, point2);
    printf("Distancia entre os pontos: %.2f\n", d);

    pto_atribui(point1, 1, 1);
    d = pto_distancia(point1, point2);
    printf("Distancia entre os pontos: %.2f\n", d);

    pto_libera(point1);
    pto_libera(point2);

    return 0;
}