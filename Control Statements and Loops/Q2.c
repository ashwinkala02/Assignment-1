/*
Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number. 
*/

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");
}
