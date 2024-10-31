#include<stdio.h>
#include<math.h>
int main()
{
    double P, R, T, CI, amount;
    scanf("%lf %lf %lf", &P, &R, &T);
    amount= P * pow((1+(R / 100.0)), T);
    CI=amount-P;
    printf("%.2f\n",CI);
    return 0;
}