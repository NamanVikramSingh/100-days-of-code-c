/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 02 Question: 2
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to calculate the area and circumference of a circle given its radius>
*/
#include<stdio.h>
int main() {
    float r, area, circumference;
    printf("enter radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    circumference = 2 *3.14 * r;
    printf("area of circle%f\n", area);
    printf("circumference of circle%f\n", circumference);
    return 0;
}