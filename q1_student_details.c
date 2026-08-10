#include <stdio.h>

main()
{
    int a, b;
    float c;

    printf("enter roll number: ");
    scanf("%d", &a);

    printf("enter age: ");
    scanf("%d", &b);

    printf("enter marks: ");
    scanf("%f", &c);

    printf("\nstudent details\n");
    printf("roll number: %d\n", a);
    printf("age: %d\n", b);
    printf("marks: %.2f\n", c);
}
