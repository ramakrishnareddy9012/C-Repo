#include<stdio.h>
int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    int remaining = N - X;
    printf("%d\n", remaining);
    return 0;
}