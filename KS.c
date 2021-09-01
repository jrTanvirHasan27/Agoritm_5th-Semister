#include<stdio.h>
long long int max(long long int a, long long int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int i;

    long long int N, KS;
    scanf("%lld %lld", &N, &KS);

  long long int wt[N], v[N];
    wt[0]=0;
    v[0]=0;

    for(i=1; i<=N; i++)
    {
        scanf("%lld %lld", &wt[i], &v[i]);
    }

   long long int k[N+1][KS+1];

    for(i=0; i<=N; i++)
    {
        for(int w=0; w<=KS; w++)
        {
            if(i==0 || w==0)
            {
                k[i][w] = 0;
            }
            else if(wt[i] <= w)
            {
                k[i][w] = max(v[i] + k[i-1][w-wt[i]], k[i-1][w]);
            }
            else
            {
                k[i][w] = k[i-1][w];
            }
        }
    }

    printf("%lld\n", k[N][KS]);

    return(0);
}
