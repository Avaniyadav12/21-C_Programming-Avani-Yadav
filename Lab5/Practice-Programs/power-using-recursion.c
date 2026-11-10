
#include <stdio.h>

int power(int base, int exp)
{
    if(exp == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}

int main()
{
    int base, exp, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    if(exp < 0)
    {
        printf("Please enter a non-negative exponent.");
    }
    else
    {
        result = power(base, exp);

        printf("%d raised to power %d = %d",
               base, exp, result);
    }

    return 0;
}
