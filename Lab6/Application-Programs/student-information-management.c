
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
    int n = 0, choice, i, searchRoll, found;
    float total, average;

    do
    {
        printf("\n===== STUDENT INFORMATION SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(n >= 100)
                {
                    printf("Student limit reached!\n");
                    break;
                }

                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Student Name: ");
                scanf(" %49[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                if(s[n].marks < 0 || s[n].marks > 100)
                {
                    printf("Invalid marks! Record not added.\n");
                    break;
                }

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No student records available.\n");
                }
                else
                {
                    printf("\n--- Student Records ---\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nRoll Number: %d", s[i].roll);
                        printf("\nName: %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == searchRoll)
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
                    printf("Student not found!\n");
                }
                break;

            case 4:
                if(n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    total = 0;

                    for(i = 0; i < n; i++)
                    {
                        total += s[i].marks;
                    }

                    average = total / n;

                    printf("Average Marks = %.2f\n", average);
                }
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
