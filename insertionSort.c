#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[], int n)
{
    int i, j, temp;

    for(i=1; i<n; i++)
    {
        temp = arr[i];
        j=i-1;

        while(temp<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = temp;
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

    insertionsort(arr,n);
    
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

}
