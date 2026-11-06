#include<stdio.h>

int main()
{
  int num,i,count = 0;
printf("Enter a number: ");
scanf("%d", &num);
for(i=1; i<=num; i++)
{
if(num % i==0)
{
count++;
}
}
if(count==2)
{
printf("It is a Prime Number.");
}
else
{
printf("It is not a Prime Number.");
}
return 0;
}
