/*
Write a program to find out the value of x raised to the power y, where x and yare positive integers.
*/

#include <stdio.h>
int main() {
    int x, y, i, result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++) {
        result = result * x;
    }
    printf("%d raised to the power %d = %d\n", x, y, result);
}
