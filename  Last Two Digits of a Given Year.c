#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    printf("%02d\n", year % 100);
    return 0;
}