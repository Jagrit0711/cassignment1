#include <stdio.h>

main()
{
    float a;

    printf("enter a floating number: ");
    scanf("%f", &a);

    printf("%%f = %f\n", a);
    printf("%%2f = %2f\n", a);
    printf("%%10.2f = %10.2f\n", a);
    printf("%%010.2f = %010.2f\n", a);
}
