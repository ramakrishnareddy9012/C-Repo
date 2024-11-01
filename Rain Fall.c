#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if(X < 0 || X > 1000)
    {
        printf("Invalid input");
    }
     else if (X<3)
     {
     printf("LIGHT\n");
     }
     else if (X >= 3 && X < 7)
     {
        printf("MODERATE\n");
     }
     else
     {
        printf("HEAVY\n");
     }
     return 0;
}