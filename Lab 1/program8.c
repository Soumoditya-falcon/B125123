#include <stdio.h>

struct EMPLOYEE
{
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    struct EMPLOYEE emp[5];
    int i, maxIndex = 0;

    // Input details of 5 employees
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with highest salary
    for(i = 1; i < 5; i++)
    {
        if(emp[i].salary > emp[maxIndex].salary)
        {
            maxIndex = i;
        }
    }

    // Display employee with highest salary
    printf("\n--- Employee with Highest Salary ---\n");
    printf("Employee ID   : %d\n", emp[maxIndex].emp_id);
    printf("Employee Name : %s\n", emp[maxIndex].name);
    printf("Salary        : %.2f\n", emp[maxIndex].salary);

    return 0;
}
