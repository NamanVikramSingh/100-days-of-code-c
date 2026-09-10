/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 24 Question: 1
* Date : 10-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to print the following pattern:
*
**
***
****
*****.>
*/

#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
