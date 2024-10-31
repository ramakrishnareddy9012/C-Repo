#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int Sum = num1 + num2;
    int Difference = num1 - num2;
    int Product = num1 * num2;
    int Quotient = num1 / num2;
    int Remainder = num1 % num2;
    
    printf("Sum:%d\n", Sum);
    printf("Difference:%d\n", Difference);
    printf("Product:%d\n", Product);
    printf("Quotient:%d\n", Quotient);
    printf("Remainder:%d\n", Remainder);
    
    return 0;
}