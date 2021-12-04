#include <stdio.h>
#include <math.h>

int main()
{
    printf("%s", "Task 4\n");
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int k = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                k += 1;
        }
        if (k == 2)
            printf("%d ", i);
    }
    printf("\n\n");

    printf("%s", "Task 5\n");
    int months;
    double bank_account, interest_rate;
    printf("%s", "Your bank account:");
    scanf("%lf", &bank_account);
    printf("%s", "Months:");
    scanf("%d", &months);
    printf("%s", "Interest rate:");
    scanf("%lf", &interest_rate);
    bank_account = bank_account * pow(1 + (interest_rate / 1200), months);
    printf("%.0lf", bank_account);
    return 0;
}