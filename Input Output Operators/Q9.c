/*
Accept any five digit number and print the value of remainder after dividing by 3.
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    printf("The remainder after dividing by 3 is: %d", (num%3));
}