/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 16 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to take a number as input and print its equivalent binary representation.>
*/
#include<stdio.h>
int main() {
    int num, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}