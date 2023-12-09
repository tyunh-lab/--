#include <stdio.h>

int main()
{
    int n = 100, m = 10;

    // printf("mを入力\n");
    // scanf("%d", &m);
    // printf("nを入力\n");
    // scanf("%d", &n);

    if (m >= 0 && n >= m)
    {
        // n * (n + 1) / 2 - (m - 1) * m / 2
        //(n^2 + n - m^2 - m) / 2
        //(n^2 - m^2 + n-m) / 2
        //{(n + m)(n - m)+ n-m} / 2
        //(n - m){(n + m) + 1} / 2
        int total = (n - m) * (n + m + 1) / 2;
        printf("total = %d\n", total);
    }
    else
    {
        printf("mとnの値が不正です\n");
    }
    return 0;
}
