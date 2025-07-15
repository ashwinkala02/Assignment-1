/*
Write a C program to print all natural numbers between 1 to n using recursion. 
*/

#include <stdio.h>
void printNatural(int n) {
    if (n == 0)
        return;
    printNatural(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d:\n", n);
    printNatural(n);
}