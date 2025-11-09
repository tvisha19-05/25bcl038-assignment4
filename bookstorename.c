#include <stdio.h>

int main() {
    char books[3][50];     // to store 3 book names (each up to 49 chars)
    char *ptr[3];          // array of pointers to strings
    int i;

    // input book names
    printf("Enter names of 3 books:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        scanf(" %[^\n]", books[i]);  // read string with spaces
        ptr[i] = books[i];           // store address in pointer array
    }

    // print book names
    printf("\nYou entered these books:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}