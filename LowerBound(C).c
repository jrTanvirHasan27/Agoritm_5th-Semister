#include<stdio.h>
#include<math.h>

int Binary(int arr[], int low, int high, int X)
{
    int mid = (high+low)/2;

    while(low <= high)
    {
        if(arr[mid] == X)
        {
            return -1;
        }
        else if(arr[mid] > X)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

        mid = (high+low)/2;
    }

    return 0;
}

int lowerB(int arr[], int low, int high, int X)
{
    int mid;

    while(low < high)
    {
        mid = low + (high-low)/2;

        if(X <= arr[mid])
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}

int main()
{
    int n, i, X;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);

    int S = Binary(arr, 0, n-1, X);

    if(S == -1)
    {
        printf("%d\n", S);
    }
    else
    {
        int lb = lowerB(arr, 0, n-1, X);

        if(abs(arr[lb]-X) <= abs(arr[lb-1]-X))
        {
            printf("%d\n", arr[lb]);
        }
        else
        {
            printf("%d\n", arr[lb-1]);
        }
    }

    return 0;
}
