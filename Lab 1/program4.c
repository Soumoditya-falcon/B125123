#include <stdio.h>
#include <stdlib.h>

struct PRODUCT
{
    int product_id;
    char product_name[100];
    float price;
    int quantity;
};

int main()
{
    // Dynamically allocate memory for one PRODUCT structure
    struct PRODUCT *p;

    p = (struct PRODUCT *)malloc(sizeof(struct PRODUCT));

    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input product details
    printf("Enter Product ID: ");
    scanf("%d", &p->product_id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p->product_name);

    printf("Enter Product Price: ");
    scanf("%f", &p->price);

    printf("Enter Product Quantity: ");
    scanf("%d", &p->quantity);

    // Display product details
    printf("\n--- Product Details ---\n");
    printf("Product ID       : %d\n", p->product_id);
    printf("Product Name     : %s\n", p->product_name);
    printf("Product Price    : %.2f\n", p->price);
    printf("Product Quantity : %d\n", p->quantity);

    // Free allocated memory
    free(p);

    return 0;
}
