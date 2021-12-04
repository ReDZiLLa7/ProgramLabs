#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Задание 1
    char mas[5];
    mas[0] = 'H'; mas[1] = 'e'; mas[2] = 'l'; mas[3] = 'l'; mas[4] = 'o';
    for (int i = 0; i < 5; i++)
        printf("%c ", *(mas + i));
    printf("\n");

    // Задание 2
    int a, n;
    scanf_s("%d\n", &n);
    a = 2*n - 1;
    char *arr = (char*) malloc(a * sizeof(char));
    for (int i = 0; i < a; i++)
    {
        scanf_s("%c", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%c", arr[i]);
    }
    free(arr);
    return 0;
}