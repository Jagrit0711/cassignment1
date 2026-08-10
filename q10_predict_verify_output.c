#include <stdio.h>

main()
{
    int a = 25;
    float b = 12.5678;

    printf("%d\n", a);
    printf("%5d\n", a);
    printf("%f\n", b);
    printf("%.2f\n", b);
    printf("%10.2f\n", b);
    printf("%010.2f\n", b);
}
