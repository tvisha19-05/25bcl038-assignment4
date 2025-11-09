Part b 
Q1.
#include <stdio.h>

// Function to calculate a^b
int power(int a, int b) {
    int i, result = 1;
    for (i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, b;

    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);

    printf("\n%d raised to %d is: %d\n", a, b, power(a, b));

    return 0;
}