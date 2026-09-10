/* 
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 21 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to swap the first and last digit of a number.>
*/
#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    power = 1;
    digits = n;

    while (digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}