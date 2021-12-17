#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // argv[0] - указывает на имя программы
    freopen("file", "w", stdout);
    argv[1] = "15";
    argv[2] = "10";
    printf("Sum = %d", atoi(argv[1]) + atoi(argv[2]));
    return 0;
}
