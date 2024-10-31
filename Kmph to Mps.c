#include<stdio.h>
int main()
{
    int speedKmph;
    float speedMps;
    scanf("%d", &speedKmph);
    speedMps = (speedKmph * 1000.0) / 3600.0;
    printf("%.2f\n", speedMps);
    return 0;
}