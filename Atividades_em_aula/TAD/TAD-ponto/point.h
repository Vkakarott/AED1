typedef struct point Point;

Point* pto_cria(float x, float y);
void pto_libera(Point* p);
int pto_acessa(Point* p, float* x, float* y);
int pto_atribui(Point* p, float x, float y);
float pto_distancia(Point* p1, Point* p2);