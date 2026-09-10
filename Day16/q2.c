/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 16 Question: 2
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to check if a number is a palindrome.>
*/ 
#include<stdio.h>
int main() {
    int num, originalnum, reservedum = 0, remainder;
    printf("enter a number: ");
    scanf("%d", &num);
    originalnum = num;
    while(num != 0) {
        remainder = num % 10;
        reservedum = reservedum * 10 + remainder;
        num = num / 10;
        
    }
    if(originalnum == reservedum) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }
    return 0;
}