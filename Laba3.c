#include <stdio.h>

int main ()
{
    // Задание 1
    int num;
    scanf_s("%d", &num);

    // Задание 2
    printf("%o\n", num);

    // Задание 3
    printf("%x and %x\n", num, num >> 2);

    // Задание 4
    num = ~num;
    printf("%x and %x\n", num, ~num);

    // Задание 5
    int new_num;
    scanf_s("%x", &new_num);
    printf("%x", num & new_num);

    return 0;
}