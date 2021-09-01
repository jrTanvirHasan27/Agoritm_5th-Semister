#include<stdio.h>
int main()
{
    int arr[100], i, j, n, swap;

    printf("Numbers of elements in the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }

    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
