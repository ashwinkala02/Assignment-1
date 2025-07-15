/*
Write a program to enter a number and find the reverse of that number.
*/

#include <stdio.h>
int main() {
    int num, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    printf("Reversed number = %d\n", reversed);
}
