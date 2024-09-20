typedef struct cube Cube;

Cube* cube_create(float side);

void cube_destroy(Cube* cube);

float cube_get_side(Cube* cube);

float cube_area(Cube* cube);

float cube_volume(Cube* cube);