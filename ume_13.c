#include <stdio.h>

int main()
{
    int a;

    printf("aを入力\n");
    scanf("%d", &a);

    printf("%.2f\n", a - 128);
    if (a - 128 >= 15)
    {
        printf("ON\n");
    }
    else if (a - 128 < 15)
    {
        printf("OFF\n");
    }
    return 0;
}