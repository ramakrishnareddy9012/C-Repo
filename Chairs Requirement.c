#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int extra_chairs = (X > Y) ? X - Y : 0;
    printf("%d\n",extra_chairs);
    return 0;
}