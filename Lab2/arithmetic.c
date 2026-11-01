#include<stdio.h>

int main()
{
  int a, b, sum, sub, multi, division, mod;
  printf("Enter value of a: ");
  scanf("%d", &a);
  printf("Enter value of b: ");
  scanf("%d", &b);

  sum = a+b;
  sub = a-b;
  multi = a*b;
  division = a/b;
  mod = a%b;

  printf("Sum = %d\n", sum);
  printf("Sub = %d\n", sub);
  printf("Multi = %d\n", multi);
  printf("Division = %d\n", division);
  printf("Mod = %d\n", mod);

  return 0;
}
