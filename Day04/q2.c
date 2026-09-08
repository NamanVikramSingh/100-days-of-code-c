/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 04 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find and display the sum of the first n natural numbers>
*/
#include<stdio.h>
int main() {
    int n, sum;
    printf("enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("sum of first natural numbers is: %d\n", sum);
    return 0;
}
