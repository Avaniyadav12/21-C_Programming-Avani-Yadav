
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    int age;
    float salary;
    char department[30];
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid number of employees!\n");
        return 0;
    }

    // Accept employee information
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf(" %49[^\n]", e[i].name);

        printf("Enter Employee Age: ");
        scanf("%d", &e[i].age);

        printf("Enter Employee Salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter Department: ");
        scanf(" %29[^\n]", e[i].department);
    }

    // Display employee information
    printf("\n===== EMPLOYEE INFORMATION =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", e[i].id);
        printf("Employee Name: %s\n", e[i].name);
        printf("Employee Age: %d\n", e[i].age);
        printf("Employee Salary: %.2f\n", e[i].salary);
        printf("Department: %s\n", e[i].department);
    }

    return 0;
}
