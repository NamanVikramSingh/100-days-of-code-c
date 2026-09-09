/* 
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 15 Question: 1
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to calculate the factorial of a number.>
*/
#include<stdio.h>
int main() {
    int n, i, fact = 1;
    printf("enter a number: ");
    scanf("%d", &n);
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d is : %d", n, fact);
    return 0;
}
