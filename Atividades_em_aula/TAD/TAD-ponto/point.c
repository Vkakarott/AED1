#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "point.h"

struct point{
    float x;
    float y;
};

Point* pto_cria(float x, float y){
    Point* p = (Point *) malloc(sizeof(Point));

    if (p == NULL) return 0;
    else {
        p->x = x;
        p->y = y;
    }

    return p;
};

void pto_libera(Point* p){
    free(p);
};

int pto_acessa(Point* p, float* x, float* y){
    if (p == NULL) return 0;

    *x = p->x;
    *y = p->y;

    return 1;
};

int pto_atribui(Point* p, float x, float y){
    if(p == NULL) return 0;

    p->x = x;
    p->y = y;
    return 1;
};

float pto_distancia(Point* p1, Point* p2){
    if (p1 == NULL || p2 == NULL) return -1;

    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;

    return sqrt(dx * dx + dy * dy);
};