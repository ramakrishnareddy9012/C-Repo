#include<stdio.h>
int main()
{
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);
    int totalpoints = A + 2 * B;
    if(totalpoints >= X)
    {
        printf("Qualify\n");
    }
    else
    {
        printf("Not Qualify\n");
    }
    return 0;
}