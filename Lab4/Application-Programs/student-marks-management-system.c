
#include <stdio.h>

int main()
{
    char name[50];
    int marks[5], i, total = 0;
    float percentage;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("\nEnter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total = total + marks[i];
    }

    percentage = total / 5.0;

    printf("\n----- STUDENT MARKS REPORT -----\n");

    printf("Student Name: %s\n", name);
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 90)
    {
        printf("Grade: A+\n");
    }
    else if(percentage >= 80)
    {
        printf("Grade: A\n");
    }
    else if(percentage >= 70)
    {
        printf("Grade: B\n");
    }
    else if(percentage >= 60)
    {
        printf("Grade: C\n");
    }
    else if(percentage >= 40)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
