/*
If a five-digit number is input through the keyboard, write a program to reverse the number.
*/

#include<stdio.h>
int main(){
    int number;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    int rev= 0;
    rev= rev*10+ (number%10);
    number= number/10;

    rev= rev*10+ (number%10);
    number= number/10;

    rev= rev*10+ (number%10);
    number= number/10;

    rev= rev*10+ (number%10);
    number= number/10;

    rev= rev*10+ (number%10);
    number= number/10;

    printf("The reversed number is %d", rev);
}