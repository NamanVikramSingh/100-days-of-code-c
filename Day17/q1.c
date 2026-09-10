/* 
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 17 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to check if a number is an Armstrong number.>
*/
#include<stdio.h>
int main() {
    int num, original, remainder, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;

    }
    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
}
