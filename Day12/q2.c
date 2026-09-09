/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 12 Question: 2
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to calculate electricity bill based on units consumed with these rates
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit.>
*/
#include<stdio.h>
int main() {
    int units;
    printf("enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        printf("total bill is ₹%d\n", units * 5);
    } else if (units <= 200) {
        printf("total bill is ₹%d\n", 500 + (units - 100) * 7);
    } else {
        printf("total bill is ₹%d\n", 1200 + (units - 200) * 12);
    }
    return 0;
}

