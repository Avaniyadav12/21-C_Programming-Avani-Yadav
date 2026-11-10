
#include <stdio.h>

// Factorial using iteration
int iterativeFactorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

// Factorial using recursion
int recursiveFactorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0 || n > 12)
    {
        printf("Enter a number between 0 and 12.\n");
    }
    else
    {
        printf("\nFactorial using Iteration = %d\n",
               iterativeFactorial(n));

        printf("Factorial using Recursion = %d\n",
               recursiveFactorial(n));
    }

    return 0;
}
