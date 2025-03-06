#include <stdio.h>
#include <string.h>

struct Book 
{
    int id;
    char title[100];
    char author[100];
    float price;
};

void sortByPrice(struct Book books[], int n) 
{
    struct Book temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (books[j].price > books[j + 1].price) 
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void sortByAuthor(struct Book books[], int n) 
{
    struct Book temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(books[j].author, books[j + 1].author) > 0) 
            {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void displayBooks(struct Book books[], int n) 
{
    printf("\n%-5s %-20s %-20s %-10s\n", "ID", "Title", "Author", "Price");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-20s $%-9.2f\n", books[i].id, books[i].title, books[i].author, books[i].price);
    }
}

int main() {
    int n, choice;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        getchar(); 
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; 
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; 
        printf("Price($): ");
        scanf("%f", &books[i].price);
    }

    printf("\nChoose sorting option:\n");
    printf("1. Sort by Price\n");
    printf("2. Sort by Author Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        sortByPrice(books, n);
        printf("\nBooks sorted by price:\n");
    } 
    else if (choice == 2) 
    {
        sortByAuthor(books, n);
        printf("\nBooks sorted by author name:\n");
    } 
    else 
    {
        printf("\nInvalid choice! Exiting.\n");
        return 1;
    }

    displayBooks(books, n);

    return 0;
}
