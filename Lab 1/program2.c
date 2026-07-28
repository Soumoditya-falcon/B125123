#include <stdio.h>
#include <stdlib.h>

struct EMPLOYEE
{
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    // Dynamically allocate memory for one EMPLOYEE structure
    struct EMPLOYEE *emp;

    emp = (struct EMPLOYEE *)malloc(sizeof(struct EMPLOYEE));

    if (emp == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp->emp_id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);

    // Display employee details
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", emp->emp_id);
    printf("Employee Name : %s\n", emp->name);
    printf("Salary        : %.2f\n", emp->salary);

    // Free allocated memory
    free(emp);

    return 0;
}
