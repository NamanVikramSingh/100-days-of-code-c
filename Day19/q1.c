/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 19 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find the LCM of two numbers.>
*/
#include<stdio.h>
int main() {
    int a, b, lcm;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while (lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }
    printf("LCM = %d", lcm);
    return 0;
}