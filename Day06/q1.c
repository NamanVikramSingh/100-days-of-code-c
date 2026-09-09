/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 06 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT;
* <Write a program to input an integer and check whether it is even or odd using if–else>
*/
#include<stdio.h>
int main() {
    int num;
    printf("enter an interger: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even", num);
    }
    else {
        printf("%d is odd", num);
    }
    return 0;
}

