#include<stdio.h>
int main()
{
int X, Y, H;
scanf("%d %d %d",&X, &Y, &H);
int totalcharge = X + (H - 1) * Y;
  printf("%d\n",totalcharge);
  return 0;
}