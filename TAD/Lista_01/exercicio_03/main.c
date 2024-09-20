#include <stdio.h>
#include <stdlib.h>
#include "ball.h"

int main(){
    float radius;
    Ball* ball;

    printf("Digite o raio da esfera: ");
    scanf("%f", &radius);

    ball = create_ball(radius);
    printf("Esfera criada de raio: %.2f\n", get_radius(ball));
    printf("Area da esfera: %.2f\n", ball_area(ball));
    printf("Volume da esfera: %.2f\n", ball_volume(ball));

    return 0;
}