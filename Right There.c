#include<stdio.h>
int main()
{
    int numGuests, hallCapacity;
    scanf("%d %d", &numGuests, &hallCapacity);
    if(numGuests <= hallCapacity)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}