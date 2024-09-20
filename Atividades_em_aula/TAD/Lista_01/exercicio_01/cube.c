#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cube.h"

struct cube {
    float side;
};

Cube* cube_create(float side) {
    Cube* c = (Cube *) malloc(sizeof(Cube));

    if (c == NULL) return 0;
    else {
        c->side = side;
    }

    return c;
}

void cube_destroy(Cube* c) {
    free(c);
}

float cube_get_side(Cube* c) {
    return c->side;
}

float cube_area(Cube* c) {
    return 6 * pow(c->side, 2);
}

float cube_volume(Cube* c) {
    return pow(c->side, 3);
}