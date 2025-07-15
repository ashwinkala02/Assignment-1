/*
Write a C program to find reverse of any number using recursion.
*/

#include <stdio.h>
int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverse(num, 0);
    printf("Reversed number: %d\n", result);
}