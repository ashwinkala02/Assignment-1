/*
Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on 
one straight line.
*/

#include <stdio.h>
int main() {
    float x1, y1, x2, y2, x3, y3;
    float slope1, slope2;
    printf("Enter coordinates of Point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of Point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of Point 3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);
    if ((x2 - x1) == 0 || (x3 - x2) == 0) {
        if ((x2 - x1) == 0 && (x3 - x2) == 0)
            printf("All three points lie on the same straight vertical line.\n");
        else
            printf("The points do not lie on the same straight line.\n");
    } else {
        slope1 = (y2 - y1) / (x2 - x1);
        slope2 = (y3 - y2) / (x3 - x2);
        if (slope1 == slope2)
            printf("All three points lie on the same straight line.\n");
        else
            printf("The points do not lie on the same straight line.\n");
    }
}