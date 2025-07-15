/*
If cost price and selling price of an item is input through the keyboard, write a program to determine whether 
the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
*/

#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss;
    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);
    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Profit = %f\n", profit);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("Loss = %f\n", loss);
    } else {
        printf("No Profit No Loss\n");
    }
}
