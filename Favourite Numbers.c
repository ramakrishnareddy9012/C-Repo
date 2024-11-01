#include<stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    if(A % 14 == 0)
    {
    printf("Alice\n");
    }
    else if(A % 9 == 0 && A % 2 != 0)
    {
        printf("Bob\n");
    }
    else
    {
        printf("Charlie\n");
    }
    return 0;
}
    
