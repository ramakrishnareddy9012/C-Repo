#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int notesneeded = (n * 2000) / 500;
    printf("%d\n", notesneeded);
    return 0;
}