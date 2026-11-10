
#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int square(int n);
int cube(int n);
int factorial(int n);
int prime(int n);

int main()
{
    int choice, a, b, n;

    do
    {
        printf("\n===== MATHEMATICAL UTILITY LIBRARY =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Cube\n");
        printf("7. Factorial\n");
        printf("8. Prime Number Check\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Addition = %d\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Subtraction = %d\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Multiplication = %d\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if(b == 0)
                    printf("Division by zero is not allowed.\n");
                else
                    printf("Division = %.2f\n", divide(a, b));
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Square = %d\n", square(n));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Cube = %d\n", cube(n));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial = %d\n", factorial(n));
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(prime(n))
                    printf("%d is a Prime Number.\n", n);
                else
                    printf("%d is not a Prime Number.\n", n);
                break;

            case 9:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 9);

    return 0;
}

// Function definitions

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}
