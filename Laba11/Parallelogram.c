#include "Parallelogram.h"

double ParalPerimeter(struct Parallelogram paral)
{
    return 2 * (sqrt(pow(paral.x1, 2) + pow(paral.y1, 2)) + sqrt(pow(paral.x2, 2) + pow(paral.y2, 2)));
}

double ParalArea(struct Parallelogram paral)
{
    return paral.y1 * sqrt(pow(paral.x2, 2) + pow(paral.y2, 2));
}