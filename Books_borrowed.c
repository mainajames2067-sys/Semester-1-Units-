/*
Name: James maina 
Reg no:CT101/G/26470/25
Date:6/11/2025
Description:A c progrm#include to keep a file of books borrowed each day
*/
#include <string.h>
#include <stdio.h>

int main() {
    FILE *file;
    char book_title[100];

    // Open the file in append mode to not delete existing records
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(book_title, sizeof(book_title), stdin);
    // Remove newline character if present
    book_title[strcspn(book_title, "\n")] = 0;

    // Write the book title to the file
    fprintf(file, "%s\n", book_title);
    fclose(file);

    printf("Book title '%s' successfully stored in borrowed_books.txt\n", book_title);

    return 0;
}