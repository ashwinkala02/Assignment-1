/*
Write a program to print prime numbers from 1 to 99. (Hint:instead of entering a number, take a for loop that
generates numbers from 1 to 99)
*/

#include <stdio.h>
int main() {
    int i, j, isPrime;
    for (i = 2; i <= 99; i++) {
        isPrime = 1;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

}
