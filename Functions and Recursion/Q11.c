/*
Write a C program to print all even or odd numbers in given range using recursion .
*/

#include <stdio.h>
void printEven(int start, int end) {
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEven(start + 1, end);
}

void printOdd(int start, int end) {
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d ", start);
    printOdd(start + 1, end);
}

int main() {
    int start, end, choice;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Choose:\n1. Even Numbers\n2. Odd Numbers\nEnter your choice: ");
    scanf("%d", &choice);
    printf("Result:\n");
    if (choice == 1)
        printEven(start, end);
    else if (choice == 2)
        printOdd(start, end);
    else
        printf("Invalid choice");
}