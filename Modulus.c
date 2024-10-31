#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num2 == 0)
    {
        printf("Error; Division by Zero.");
        return 1;
    }
    printf("%d\n", num1 % num2);
    return 0;
}