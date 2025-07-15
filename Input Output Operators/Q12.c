/*
Write a program to accept the principal, rate, and number of years and find out the simple interest. 
*/

#include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;
    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %f\n", simple_interest);
}
