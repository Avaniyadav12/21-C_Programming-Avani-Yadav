#include<stdio.h>

int main()
{
  char str[100];
  int i, vowels = 0, digits = 0, spaces = 0;
printf("Enter a string: ");
scanf("%[^\n]", str);
for(i=0; str[i] != '\0'; i++)
{
if(str[i] == 'a' || str[i] == 'e' ||
  str[i] == 'i' || str[i] == 'o' ||
  str[i] == 'u' || str[i] == 'A' ||
  str[i] == 'E' || str[i] == 'I' ||
  str[i] == 'O' || str[i] == 'U')
{
vowels++;
}
else if(str[i] >= '0' && str[i] <= '9')
{
digits++;
}
else if(str[i] == ' ')
{
spaces++;
}
printf("Vowels = %d\n", vowels);
printf("Digits = %d\n", digits);
printf("Spaces = %d\n", spaces);
return 0;
}
