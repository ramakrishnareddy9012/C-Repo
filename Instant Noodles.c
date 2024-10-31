#include<stdio.h>
int main()
{
    int stoves, minutes, customers;
    scanf("%d %d", &stoves, &minutes);
     customers = stoves * minutes;
     printf("%d\n", customers);
     return 0;
}