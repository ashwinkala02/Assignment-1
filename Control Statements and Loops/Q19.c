/*  
Write a program to enter a number and test whether it is a Fibonacci number or not.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, x1, x2, s1, s2;
    printf("Enter a number: ");
    scanf("%d", &num);
    x1 = 5 * num * num + 4;
    x2 = 5 * num * num - 4;
    s1 = (int)sqrt(x1);
    s2 = (int)sqrt(x2);
    if ((s1 * s1 == x1) || (s2 * s2 == x2))
        printf("%d is a Fibonacci number.\n", num);
    else
        printf("%d is not a Fibonacci number.\n", num);
}
