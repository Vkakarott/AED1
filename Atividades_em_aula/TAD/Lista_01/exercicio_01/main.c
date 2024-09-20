#include <stdio.h>
#include <stdlib.h>
#include "cube.h"

int main() {
    float side;
    Cube *cube;

    printf("Digite o lado do cubo: ");
    scanf("%f", &side);
    cube = cube_create(side);

    printf("Cubo criado com lado %.2f\n", cube_get_side(cube));
    printf("Area do cubo: %.2f\n", cube_area(cube));
    printf("Volume do cubo: %.2f\n", cube_volume(cube));

    cube_destroy(cube);

    return 0;
}