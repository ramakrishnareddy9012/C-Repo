#include<stdio.h>
int main()
{
    int num1, num2;
    long long product;
    scanf("%d %d", &num1, &num2);
    product = (long long)num1 * num2;  
    printf("%lld\n", product);
  return 0;
}