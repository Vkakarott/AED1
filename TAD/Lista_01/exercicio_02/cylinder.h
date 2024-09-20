typedef struct cylinder Cylinder;

Cylinder* cylinder_create(float radius, float height);

void cylinder_destroy(Cylinder* cylinder);

float cylinder_get_radius(Cylinder* cylinder);

float cylinder_get_height(Cylinder* cylinder);

float cylinder_area(Cylinder* cylinder);

float cylinder_volume(Cylinder* cylinder);