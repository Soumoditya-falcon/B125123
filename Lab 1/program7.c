#include <stdio.h>
#include <stdlib.h>

struct STUDENT
{
    int roll;
    char name[50];
    float c_programming;
    float mathematics;
    float physics;
    float total;
    float average;
};

int main()
{
    // Dynamically allocate memory for one STUDENT structure
    struct STUDENT *s;

    s = (struct STUDENT *)malloc(sizeof(struct STUDENT));

    if (s == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Marks in C Programming: ");
    scanf("%f", &s->c_programming);

    printf("Enter Marks in Mathematics: ");
    scanf("%f", &s->mathematics);

    printf("Enter Marks in Physics: ");
    scanf("%f", &s->physics);

    // Calculate total and average
    s->total = s->c_programming + s->mathematics + s->physics;
    s->average = s->total / 3;

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number      : %d\n", s->roll);
    printf("Student Name     : %s\n", s->name);
    printf("C Programming    : %.2f\n", s->c_programming);
    printf("Mathematics      : %.2f\n", s->mathematics);
    printf("Physics          : %.2f\n", s->physics);
    printf("Total Marks      : %.2f\n", s->total);
    printf("Average Marks    : %.2f\n", s->average);

    // Free allocated memory
    free(s);

    return 0;
}
