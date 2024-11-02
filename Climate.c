#include<stdio.h>
int main()
{
    int temperature;
    scanf("%d", &temperature);
    if(temperature > 20)
    {
        printf("HOT\n");
    }
    else
    {
        printf("COLD\n");
    }
    return 0;
}