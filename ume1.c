#include <stdio.h>
#include <math.h>

int main()
{
    int money = 12000;
    printf("必要な1000円札は%d枚です\n", (int)ceil(money / 1000));
    return 0;
}
