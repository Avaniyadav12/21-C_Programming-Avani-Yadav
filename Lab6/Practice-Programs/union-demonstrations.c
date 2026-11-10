
#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    printf("Size of union: %zu bytes\n", sizeof(d));

    d.i = 10;
    printf("\nInteger value: %d\n", d.i);

    d.f = 25.5;
    printf("Float value: %.2f\n", d.f);

    d.ch = 'A';
    printf("Character value: %c\n", d.ch);

    return 0;
}
