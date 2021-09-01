#include<stdio.h>
#include<stdlib.h>

void Merge(int arr[], int low, int high, int low1, int high1)
{
    int temp[50], k=0, i = low, j = low1;

    while(i<=high && j<=high1)
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

     while(i <= high)
     {
        temp[k++] = arr[i++];
     }

     while(j <= high1)
     {
        temp[k++] = arr[j++];
     }

    for(i=low, j=0; i<=high1; i++, j++)
    {
        arr[i] = temp[j];
    }
}

void MergeSort(int arr[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low+high)/2;

        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, mid, mid+1, high);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    MergeSort(arr, 0, n-1);

    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
