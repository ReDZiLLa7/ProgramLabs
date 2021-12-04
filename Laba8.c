#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s", str1, str2);
    printf("\n");

    printf("%s\n", "Task 1");
    strcat(str1, str2);
    printf("%s\n\n", str1);


    printf("%s\n", "Task 4");
    if (strncmp (str1, str2, 4) == 0)
        puts ("Yep\n");
    else
        puts ("Nope\n");


    char str[100];
    printf("%s\n", "Task 7");
    scanf("%s", str);
    int size = strlen(str);
    printf("%d\n\n", size);
    //"Неявное преобразование, теряет точность целого"
    //Если точнее, то это не ошибка, а предупреждение о том, что str (соответствующий типу long) приводится к типу unsigned int, который вмещает меньше значений, из-за чего могут возникать ошибки (которые на деле никогда не возникают)


    printf("%s\n", "Task 10");
    printf("First: %s\nSecond: %s\n", str, str2);
    char *p;
    for (p = str; *p; p++)
        if (strchr(str2, *p))
            printf("Found: %c\n", *p);
    printf("\n");

    printf("%s\n", "Task 12");
    printf ("Length: %d\n", strcspn (str1, str2));

    return 0;
}