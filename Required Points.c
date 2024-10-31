#include<stdio.h>
int main()
{
    int cost, points, attacks;
    scanf("%d %d", &cost, &points);
    attacks=points/cost;
    printf("%d\n",attacks);
    return 0;
}