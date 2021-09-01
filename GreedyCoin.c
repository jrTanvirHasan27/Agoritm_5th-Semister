#include<stdio.h>

int main()
{
    int amount, i, NumOfCoin;

    scanf("%d %d", &amount, &NumOfCoin);

    int Coins[NumOfCoin], times[NumOfCoin];

    for(i=0; i<NumOfCoin; i++)
    {
        times[i] = 0;
        scanf("%d", &Coins[i]);
    }

    for(i = NumOfCoin-1; i>=0; i--)
    {
        // printf("Impossible for greedy approach.\n");
        if(amount > 0)
        {
            times[i] = amount / Coins[i];
            amount = amount % Coins[i];
            //printf("%d ", amount);
        }
    }

    if(amount > 0)
     {
         printf("Impossible for greedy approach.\n");
     }
     else
     {
         for(i=0; i<NumOfCoin; i++)
         {
             if(times[i] != 0)
             {
                  printf("I have taken %d coin %d times.\n", Coins[i], times[i]);
             }
         }
     }

    return 0;
}
