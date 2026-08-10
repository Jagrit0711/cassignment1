#include <stdio.h>

main()
{
    int a, b, c;
    float p1, p2, p3;
    float t1, t2, t3, total;

    printf("enter price and quantity of product 1: ");
    scanf("%f %d", &p1, &a);

    printf("enter price and quantity of product 2: ");
    scanf("%f %d", &p2, &b);

    printf("enter price and quantity of product 3: ");
    scanf("%f %d", &p3, &c);

    t1 = p1 * a;
    t2 = p2 * b;
    t3 = p3 * c;
    total = t1 + t2 + t3;

    printf("\nproduct 1 total = %.2f\n", t1);
    printf("product 2 total = %.2f\n", t2);
    printf("product 3 total = %.2f\n", t3);
    printf("final total = %.2f\n", total);
}
