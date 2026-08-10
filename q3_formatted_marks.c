#include <stdio.h>

main()
{
    int a, b, c, d, e;
    float total, per;

    printf("enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    per = (total / 500.0) * 100;

    printf("\ntotal marks = %.2f\n", total);
    printf("percentage = %.2f%%\n", per);
}
