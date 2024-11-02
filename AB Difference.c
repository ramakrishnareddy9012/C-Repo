#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int correctanswer = A + B;
    int vijayanswer = A * B;
    int difference = (vijayanswer > correctanswer) ? (vijayanswer - correctanswer) : (correctanswer - vijayanswer);
    printf("%d\n", difference);
    return 0;           
}