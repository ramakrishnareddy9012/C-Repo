#include<stdio.h>
int main()
{
    int X1, Y1, X2, Y2;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    int totalcost1 = X1 + Y1;
    int totalcost2 = X2 + Y2;
    printf("%d\n", (totalcost1 < totalcost2) ? totalcost1 : totalcost2);
    return 0;
}