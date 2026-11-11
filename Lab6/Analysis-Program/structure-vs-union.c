
#include <stdio.h>

struct Student
{
    int roll;
    float marks;
    char grade;
};

union StudentData
{
    int roll;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union StudentData u;

    // Structure demonstration
    printf("===== STRUCTURE =====\n");

    s.roll = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    printf("Size of Structure: %zu bytes\n", sizeof(s));

    // Union demonstration
    printf("\n===== UNION =====\n");

    u.roll = 101;
    printf("Roll Number: %d\n", u.roll);

    u.marks = 85.5;
    printf("Marks: %.2f\n", u.marks);

    u.grade = 'A';
    printf("Grade: %c\n", u.grade);

    printf("Size of Union: %zu bytes\n", sizeof(u));

    return 0;
}
