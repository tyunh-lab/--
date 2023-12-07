#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    
    printf("aを入力\n");
    scanf("%d", &a);
    printf("bを入力\n");
    scanf("%d", &b);

    double c = sqrt(a * a + b * b);
    double height = (double)(a * b) / c;

    printf("%.2f\n", height);
    return 0;
}