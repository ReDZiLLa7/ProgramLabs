#include <stdio.h>

int main()
{
    // Задание 1
    int num, result;
    scanf_s("%d", &num);
    result = 33 <= num && num <= 55;

    printf("Your number %d in a given range %d...%d: %s  \n", num, 33, 55, result ? "YES":"NO");

    // Задание 2
    int new_num;
    scanf_s("%d", &new_num);
    printf("%d\n", (new_num >> 13) % 2);

    return 0;
}