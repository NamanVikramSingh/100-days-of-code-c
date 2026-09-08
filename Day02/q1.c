/* 
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 02 Question: 1
* Date : 8-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to calculate the area and perimeter of a rectangle given its length and breadth>
*/
#include<stdio.h>
int main() {
    int a, b, area, perimeter;
    printf("enter length and breadth: ");
    scanf("%d %d", &a, &b);
    area = a * b;
    perimeter = 2 * (a + b);
    printf("area of rectangle %d\n", area);
    printf("perimeter of rectangle %d\n", perimeter);
    return 0;
}