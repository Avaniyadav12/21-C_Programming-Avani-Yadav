#include<stdio.h>

int main()
{
  int num, choice, i, fact = 1;
printf("Enter a number: ");
scanf("%d", &num);

printf("\n---NUMBER UTILITY TOOLKIT---\n");
printf("1. Check Even or Odd\n");
printf("2. Find Factorial\n");
printf("3. Check Prime Number\n");
printf("4. Reverse Number\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
if(num % 2 == 0)
{
printf("Even Number");
}
else
{
printf("Odd Number");
}
break;

case 2:
if(num<0)
{
printf("Factorial not possible");
}
else
{
for(i=1; i<=num; i++)
{
fact = fact*i;
}
printf("Factorial = %d", fact);
}
break;

case 3:
if(num<=1)
{
printf("Not a Prime Number");
}
else
{
for(i=2; i<num; i++)
{
if(num % i == 0)
{
break;
}
}
if(i == num)
{
printf("Prime Number");
}
else
{
printf("Not a Prime Number");
}
}
break;

case 4:
{
int rev = 0, rem, temp = num;
while(temp != 0)
{
rem = temp % 10;
rev = rev * 10 + rem;
temp = temp / 10;
}
printf("Reverse = %d", rev);
break;
}
default:
printf("Invalid Choice");
}
return 0;
}
