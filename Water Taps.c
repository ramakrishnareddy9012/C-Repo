#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d",&x, &y);
    int combinedrate = (x * y) / (x + y);
    printf("%d\n", combinedrate);
    return 0;
}