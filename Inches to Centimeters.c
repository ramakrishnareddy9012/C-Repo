#include<stdio.h>
int main()
{
    int heightinches;
    float heightcentimeters;
    scanf("%d", &heightinches);
    heightcentimeters = heightinches * 2.54;
    printf("%.2f\n", heightcentimeters);
    return 0;
}