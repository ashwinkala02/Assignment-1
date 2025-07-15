/*
A positive integer is entered through the keyboard; write a program to obtain the prime factors of the number. 
Modify the function suitably to obtain the prime factors recursively
*/

#include <stdio.h>
void primeFactors(int n, int i) {
    if (n == 1)
        return;
    if (n % i == 0) {
        printf("%d ", i);
        while (n % i == 0) {
            n /= i;  
        }
    }
    primeFactors(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors: ");
    primeFactors(num, 2);
}