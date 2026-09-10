/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 17 Question: 2
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to check if a number is prime.>
*/
#include<stdio.h>
int main() {
    int num, i, flag = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
            
        }
    }
    if (flag == 0) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
}