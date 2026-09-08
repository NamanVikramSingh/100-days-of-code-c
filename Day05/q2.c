/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 05 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT
* <Write a program to input time in seconds and convert it to hours:minutes:seconds format>
*/
#include<stdio.h>
int main() {
    int total_seconds, hours, minutes, seconds;
    printf("enter time in seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    printf("time in hours:minutes:seconds format = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}