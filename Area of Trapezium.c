#include<stdio.h>
int main()
{
float base1,base2,height;
float area;
scanf("%f",&base1);
scanf("%f",&base2);
scanf("%f",&height);
area=0.5*(base1+base2)*height;
printf("%.4f\n",area);
return 0;
}
