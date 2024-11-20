#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int total_cost = 4 * x;
    if(total_cost <= 1000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
