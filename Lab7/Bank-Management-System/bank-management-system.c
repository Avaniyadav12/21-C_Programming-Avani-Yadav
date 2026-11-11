
#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    do
    {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Account Details\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("Account limit reached!\n");
                    break;
                }

                printf("Enter Account Number: ");
                scanf("%d", &b[n].accountNo);

                printf("Enter Account Holder Name: ");
                scanf(" %49[^\n]", b[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &b[n].balance);

                if(b[n].balance < 0)
                {
                    printf("Invalid balance! Account not created.\n");
                    break;
                }

                n++;

                printf("Account created successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No accounts available.\n");
                }
                else
                {
                    printf("\n----- ACCOUNT DETAILS -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nAccount Number: %d\n", b[i].accountNo);
                        printf("Account Holder: %s\n", b[i].name);
                        printf("Balance: Rs. %.2f\n", b[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accountNo == accNo)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);

                        if(amount <= 0)
                        {
                            printf("Invalid deposit amount!\n");
                        }
                        else
                        {
                            b[i].balance += amount;
                            printf("Money deposited successfully!\n");
                            printf("Updated Balance: Rs. %.2f\n",
                                   b[i].balance);
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account not found!\n");

                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accountNo == accNo)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);

                        if(amount <= 0)
                        {
                            printf("Invalid withdrawal amount!\n");
                        }
                        else if(amount > b[i].balance)
                        {
                            printf("Insufficient balance!\n");
                        }
                        else
                        {
                            b[i].balance -= amount;
                            printf("Withdrawal successful!\n");
                            printf("Remaining Balance: Rs. %.2f\n",
                                   b[i].balance);
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account not found!\n");

                break;

            case 5:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].accountNo == accNo)
                    {
                        printf("\nAccount Holder: %s\n", b[i].name);
                        printf("Current Balance: Rs. %.2f\n",
                               b[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account not found!\n");

                break;

            case 6:
                printf("Thank you for using Bank Management System!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 6);

    return 0;
}
