#include <stdio.h>

main()
{
    float r, area, cir;
    float pi = 3.14;

    printf("enter radius: ");
    scanf("%f", &r);

    area = pi * r * r;
    cir = 2 * pi * r;

    printf("area = %.2f\n", area);
    printf("circumference = %.2f\n", cir);
}
