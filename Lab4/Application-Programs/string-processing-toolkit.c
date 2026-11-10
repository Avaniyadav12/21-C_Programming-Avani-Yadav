
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], rev[100];
    int i, length, vowels = 0;
    int digits = 0, spaces = 0, choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do
    {
        printf("\n----- STRING PROCESSING TOOLKIT -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Count Vowels\n");
        printf("4. Count Digits\n");
        printf("5. Count Spaces\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        length = strlen(str);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", length);
                break;

            case 2:
                for(i = 0; i < length; i++)
                {
                    rev[i] = str[length - 1 - i];
                }
                rev[length] = '\0';

                printf("Reverse = %s\n", rev);
                break;

            case 3:
                vowels = 0;

                for(i = 0; str[i] != '\0'; i++)
                {
                    char ch = tolower(str[i]);

                    if(ch == 'a' || ch == 'e' ||
                       ch == 'i' || ch == 'o' ||
                       ch == 'u')
                    {
                        vowels++;
                    }
                }

                printf("Vowels = %d\n", vowels);
                break;

            case 4:
                digits = 0;

                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= '0' && str[i] <= '9')
                    {
                        digits++;
                    }
                }

                printf("Digits = %d\n", digits);
                break;

            case 5:
                spaces = 0;

                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] == ' ')
                    {
                        spaces++;
                    }
                }

                printf("Spaces = %d\n", spaces);
                break;

            case 6:
                printf("Uppercase = ");

                for(i = 0; str[i] != '\0'; i++)
                {
                    printf("%c", toupper(str[i]));
                }

                printf("\n");
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}
