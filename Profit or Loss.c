#include<stdio.h>
int main()
{
    int costprice, sellingprice;
    scanf("%d %d", &costprice, &sellingprice);
    if(costprice < sellingprice)
    {
        printf("Profit\n");
    }
    else if(costprice > sellingprice)
    {
        printf("Loss\n");
    }
    else
    {
        printf("No Profit and No Loss\n");
    }
    return 0;
}