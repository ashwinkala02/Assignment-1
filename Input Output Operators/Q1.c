/*
Rajesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and 
house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/

#include<stdio.h>
int main(){
    float basicSalary;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    float DA= 0.4* basicSalary;
    float HRA= 0.2* basicSalary;
    float grossSalary= basicSalary+ DA+ HRA;
    printf("Gross salary: %f", grossSalary);
}