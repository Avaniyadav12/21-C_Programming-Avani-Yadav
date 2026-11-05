#include<stdio.h>

int main()
{
  int i = 1;
do
{
int j = 1;
do
{
printf("%d", j);
j++;
}
  while(j<=3);
  printf("\n");
  i++;
}
  while(i<=3);
return 0;
}
