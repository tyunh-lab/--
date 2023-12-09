#include <stdio.h>

int main()
{
    int n ;
    printf("nを入力\n");
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    printf("total = %d\n", total);
    return 0;
}
