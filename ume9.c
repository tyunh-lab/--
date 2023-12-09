#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("mを入力\n");
    scanf("%d", &a);
    printf("nを入力\n");
    scanf("%d", &b);

    double c = sqrt(a * a + b * b);

    printf("total = %f\n", c);
    return 0;
}
