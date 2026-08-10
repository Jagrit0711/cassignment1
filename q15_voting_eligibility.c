#include <stdio.h>

main()
{
    int a;

    printf("enter your age: ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("eligible\n");
    }
    else
    {
        printf("not eligible\n");
    }
}
