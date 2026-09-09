/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 14 Question: 2
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to print the product of even numbers from 1 to n>
*/
#include<stdio.h>
int main() {
    int n, product = 1; 
    printf("enter value of n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("the product of even numbers from 1 to %d is: %d", n, product);
    return 0;
}