/*
Write a program to find the factorial value of any number entered through the keyboard
*/

#include <stdio.h>
int main() {
    int num, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }
    printf("Factorial = %d\n", fact);
}