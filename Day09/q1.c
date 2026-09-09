/*
* Name : Naman Vikram Singh
* Roll : 590042641
* Day : 09 Question: 1
* Date : 9-09-2026
*
* PROBLEM STATEMENT:
* <Write a program to find the roots of a quadratic equation and categorize them>
*/
#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    printf("enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("roots are real and different. \n");
        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("roots are real and same. \n");
        printf("root1 = root2 = %.2f", root1);
    
    }
    else {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);
        printf("roots are complex. \n");
        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi", realpart, imaginarypart, realpart, imaginarypart);
    }
}