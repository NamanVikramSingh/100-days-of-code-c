/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 01 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Q2: Write a program to input two numbers and display their sum, difference, product, and quotient>
*/
#include<stdio.h>
int main() {
    int a, b;
    int sum, difference, product, quotient;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, difference, product, quotient);
    return 0;
}