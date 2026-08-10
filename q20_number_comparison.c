#include <stdio.h>

main()
{
    int a, b;

    printf("enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("both are equal\n");
    }
    else if (a > b)
    {
        printf("a is greater\n");
    }
    else
    {
        printf("b is greater\n");
    }
}
