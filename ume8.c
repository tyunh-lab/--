#include <stdio.h>

int main()
{
    int n, m;

    printf("mを入力\n");
    scanf("%d", &m);
    printf("nを入力\n");
    scanf("%d", &n);

    int total = n * (n + 1) / 2 - (m - 1) * m / 2;

    printf("total = %d\n", total);
    return 0;
}
