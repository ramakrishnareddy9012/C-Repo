#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if(X % 2 == 0 && X > 2)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}