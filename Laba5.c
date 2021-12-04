#include <stdio.h>

int main()
{
    // Задание 1
    int mas1[9] = {12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", mas1[i]);
    }
    printf("\n");

    // Задание 2
    int mat1[2][2] = { {1, 1},
                       {0, 1} };
    int mat2[2][2] = { {2, 0},
                       {3, 0} };
    int matR[2][2] = { {0, 0},
                       {0, 0} };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                matR[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matR[i][j]);
        }
        printf("\n");
    }
    return 0;
}