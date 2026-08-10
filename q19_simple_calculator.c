#include <stdio.h>

main()
{
    int a, b, c;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("enter choice (1 for addition, 2 for subtraction, 3 for multiplication): ");
    scanf("%d", &c);

    if (c == 1)
    {
        printf("addition = %d\n", a + b);
    }
    else if (c == 2)
    {
        printf("subtraction = %d\n", a - b);
    }
    else if (c == 3)
    {
        printf("multiplication = %d\n", a * b);
    }
    else
    {
        printf("invalid choice\n");
    }
}
