/*
If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit
of this number.
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    int FD= num/1000;
    int LD= num%10;
    int sum= FD+LD;
    printf("The sum of first and last digits is: %d", sum);
}