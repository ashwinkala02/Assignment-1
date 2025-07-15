/*
Write a C program to find LCM of two numbers using recursion. 
*/

#include <stdio.h>
int findLCM(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return findLCM(a, b, multiple + 1);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int start = (a > b) ? a : b;
    int lcm = findLCM(a, b, start);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
}
