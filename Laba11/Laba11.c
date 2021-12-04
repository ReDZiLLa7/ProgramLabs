#include <stdio.h>
#include "Parallelogram.h"

int main()
{
    struct Parallelogram paral;

    printf("Add first coords:\n");
    scanf("%lf %lf", &paral.x1, &paral.y1);
    printf("Add second coords:\n");
    scanf("%lf %lf", &paral.x2, &paral.y2);
    printf("Perimeter: %.0lf\n", ParalPerimeter(paral));
    printf("Area: %.0lf\n", ParalArea(paral));

    return 0;
}