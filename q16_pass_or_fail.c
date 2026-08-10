#include <stdio.h>

main()
{
    int a;

    printf("enter marks: ");
    scanf("%d", &a);

    if (a >= 40)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
}
