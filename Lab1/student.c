#include<stdio.h>

int main()
{
  int rollNo;
  char name[50];
  float marks;

  printf("Enter Student Roll Number: ");
  scanf("%d", &rollNo);

  printf("Enter Student Name: ");
  scanf("%49s", name);

  printf("Enter Student Marks: ");
  scanf("%f", &marks);

  printf("\n--- Student Details ---\n");
  printf("Roll Number: %d\n", rollNo);
  printf("Name: %s\n", name);
  printf("Marks: %2f\n", marks);

  return 0;
}
