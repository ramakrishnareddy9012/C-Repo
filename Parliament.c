#include<stdio.h>
int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    if(X >=  (N + 1) / 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}