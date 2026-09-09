/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 11 Question: 2
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find profit or loss percentage given cost price and selling price>
*/
#include<stdio.h>
int main() {
    float cost_price, selling_price, profit_loss, percentage;
    printf("enter cost price: ");
    scanf("%f", &cost_price);
    printf("enter selling price: ");
    scanf("%f", &selling_price);
    if (selling_price > cost_price) {
        profit_loss = selling_price - cost_price;
        percentage = (profit_loss / cost_price) * 100;
        printf("Profit %.2f%%\n", percentage);
    } else if (selling_price < cost_price) {
        profit_loss = cost_price - selling_price;
        percentage = (profit_loss / cost_price) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
