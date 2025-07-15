/*
Accept the radius of the circle and calculate the area and perimeter of the circle.
*/

#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float perimeter= 2 *3.14 * radius;
    float area= 3.14 * radius * radius;
    printf("The perimeter of the circle: %f\n", perimeter);
    printf("The area of the circle: %f\n", area);
}