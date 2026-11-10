
#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, search, found;

    do
    {
        printf("\n===== LIBRARY BOOK MANAGEMENT =====\n");
        printf("1. Add Book Details\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("Book storage is full!\n");
                    break;
                }

                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %49[^\n]", b[n].title);

                printf("Enter Author Name: ");
                scanf(" %49[^\n]", b[n].author);

                printf("Enter Book Price: ");
                scanf("%f", &b[n].price);

                n++;

                printf("Book added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\n===== BOOK DETAILS =====\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                        printf("Price: Rs. %.2f\n", b[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == search)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                        printf("Price: Rs. %.2f\n", b[i].price);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found!\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
