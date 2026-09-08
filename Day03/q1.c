/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 03 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to convert temperature from Celsius to Fahrenheit>
*/
#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("temperature in fahrenheit: %2f", fahrenheit);
    return 0;
}