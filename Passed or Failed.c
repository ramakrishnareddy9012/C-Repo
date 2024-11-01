#include<stdio.h>
int main()
{
    int subjects[5];
    int passed = 1;
    for(int i = 0; i < 5; i++)
    {
    scanf("%d", &subjects[i]);
    if(subjects[i] <= 34)
    {
        passed = 0;
    }
    }
    printf("%s\n",passed ? "PASSED" : "FAILED");
    return 0;
}