#include <stdio.h>
#include <stdlib.h>

#define MAX_TITLE_LEN 50
#define MAX_AUTHOR_LEN 50

// Define a struct for a book
typedef struct {
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    int year_published;
} Book;

int main() {
    // Define a single book record
    Book book1;
    printf("Enter the details for book 1:\n");
    printf("Title: ");
    scanf("%s", book1.title);
    printf("Author: ");
    scanf("%s", book1.author);
    printf("Year published: ");
    scanf("%d", &book1.year_published);

    printf("\nDetails for book 1:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year published: %d\n", book1.year_published);

    // Define an array of book records
    Book books[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter the details for book %d:\n", i+2);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Year published: ");
        scanf("%d", &books[i].year_published);
    }

    printf("\n\nDetails for all books:\n");
    for (i = 0; i < 3; i++) {
        printf("\nDetails for book %d:\n", i+2);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year published: %d\n", books[i].year_published);
    }

    return 0;
}
