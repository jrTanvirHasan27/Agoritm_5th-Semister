#include<stdio.h>

void BinarySearch(int arr[], int low, int high, int valueOfSearch)
{
    int mid = (low+high)/2;
    while (low <= high)
    {
        if(arr[mid] == valueOfSearch)
        {
            printf("%d found at location %d\n", valueOfSearch, mid+1);
            break;
        }
        else if(arr[mid] < valueOfSearch)
        {
            low = mid + 1;
        }
        else{
             high = mid - 1;
        }
        mid = (low + high)/2;
    }
    if(low > high)
        printf("Not found! %d isn't present in the list.n", valueOfSearch);
}

int main()
{
    int i, N;
    scanf("%d", &N);

    int arr[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;

    printf("The value you want to search: ");
    scanf("%d", &search);

    BinarySearch(arr,0, N-1, search);

    return 0;
}
