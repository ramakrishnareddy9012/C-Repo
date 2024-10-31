#include<stdio.h>
int main()
{
    int mangoweight,truckweight,bridgecapacity;
    int maxmangoes;
    scanf("%d%d%d",&mangoweight,&truckweight,&bridgecapacity);
    maxmangoes=(bridgecapacity-truckweight)/mangoweight;
    
    printf("%d\n",maxmangoes);
    return 0;
}