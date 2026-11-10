
#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    do
    {
        printf("\n===== MENU-DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                result = a + b;
                printf("Addition = %.2f\n", result);
                break;

            case 2:
                result = a - b;
                printf("Subtraction = %.2f\n", result);
                break;

            case 3:
                result = a * b;
                printf("Multiplication = %.2f\n", result);
                break;

            case 4:
                if(b == 0)
                    printf("Division by zero is not allowed.\n");
                else
                {
                    result = a / b;
                    printf("Division = %.2f\n", result);
                }
                break;

            case 5:
                if((int)b == 0 || a != (int)a || b != (int)b)
                    printf("Modulus requires non-zero integer operands.\n");
                else
                    printf("Modulus = %d\n", (int)a % (int)b);
                break;

            case 6:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
