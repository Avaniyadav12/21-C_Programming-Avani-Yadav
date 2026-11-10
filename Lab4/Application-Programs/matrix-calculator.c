
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, r, col, choice;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Transpose");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nMatrix Addition:\n");
            for(i = 0; i < r; i++)
            {
                for(j = 0; j < col; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\nMatrix Subtraction:\n");
            for(i = 0; i < r; i++)
            {
                for(j = 0; j < col; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            if(r != col)
            {
                printf("Multiplication not possible for these matrices.");
            }
            else
            {
                printf("\nMatrix Multiplication:\n");
                for(i = 0; i < r; i++)
                {
                    for(j = 0; j < col; j++)
                    {
                        c[i][j] = 0;
                        for(k = 0; k < col; k++)
                        {
                            c[i][j] += a[i][k] * b[k][j];
                        }
                        printf("%d ", c[i][j]);
                    }
                    printf("\n");
                }
            }
            break;

        case 4:
            printf("\nTranspose of First Matrix:\n");
            for(i = 0; i < col; i++)
            {
                for(j = 0; j < r; j++)
                {
                    printf("%d ", a[j][i]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
