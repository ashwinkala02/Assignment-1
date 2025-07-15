/*
Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the 
sum of two successive terms gives the third term. Following are the first few terms of the 
Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55 89...
*/

#include<stdio.h>
int fibonacci(int n) {
    if (n <= 0)
    return 0;
    else if (n == 1)
    return 1;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n= 25;
    int i;
    printf("Fibonacci sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}