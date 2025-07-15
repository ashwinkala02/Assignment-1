/*
If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of 
the three.
*/

#include <stdio.h>
int main() {
    int ram, shyam, ajay;
    printf("Enter Ram's age: ");
    scanf("%d", &ram);
    printf("Enter Shyam's age: ");
    scanf("%d", &shyam);
    printf("Enter Ajay's age: ");
    scanf("%d", &ajay);
    if (ram < shyam && ram < ajay)
        printf("Ram is the youngest.\n");
    else if (shyam < ram && shyam < ajay)
        printf("Shyam is the youngest.\n");
    else if (ajay < ram && ajay < shyam)
        printf("Ajay is the youngest.\n");
    else
        printf("All are of same age.\n");
}
