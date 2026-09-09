/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 13 Question: 2
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to print numbers from 1 to n.>
*/
#include<stdio.h>
int  main() {
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}