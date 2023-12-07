#include <stdio.h>
#include <math.h>

int main()
{
    int money = 17518;
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int bill[3] = {10000, 5000, 1000};
    int rest = money;

    for (int n = 0; n < 3; n++)
    {
        printf("必要な%d円札は%d枚です\n",bill[n], (int)ceil(rest / bill[n]));
        rest = rest - ((int)floor(rest / bill[n]) * bill[n]);
    }


    if (rest <= 0)
    {
        printf("お釣りはありません\n");
        return 0;
    }
    printf("お釣りは%d円です\n", rest);
    for (int n = 0; n < 6; n++)
    {
        printf("%d円玉は%d枚です\n", coin[n], (int)floor(rest / coin[n]));
        rest = rest - ((int)floor(rest / coin[n]) * coin[n]);
    }
    return 0;
}
