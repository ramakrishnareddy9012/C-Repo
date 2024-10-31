#include<stdio.h>
int main()
{
    double cp, sp, profitpercentage;
    scanf("%lf %lf", &cp, &sp);
    profitpercentage=((sp-cp)/cp)*100;
    printf("%.2lf\n",profitpercentage);
    return 0;
}