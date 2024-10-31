#include<stdio.h>
int main()
{
    int fiverupeecoins, tenrupeecoins, choclatecost;
    int totalamount, maxchoclates;
    scanf("%d",&fiverupeecoins);
    scanf("%d",&tenrupeecoins);
    scanf("%d",&choclatecost);
    totalamount=(fiverupeecoins*5)+(tenrupeecoins*10);
    maxchoclates=totalamount/choclatecost;
    printf("%d\n",maxchoclates);
    return 0;
}