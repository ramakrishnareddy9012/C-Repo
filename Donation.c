#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;  
    }
      int donation = (Y - X);
      printf("%d\n",donation);
      return 0;
}