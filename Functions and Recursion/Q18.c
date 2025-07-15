/*
Write a C program to generate nth Fibonacci term using recursion.
*/

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0 || n ==1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the term number (n): ");
    scanf("%d", &n);
    if (n < 0)
        printf("Invalid input! n must be >= 0.\n");
    else
        printf("The %dth Fibonacci term is: %d\n", n, fibonacci(n));
}