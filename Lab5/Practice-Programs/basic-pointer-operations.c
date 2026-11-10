
#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    // Pointer initialization
    p = &a;

    printf("Value of a = %d\n", a);

    // Address of a
    printf("Address of a = %p\n", (void *)&a);

    // Address stored in pointer
    printf("Value of p = %p\n", (void *)p);

    // Accessing value using pointer
    printf("Value using pointer = %d\n", *p);

    // Modifying value using pointer
    *p = 50;

    printf("New value of a = %d\n", a);

    return 0;
}
