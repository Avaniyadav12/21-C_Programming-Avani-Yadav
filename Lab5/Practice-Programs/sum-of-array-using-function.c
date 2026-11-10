
#include <stdio.h>

int sum(int arr[], int n)
{
    int i, total = 0;

    for(i = 0; i < n; i++)
    {
        total = total + arr[i];
    }

    return total;
}

int main()
{
    int arr[100], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = sum(arr, n);

    printf("Sum of array elements = %d", result);

    return 0;
}
