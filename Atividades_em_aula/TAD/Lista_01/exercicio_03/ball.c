#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ball.h"

struct ball{
    float radius;
};

Ball* create_ball(float radius) {
    Ball *ball = malloc(sizeof(Ball));
    
    if( ball == NULL) {
        printf("Erro ao tentar alocar\n");
        return 0;
    }
    
    ball->radius = radius;
    
    return ball;
}

void destroy_ball(Ball* ball) {
    free(ball);
}

float get_radius(Ball* ball) {
    return ball->radius;
}

float ball_area(Ball* ball) {
    return 4 * M_PI * pow(ball->radius, 3);
}

float ball_volume(Ball* ball) {
    return (4 * M_PI * pow(ball->radius, 3)) / 3;
}