#include <stdio.h>

int main()
{
    int a, b;

    printf("mを入力\n");
    scanf("%d", &a);
    printf("nを入力\n");
    scanf("%d", &b);

    int c = sqrt(a * a + b * b);

    printf("total = %d\n", c);
    return 0;
}
