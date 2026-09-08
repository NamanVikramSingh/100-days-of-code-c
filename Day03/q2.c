/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 03 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to swap two numbers using a third variable>
*/
#include<stdio.h>
int main() {
    int a, b, swap;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap = a;
    a = b;
    b = swap;
    printf("after swapping: a = %d, b = %d", a, b);
    return 0;
}
