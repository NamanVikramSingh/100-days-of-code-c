/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 23 Question: 2
* Date : 10-09-2026
*
*Write a program to print the following pattern:
*****
*****
*****
*****
*****>
*/
#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}