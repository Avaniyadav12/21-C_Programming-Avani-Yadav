
#include <stdio.h>

// Call by Value
void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside Call by Value: a = %d, b = %d\n", a, b);
}

// Call by Reference using pointers
void swapReference(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside Call by Reference: a = %d, b = %d\n",
           *a, *b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // Call by Value
    swapValue(x, y);

    printf("After Call by Value: x = %d, y = %d\n", x, y);

    // Call by Reference
    swapReference(&x, &y);

    printf("After Call by Reference: x = %d, y = %d\n", x, y);

    return 0;
}
