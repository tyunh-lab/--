#include <stdio.h>

int main()
{
    int a;

    printf("aを入力\n");
    scanf("%d", &a);

    printf("%.2d\n", a - 128);
    // 絶対値が15以上ならON、そうでなければOFF
    if (a - 128 >= 15 || a - 128 <= -15)
    {
        printf("ON\n");
    }
    else
    {
        printf("OFF\n");
    }
    return 0;
}