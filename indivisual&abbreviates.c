Q5.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    gets(name);  // or use fgets(name, 100, stdin); if preferred

    len = strlen(name);

    printf("\nAbbreviated name: ");

    // Print first letter of first name
    printf("%c.", name[0]);

    // Loop through the string
    for (i = 1; i < len; i++) {
        // If a space is found and next character is not space or end, print next char as initial
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            // If it’s the last word (last name), print full
            if (strchr(name + i + 1, ' ') == NULL) {
                printf(" %s", name + i + 1);
                break;
            } else {
                printf(" %c.", name[i + 1]);
            }
        }
    }

    return 0;
}