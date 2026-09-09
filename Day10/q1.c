/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 10 Question: 1
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths>
*/
#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter the three sides of triangle\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) {
        printf("Equilateral\n");
    }
    else if(a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }
    return 0;
}