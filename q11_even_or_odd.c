#include <stdio.h>

main()
{
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
