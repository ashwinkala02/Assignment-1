/*
 If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. 
 (Hint: Use the modulus operator ‘%’)
*/

#include<stdio.h>
int main(){
    int number;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    int sum= 0;
    sum+= number%10;
    number= number/10;

    sum+= number%10;
    number= number/10;

    sum+= number%10;
    number= number/10;

    sum+= number%10;
    number= number/10;

    sum+= number%10;
    number= number/10;

    printf("The sum of digits is %d", sum);
}