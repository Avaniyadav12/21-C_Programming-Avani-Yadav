
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp, key;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Searching before sorting
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element found before sorting at position %d\n", i + 1);
    }
    else
    {
        printf("Element not found before sorting\n");
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sorting:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Searching after sorting
    found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\nElement found after sorting at position %d\n", i + 1);
    }
    else
    {
        printf("\nElement not found after sorting\n");
    }

    return 0;
}
