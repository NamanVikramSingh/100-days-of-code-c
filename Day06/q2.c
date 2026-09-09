/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 06 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT;
* <Write a program to input an integer and check whether it is positive, negative or zero using nested if–else>
*/
#include<stdio.h>
int main() {
    int num;
    printf("enter an interger: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is positive", num);
    }
    else if (num < 0) 
    {
        printf("%d is negative", num);
    }
    else {
        printf("%d is zero", num);
    }
    return 0;
}
    
