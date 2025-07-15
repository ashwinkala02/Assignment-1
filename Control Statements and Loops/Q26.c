/*
Write a program to produce the following output: 
A 
BC 
DEF
FED 
CB 
A
*/

#include <stdio.h>
int main() {
    char ch = 'A';
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    for (i = 3; i >= 1; i--) {
        ch = ch - i;  
        for (j = 1; j <= i; j++) {
            printf("%c ", ch + (i - j));
        }
        printf("\n");
    }
}
