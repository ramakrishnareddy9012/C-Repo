#include<stdio.h>
int main()
{
    int average, w1, w2, w3;
    scanf("%d %d %d", &average,&w1,&w2);
    w3 = (average * 3) - (w1+w2);
    printf("%d\n" ,w3);
    return 0;
}