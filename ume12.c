#include <stdio.h>

int main()
{
    int a;

    printf("aを入力\n");
    scanf("%d", &a);

    printf("%.2d\n", a - 128);
    return 0;
}