
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    // Array demonstration
    int marks[5] = {80, 85, 90, 75, 95};
    int i;

    printf("===== ARRAY DEMONSTRATION =====\n");

    printf("Student Marks:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    // Structure demonstration
    struct Student s;

    printf("\n===== STRUCTURE DEMONSTRATION =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Information:\n");

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
