#include <stdio.h>
#include <math.h>

enum Car
{
    PASSENGER, TRUCK, BUS, RACING, SPORT, MOTORBIKE
};

struct Cube
{
    double a;
    double x;
    double y;
};

struct Laser_Printer
{
    unsigned Ready: 1;
    unsigned Low_Toner: 1;
    unsigned Drum_Damaged: 1;
    unsigned No_Paper: 1;
};

union Value
{
    int OnOff;
    struct Laser_Printer laser;
};

int main ()
{
    enum Car mashina;
    mashina = BUS;
    printf("Mashina: %d\n", mashina);

    struct Cube one;
    one.a = 5; one.x = 0; one.y = 0;
    printf("A = (%.2lf, %.2lf)\n", one.x, one.y + one.a);
    printf("B = (%.2lf, %.2lf)\n", one.x + one.a, one.y + one.a);
    printf("C = (%.2lf, %.2lf)\n", one.x + one.a, one.y);
    printf("D = (%.2lf, %.2lf)\n", one.x, one.y);
    printf("S = %.4lf\n", one.a * one.a);

    union Value val;
    printf("Input your number:\n");
    scanf("%x", &val.OnOff);
    printf("%d  %d  %d  %d\n", val.laser.Ready, val.laser.Low_Toner, val.laser.Drum_Damaged, val.laser.No_Paper);

    return 0;
}