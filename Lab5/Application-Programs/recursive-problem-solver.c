
#include <stdio.h>

// Function declarations
int factorial(int n);
int sum(int n);
int power(int base, int exp);
int fibonacci(int n);
int gcd(int a, int b);

int main()
{
    int choice, n, a, b, i;

    do
    {
        printf("\n===== RECURSIVE PROBLEM SOLVER =====\n");
        printf("1. Factorial\n");
        printf("2. Sum of Natural Numbers\n");
        printf("3. Power of a Number\n");
        printf("4. Fibonacci Series\n");
        printf("5. GCD of Two Numbers\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial = %d\n", factorial(n));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n < 0)
                    printf("Enter a non-negative number.\n");
                else
                    printf("Sum = %d\n", sum(n));
                break;

            case 3:
                printf("Enter base and exponent: ");
                scanf("%d %d", &a, &b);

                if(b < 0)
                    printf("Enter a non-negative exponent.\n");
                else
                    printf("Power = %d\n", power(a, b));
                break;

            case 4:
                printf("Enter number of terms: ");
                scanf("%d", &n);

                if(n < 1 || n > 40)
                    printf("Enter terms between 1 and 40.\n");
                else
                {
                    printf("Fibonacci Series: ");
                    for(i = 0; i < n; i++)
                        printf("%d ", fibonacci(i));

                    printf("\n");
                }
                break;

            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if(a < 0 || b < 0 || (a == 0 && b == 0))
                    printf("Enter non-negative numbers, not both zero.\n");
                else
                    printf("GCD = %d\n", gcd(a, b));
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Recursive function for factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

// Recursive function for sum
int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

// Recursive function for power
int power(int base, int exp)
{
    if(exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

// Recursive function for Fibonacci
int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function for GCD
int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}
