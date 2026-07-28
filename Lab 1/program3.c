#include <stdio.h>
#include <stdlib.h>

struct BOOK
{
    int book_id;
    char title[100];
    char author[100];
    float price;
};

int main()
{
    // Dynamically allocate memory for one BOOK structure
    struct BOOK *b;

    b = (struct BOOK *)malloc(sizeof(struct BOOK));

    if (b == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &b->book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b->title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b->author);

    printf("Enter Book Price: ");
    scanf("%f", &b->price);

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Book ID      : %d\n", b->book_id);
    printf("Book Title   : %s\n", b->title);
    printf("Author Name  : %s\n", b->author);
    printf("Book Price   : %.2f\n", b->price);

    // Free allocated memory
    free(b);

    return 0;
}
