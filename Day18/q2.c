/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day 18 Question: 2
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find the HCF (GCD) of two numbers>
*/
#include<stdio.h>
int main() {
    int a, b, hcf;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        hcf = a % b;
        a = b;
        b = hcf; 
    }
printf("HCF = %d", a);
return 0;
}