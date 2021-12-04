#ifndef PROGRAMITMO_PARALLELOGRAM_H
#define PROGRAMITMO_PARALLELOGRAM_H

#include <math.h>

struct Parallelogram
{
    double x1, y1;
    double x2, y2;
};

double ParalPerimeter(struct Parallelogram paral);
double ParalArea(struct Parallelogram paral);

#endif