#include <stdio.h>
#include <stdlib.h>

int SumNum(int n, int sum)
{
    if (n == 0)
        return sum;
    else
    {
        sum += n % 10;
        n /= 10;
        SumNum(n, sum);
    }
}

void del_symbol(char *a)
{
    for (int i = 0; a[i] != '\0'; i++)
        a[i] = a[i + 1];
}

void del_spaces(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ' && *(str + 1) == ' ')
        {
            del_symbol(str + 1);
            del_spaces(str);
            return;
        }
        else if ((*str == '(' || *str == '[' || *str == '{' || *str == '"') && *(str + 1) == ' ')
        {
            del_symbol(str + 1);
            del_spaces(str);
            return;
        }
        str++;
    }
}

int main()
{
    printf("%s\n", "Task 4");
    int n, sum = 0;
    scanf("%d", &n);
    printf("%d\n", SumNum(n, sum));

    printf("%s\n", "Task 5");
    char str[50];
    getchar();
    gets(str);
    del_spaces(str);
    printf("%s\n", str);

    return 0;
}
