#include <stdio.h>
#include <math.h>

int main()
{
    int money = 1000;
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int change = money - (int)ceil(money / 1000) * 1000;

    printf("必要な1000円札は%d枚です\n", (int)ceil(money / 1000));
    if (change <= 0)
    {
        printf("お釣りはありません\n");
        return 0;
    }
    printf("お釣りは%d円です\n", change);
    for (int n = 0; n < 6; n++)
    {
        printf("%d円玉は%d枚です\n", coin[n], (int)floor(change / coin[n]));
        change = change - ((int)floor(change / coin[n]) * coin[n]);
    }
    return 0;
}
