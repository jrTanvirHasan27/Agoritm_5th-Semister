#include<stdio.h>
#include<stdlib.h>

void selectionsort(int arr[], int n)
{
    int i, j, position, temp;

    for (i = 0; i < n-1; i++) // finding minimum element (n-1) times
    {
        position = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[position] > arr[j])
                position = j;
        }
        if (position != i)
        {
            temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }
}

int main()
{
        int n, arr[1000], i;

        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        selectionsort(arr,n);

        for(i=0; i<n; i++)
        {
            printf("%d\n", arr[i]);
        }

    return 0;
}
