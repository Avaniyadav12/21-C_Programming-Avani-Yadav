#include<stdio.h>

int main()
{
  int arr[5], i, sum = 0;
  float average;
printf("Enter 5 elements:\n");
for(i=0; i<5; i++)
{
scanf("%d", &arr[i]);
sum = sum + arr[i];
}
average = sum / 5.0;
printf("Sum = %d\n", sum);
printf("Average = %2f", average);
return 0;
}
