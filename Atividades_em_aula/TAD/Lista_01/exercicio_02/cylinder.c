#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cylinder.h"

struct cylinder {
    float radius;
    float height;
};

Cylinder* cylinder_create(float radius, float height) {
    Cylinder *cylinder = malloc(sizeof(Cylinder));
    if (cylinder == NULL) {
        printf("Memoria insuficiente!\n");
        exit(1);
    }
    cylinder->radius = radius;
    cylinder->height = height;
    return cylinder;
}

void cylinder_destroy(Cylinder* cylinder) {
    free(cylinder);
}

float cylinder_get_radius(Cylinder* cylinder) {
    return cylinder->radius;
}

float cylinder_get_height(Cylinder* cylinder) {
    return cylinder->height;
}

float cylinder_area(Cylinder* cylinder) {
    return 2 * M_PI * cylinder->radius * (cylinder->radius + cylinder->height);
}

float cylinder_volume(Cylinder* cylinder) {
    return M_PI * cylinder->radius * cylinder->radius * cylinder->height;
}