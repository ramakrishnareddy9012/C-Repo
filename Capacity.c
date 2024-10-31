#include<stdio.h>
int main()
{
int tracks, blocks, sectors;
float capacityKB;
scanf("%d %d %d", &tracks, &blocks, &sectors);
capacityKB = 2 * (tracks * blocks * sectors * 512.0) / 1024.0 ;
printf("%.0f KB\n", capacityKB);
return 0;
}