/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 07 Question: 1
* Date : 8-09-2026
*
*PROBLEM STATEMENT:
* <Write a program to input a year and check whether it is a leap year or not using conditional statements>
*/
#include<stdio.h>
int main() {
    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    if ((year % 400 == 0)|| (year % 4 ==0 && year % 100 != 0)) {
        printf("%d is a leap year", year);
    }
    else { 
        printf("%d is not a leap year", year);
    }
    return 0;
}


