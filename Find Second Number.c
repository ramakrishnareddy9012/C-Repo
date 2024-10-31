#include<stdio.h>
int main()
{
    int average, firstnumber, secondnumber;
    scanf("%d %d", &average, &firstnumber);
    secondnumber = (2 * average) - firstnumber;
    printf("%d\n", secondnumber);
    return 0;
}