#include <stdio.h>
#include <stdlib.h>

struct RECTANGLE
{
    float length;
    float breadth;
};

int main()
{
    // Dynamically allocate memory for one RECTANGLE structure
    struct RECTANGLE *r;

    r = (struct RECTANGLE *)malloc(sizeof(struct RECTANGLE));

    if (r == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input rectangle dimensions
    printf("Enter Length: ");
    scanf("%f", &r->length);

    printf("Enter Breadth: ");
    scanf("%f", &r->breadth);

    // Display rectangle details
    printf("\n--- Rectangle Details ---\n");
    printf("Length  : %.2f\n", r->length);
    printf("Breadth : %.2f\n", r->breadth);

    // Free allocated memory
    free(r);

    return 0;
}
