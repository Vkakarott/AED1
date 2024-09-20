typedef struct ball Ball;

Ball* create_ball(float radius);

void destroy_ball(Ball* ball);

float get_radius(Ball* ball);

float ball_area(Ball* ball);

float ball_volume(Ball* ball);