#include<stdio.h>
#include<math.h>
int main()
{
   double x, y, hypotenuse;
   scanf("%lf %lf",&x,&y);
   hypotenuse=sqrt(x*x+y*y);
   printf("%.2lf\n",hypotenuse);
   return 0;
}