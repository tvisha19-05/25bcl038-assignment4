Q4.
#include <stdio.h>

// Function to swap two numbers (Call by Value)
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nInside function after swap: a = %d, b = %d", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore calling function: a = %d, b = %d", a, b);

    swap(a, b);  // values are passed by value (copy)

    printf("\nAfter function call: a = %d, b = %d\n", a, b);

    return 0;
}