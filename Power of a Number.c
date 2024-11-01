#include<stdio.h>
int main()
{
    int  base, exponent, modulus;
    scanf("%d %d %d", &base, &exponent, &modulus);
    long long result = 1;
    for(int i = 0; i < exponent; i++)
    {
    result=(result * base) % modulus;

    }
    printf("%d\n",result);
    return 0;
}