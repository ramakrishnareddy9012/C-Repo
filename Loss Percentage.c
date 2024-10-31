#include<stdio.h>
int main()
{
    double cp, sp, losspercentage;
    scanf("%lf %lf", &cp, &sp);
    losspercentage=((cp-sp)/cp)*100;
    printf("%.2lf\n",losspercentage);
    return 0;
}