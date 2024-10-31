#include<stdio.h>
int main()
{
int base, height;
float area;
scanf("%d %d", &base, &height);
area = 0.5 * base * height;
printf("%d\n", (base*height/2));
return 0;
}