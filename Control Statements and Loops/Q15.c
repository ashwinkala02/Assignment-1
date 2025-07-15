/*
Write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3.
*/

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0)
            printf("Cube of %d = %d\n", i, i * i * i);
    }
}
