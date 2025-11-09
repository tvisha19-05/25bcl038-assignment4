#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}
4.

#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}
5.

#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}
6.

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumDigits(n));
    return 0;
}
7.

#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0) return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Reversed = %d", reverse(n, 0));
    return 0;
}
8.

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("GCD = %d", gcd(a, b));
    return 0;
}
9.

#include <stdio.h>

int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d%d", &a, &b);
    printf("Result = %d", power(a, b));
    return 0;
}