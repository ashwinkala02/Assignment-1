/*
Write a C program to find sum of digits of a given number using recursion.
*/

#include<stdio.h>
int sumOfDigits(int n, int sum){
    if(n==0)
        return sum;
    return sumOfDigits(n/10, sum+(n%10));
}

int main(){
    int n, sum= 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum= sumOfDigits(n, sum);
    printf("The sum of the digits is: %d", sum);
}