
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int choice, n = 0, i, search, found;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student Record\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("Record limit reached!\n");
                    break;
                }

                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Student Name: ");
                scanf(" %49[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;

                printf("Student record added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No student records available.\n");
                }
                else
                {
                    printf("\n----- STUDENT RECORDS -----\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nRoll Number: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == search)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student record not found.\n");
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
