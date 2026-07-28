#include <stdio.h>

struct STUDENT
{
    int roll;
    char name[50];
    float cgpa;
};

int main()
{
    struct STUDENT s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    // Display students with CGPA >= 8.0
    printf("\nStudents having CGPA >= 8.0\n");

    for(i = 0; i < 5; i++)
    {
        if(s[i].cgpa >= 8.0)
        {
            printf("\nRoll Number : %d", s[i].roll);
            printf("\nName        : %s", s[i].name);
            printf("\nCGPA        : %.2f\n", s[i].cgpa);
        }
    }

    return 0;
}
