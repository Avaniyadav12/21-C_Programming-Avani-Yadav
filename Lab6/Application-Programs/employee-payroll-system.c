
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, pf;
    float gross, net;
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

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf(" %49[^\n]", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].basic);

        if(e[i].basic < 0)
        {
            printf("Invalid salary! Enter a non-negative salary.\n");
            return 0;
        }

        // Salary calculations
        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;
        e[i].pf = e[i].basic * 0.12;

        e[i].gross = e[i].basic + e[i].hra + e[i].da;
        e[i].net = e[i].gross - e[i].pf;
    }

    printf("\n========== EMPLOYEE PAYROLL ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d\n", e[i].id);
        printf("Employee Name: %s\n", e[i].name);
        printf("Basic Salary: %.2f\n", e[i].basic);
        printf("HRA: %.2f\n", e[i].hra);
        printf("DA: %.2f\n", e[i].da);
        printf("PF Deduction: %.2f\n", e[i].pf);
        printf("Gross Salary: %.2f\n", e[i].gross);
        printf("Net Salary: %.2f\n", e[i].net);
    }

    return 0;
}
