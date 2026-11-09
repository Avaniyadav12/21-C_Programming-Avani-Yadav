#include<stdio.h>

int main()
{
  int choice;
  int balance = 5000, amount;
do
{
printf("\n---ATM MENU---\n");
printf("1. Check Balance\n");
printf("2. Depposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
printf("Balance = %d", balance);
break;

case 2:
printf("Enter amount: ");
scanf("%d", &amount);
if(amount>0)
{
balance = balance + amount;
printf("Deposit Successful");
}
else
  printf("Invalid Amount");
break;

case 3:
printf("Enter amount: ");
scanf("%d", &amount);
if(amount>0 && amount<=balance)
{
balance = balance - amount;
printf("Withdrawal Successful");
}
else
  printf("Invalid Amount");
break;

case 4:
printf("Thank You!");
break;

default:
printf("Invalid Choice");
}
}while(choice != 4);
return 0;
}
