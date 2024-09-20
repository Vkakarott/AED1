#include <stdio.h>
#include <stdlib.h>
#include "cylinder.h"

int main() {
    float radius, height;
    Cylinder *cylinder;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &radius);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &height);
    cylinder = cylinder_create(radius, height);

    printf("Cilindro criado com raio %.2f e altura %.2f\n", cylinder_get_radius(cylinder), cylinder_get_height(cylinder));
    printf("Area do cilindro: %.2f\n", cylinder_area(cylinder));
    printf("Volume do cilindro: %.2f\n", cylinder_volume(cylinder));

    cylinder_destroy(cylinder);

    return 0;
}