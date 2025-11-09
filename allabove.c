#include <stdio.h>

void printNum(int n) {
    if (n == 0) return;
    printNum(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printNum(n);
    return 0;
}
2.

#include <stdio.h>

void printRev(int n) {
    if (n == 0) return;
    printf("%d ", n);
    printRev(n - 1);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printRev(n);
    return 0;
}