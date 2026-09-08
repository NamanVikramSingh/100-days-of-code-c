/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 04 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to swap two numbers without using a third variable>
*/
#include<stdio.h>
int main() {
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: \n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}