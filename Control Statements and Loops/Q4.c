/*
According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the 
keyboard write a program to find out what is the day on 1st January of this year.
*/

#include<stdio.h>
int dayOfWeek(int day, int month, int year){
    int totaldays=0;
    int i;
    for(i=1990; i<=year; i++){
        if((i%4==0) || ((i%100!=0)&&(i%400==0))){
            totaldays+= 366;
        }
        else{
            totaldays+= 365;
        }
    }
    totaldays= totaldays%7;
    return totaldays;
}

int main(){
    char *ch[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    int dayNum=dayOfWeek(1, 1, year)-1;
    printf("%s", ch[dayNum]);
}