#include <stdio.h>

main()
{
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("largest is %d\n", a);
    }
    else
    {
        printf("largest is %d\n", b);
    }
}
