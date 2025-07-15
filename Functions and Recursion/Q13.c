/*
Write a C program to find sum of all even or odd numbers in given range using recursion. 
*/

#include <stdio.h>
int sumEven(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 1, end);
    else
        return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 1, end);
    else
        return sumOdd(start + 1, end);
}

int main() {
    int start, end, choice, result;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Choose:\n1. Sum of Even Numbers\n2. Sum of Odd Numbers\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        result = sumEven(start, end);
    else if (choice == 2)
        result = sumOdd(start, end);
    else {
        printf("Invalid choice.\n");
        return 1;
    }
    printf("Sum = %d\n", result);
}
