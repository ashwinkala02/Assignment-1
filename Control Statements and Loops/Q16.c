/*
Write a program to accept any six digit number and print the sum of all even digits of that number and 
multiplication of all odd digits. 
*/

#include<stdio.h>
int main(){
    int num, sum=0, mul=1;
    printf("Enter a six digit number: ");
    scanf("%d", &num);
    while(num>0){
        int rem = num%10;
        if(rem%2==0){
            sum+=rem;
        }
        else{
            mul*=rem;
        }
        num/=10;
    }
    printf("Sum of even digits: %d\n", sum);
    printf("Multiplication of odd digits: %d\n", mul);
}