/*
The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this 
distance in meters, feet, inches and centimeters.
*/

#include <stdio.h>
int main() {
    float distance_km, meters, feet, inches, centimeters;
    printf("Enter the distance between two cities (in km): ");
    scanf("%f", &distance_km);
    meters = distance_km * 1000;
    feet = distance_km * 3280.84;
    inches = distance_km * 39370.1;
    centimeters = distance_km * 100000;
    printf("\nDistance in meters: %.2f m", meters);
    printf("\nDistance in feet: %.2f ft", feet);
    printf("\nDistance in inches: %.2f in", inches);
    printf("\nDistance in centimeters: %.2f cm\n", centimeters);
    return 0;
}
