
#include <stdio.h>
#include <string.h>

// User-defined function to find length
int myLength(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

// User-defined function to copy string
void myCopy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

// User-defined function to reverse string
void myReverse(char str[])
{
    int i, j;
    char temp;

    j = strlen(str) - 1;

    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str1[100], str2[100], copy[100];
    char concat[200], reverse[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    // Library functions
    printf("\n--- LIBRARY FUNCTIONS ---\n");

    printf("Length = %d\n", strlen(str1));

    strcpy(copy, str1);
    printf("Copy = %s\n", copy);

    printf("Comparison = %d\n", strcmp(str1, str2));

    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenation = %s\n", concat);

    // User-defined functions
    printf("\n--- USER-DEFINED FUNCTIONS ---\n");

    printf("Length = %d\n", myLength(str1));

    myCopy(copy, str1);
    printf("Copy = %s\n", copy);

    strcpy(reverse, str1);
    myReverse(reverse);
    printf("Reverse = %s\n", reverse);

    return 0;
}
