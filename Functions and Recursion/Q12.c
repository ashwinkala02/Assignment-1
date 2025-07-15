/*
Write a C program to find sum of all natural numbers between 1 to n using recursion.
*/

#include<stdio.h>
int printSum(int n){
    if(n == 0)
        return;
    return n + printSum(n - 1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of %d natural numbers is %d", n, printSum(n));
}