#include <stdio.h>

main()
{
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 10 == 0)
    {
        printf("divisible by both 5 and 10\n");
    }
    else
    {
        printf("not divisible by both 5 and 10\n");
    }
}
