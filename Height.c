#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int height = (x > y) ?  x : y;
    printf("%d\n",height);
    return 0;
}