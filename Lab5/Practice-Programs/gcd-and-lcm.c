
#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b)
{
    int i, result = 1;

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }

    return result;
}

// Function to calculate LCM
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, g, l;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a <= 0 || b <= 0)
    {
        printf("Please enter positive numbers.");
    }
    else
    {
        g = gcd(a, b);
        l = lcm(a, b);

        printf("GCD = %d\n", g);
        printf("LCM = %d\n", l);
    }

    return 0;
}
