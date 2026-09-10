/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 19 Question: 2
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find the sum of digits of a number.>
*/
#include<stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("sum of digits = %d", sum);
    return 0;
}