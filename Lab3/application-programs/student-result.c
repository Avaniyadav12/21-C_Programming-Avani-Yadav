#include<stdio.h>

int main()
{
  int roll, m1, m2, m3, m4, m5;
  int total;
  float percentage;
printf("Enter Roll Number: ");
scanf("%d", &roll);

printf("Enter marks of 5 subjects:\n");
scanf("%d", &m1);
scanf("%d", &m2);
scanf("%d", &m3);
scanf("%d", &m4);
scanf("%d", &m5);
total = m1 + m2 + m3 + m4 + m5;
percentage = total / 5.0;

printf("\n---STUDENT RESULT---\n");
printf("Roll Number = %d\n", roll);
printf("Total Marks = %d\n", total);
printf("Percentage = %2f%%\n", percentage);

if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
{
printf("Result = PASS");
}
else
{
printf("Result = FAIL");
}
return 0;
}
