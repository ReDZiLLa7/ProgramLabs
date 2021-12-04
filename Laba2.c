#include <math.h>
#include <stdio.h>

int main()
{
    double alpha;
    scanf("%lf", &alpha);
    double z1 = (cos(alpha) + sin(alpha)) / (cos(alpha) - sin(alpha));
    double z2 = tan(2 * alpha) + (1 / cos(2 * alpha));
    printf("z1:%lf\nz2:%lf", z1, z2);
}