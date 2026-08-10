#include <stdio.h>

main()
{
    int a;

    printf("enter a number: ");
    scanf("%d", &a);

    printf("%%d = %d\n", a);
    printf("%%5d = %5d\n", a);
    printf("%%10d = %10d\n", a);
}
