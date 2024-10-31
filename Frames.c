#include<stdio.h>
int main()
{
    int length, width,costpercm;
    scanf("%d %d %d", &length, &width, &costpercm);
    int perimeter=2* (length+width);
    int totalcost= perimeter*costpercm;
    printf("%d\n",totalcost);
    return 0;
}