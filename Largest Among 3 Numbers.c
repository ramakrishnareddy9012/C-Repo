#include<stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3 ) : (num2 > num3 ? num2 : num3 );
    printf("%d\n",largest);
    return 0;

}