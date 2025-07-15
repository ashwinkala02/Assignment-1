/*
Accept any two numbers, if the first number is greater than second then print the sum of these two numbers,
otherwise print their difference.
*/

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    a>b? printf("The sum of a and b is %d", (a+b)): printf("The difference of a and b is %d", (a-b));
}