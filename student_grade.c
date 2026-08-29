#include <stdio.h>

int main() {
    char name[50];
    float c, cpp, maths, physics, english;
    float total, percentage;
    char grade;

    printf("===== STUDENT GRADE CALCULATOR =====\n\n");

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks for C: ");
    scanf("%f", &c);

    printf("Enter marks for C++: ");
    scanf("%f", &cpp);

    printf("Enter marks for Maths: ");
    scanf("%f", &maths);

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for English: ");
    scanf("%f", &english);

    total = c + cpp + maths + physics + english;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\n===== RESULT =====\n");
    printf("Student Name: %s\n", name);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    if (percentage >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
