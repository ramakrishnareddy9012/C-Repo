#include<stdio.h>
int main()
{
    int donations;
    scanf("%d", &donations);
    if(donations <=3)
    {
    printf("BRONZE\n");
    }
    else if(donations <=6)
    {
    printf("SILVER\n");
    }
    else
    {
        printf("GOLD\n");
    }
    return 0;
}