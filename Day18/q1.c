/*
* Name : Naman VIkram Singh
* Roll : 590042641
* Day 18 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to print all factors of a given number>
*/
#include<stdio.h>
int main() {
    int num, i;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}