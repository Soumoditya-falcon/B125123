#include <stdio.h>
#include <stdlib.h>

struct STUDENT
{
    int roll;
    char name[50];
    int age;
    float cgpa;
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

    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter CGPA: ");
    scanf("%f", &s->cgpa);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s->roll);
    printf("Name        : %s\n", s->name);
    printf("Age         : %d\n", s->age);
    printf("CGPA        : %.2f\n", s->cgpa);

    // Free allocated memory
    free(s);

    return 0;
}
