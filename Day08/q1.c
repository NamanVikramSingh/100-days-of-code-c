/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 08 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character>
*/ 
#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'A') && (ch <= 'Z')) {
        printf("Uppercase alphabet\n");
    }
    else if((ch >= 'a') && (ch <= 'z')) {
        printf("Lowercase alphabet\n");
    }
    else if((ch >= '0') && (ch <= '9')) {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}
