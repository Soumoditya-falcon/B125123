#include <stdio.h>
#include <stdlib.h>

struct DISTANCE
{
    int feet;
    int inches;
};

int main()
{
    // Dynamically allocate memory for two distances and one result
    struct DISTANCE *d1, *d2, *total;

    d1 = (struct DISTANCE *)malloc(sizeof(struct DISTANCE));
    d2 = (struct DISTANCE *)malloc(sizeof(struct DISTANCE));
    total = (struct DISTANCE *)malloc(sizeof(struct DISTANCE));

    if (d1 == NULL || d2 == NULL || total == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input first distance
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1->feet, &d1->inches);

    // Input second distance
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2->feet, &d2->inches);

    // Add distances (without conversion)
    total->feet = d1->feet + d2->feet;
    total->inches = d1->inches + d2->inches;

    // Display result
    printf("\n--- Total Distance ---\n");
    printf("Feet   : %d\n", total->feet);
    printf("Inches : %d\n", total->inches);

    // Free allocated memory
    free(d1);
    free(d2);
    free(total);

    return 0;
}
