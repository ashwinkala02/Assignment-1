/*
Input a number and a digit and find whether the digit is present in the number or not, if present then count 
the number of times it occurs in the number.
*/

#include <stdio.h>
int main() {
    int num, digit, count = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to search: ");
    scanf("%d", &digit);
    int original = num;
    while (num > 0) {
        rem = num % 10;
        if (rem == digit)
            count++;
        num = num / 10;
    }
    if (count > 0)
        printf("Digit %d is present in %d and occurs %d times.\n", digit, original, count);
    else
        printf("Digit %d is not present in %d.\n", digit, original);
}
