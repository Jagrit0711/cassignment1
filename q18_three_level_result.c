#include <stdio.h>

main()
{
    int a;

    printf("enter marks: ");
    scanf("%d", &a);

    if (a >= 40)
    {
        if (a >= 75)
        {
            printf("passed with distinction\n");
        }
        else
        {
            printf("passed\n");
        }
    }
    else
    {
        printf("failed\n");
    }
}
