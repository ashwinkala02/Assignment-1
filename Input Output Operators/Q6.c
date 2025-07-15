/*
Enter the temperature in Celsius and convert that into Fahrenheit.
*/

#include<stdio.h>
int main(){
    float celcius;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &celcius);
    float far= celcius*(9/5) + 32;
    printf("The temperature in faranheit is: %f", far);
}