
#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n = 0, choice, i, search, found;
    float total;

    do
    {
        printf("\n===== PRODUCT INVENTORY SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Search Product\n");
        printf("4. Calculate Inventory Value\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("Inventory is full!\n");
                    break;
                }

                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf(" %49[^\n]", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                if(p[n].quantity < 0 || p[n].price < 0)
                {
                    printf("Invalid quantity or price!\n");
                    break;
                }

                n++;

                printf("Product added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\n===== PRODUCT DETAILS =====\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nProduct %d\n", i + 1);
                        printf("Product ID: %d\n", p[i].id);
                        printf("Product Name: %s\n", p[i].name);
                        printf("Quantity: %d\n", p[i].quantity);
                        printf("Price: Rs. %.2f\n", p[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == search)
                    {
                        printf("\nProduct Found!\n");
                        printf("Product ID: %d\n", p[i].id);
                        printf("Product Name: %s\n", p[i].name);
                        printf("Quantity: %d\n", p[i].quantity);
                        printf("Price: Rs. %.2f\n", p[i].price);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product not found!\n");

                break;

            case 4:
                total = 0;

                for(i = 0; i < n; i++)
                {
                    total = total + (p[i].quantity * p[i].price);
                }

                printf("Total Inventory Value = Rs. %.2f\n", total);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}
