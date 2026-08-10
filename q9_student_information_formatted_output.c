#include <stdio.h>

main()
{
    int a;
    char name[30];
    float m;

    printf("enter roll number: ");
    scanf("%d", &a);

    printf("enter name: ");
    scanf("%s", name);

    printf("enter marks: ");
    scanf("%f", &m);

    printf("\nroll number: %d\n", a);
    printf("name: %-20s\n", name);
    printf("marks: %8.2f\n", m);
}
