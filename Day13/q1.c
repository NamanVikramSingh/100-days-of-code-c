/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 13 Question: 1
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to implement a basic calculator using switch-case for +, -, *, /, %.>
*/
#include<stdio.h>

int main() {
    int a, b, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}