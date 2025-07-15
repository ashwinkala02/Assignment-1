/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered 
through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include <stdio.h>
int main() {
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of a triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");
}
