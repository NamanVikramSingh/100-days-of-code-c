/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 12 Question: 1
* Date : 9-09-2026
* 
* PROBLEM STATEMENT:
* <Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled>
*/
#include<stdio.h>

int main() {
    int days;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days);

    if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        printf("Fine ₹%d\n", 10 + (days - 5) * 4);
    } else if (days <= 30) {
        printf("Fine ₹%d\n", 30 + (days - 10) * 6);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}