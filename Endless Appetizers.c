#include<stdio.h>
int main()
{
    int X, Y, R;
    scanf("%d %d %d", &X, &Y, &R);
    int extrasticks = R/30;
    int totalsticks = X + extrasticks;
    int plates = (totalsticks + Y - 1)/Y;
    printf("%d\n",plates);
    return 0;
}