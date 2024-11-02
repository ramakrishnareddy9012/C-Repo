#include<stdio.h>
int main()
{
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);
    int totalcells = (R + E) * C;
    printf("%d\n", totalcells);
    return 0;
}