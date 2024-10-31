#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, s, area;
    scanf("%lf %lf %lf", &a, &b, &c);
    s=(a+b+c)/2.0;
    if (a+b>c && a+c>b && b+c>a)
    {
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.4lf\n",area);
    }
    else
    {
        printf("0.0000\n");
    }
    return 0;
}