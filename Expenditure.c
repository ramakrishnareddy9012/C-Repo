#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int monthlyexpenditure = Y * 30;
    if(X >= monthlyexpenditure)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}