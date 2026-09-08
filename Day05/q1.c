/* 
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 05 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT
* <Write a program to calculate simple and compound interest for given principal, rate, and time>
*/

#include<stdio.h>
#include<math.h>
int main() {
    float principal, rate, time, simple_interest, compound_interest;
    printf("enter principal amount: ");
    scanf("%f", &principal);
    printf("enter rate of interest: ");
    scanf("%f", &rate);
    printf("enter time in years: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow(1 + rate / 100, time)) - principal;
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}