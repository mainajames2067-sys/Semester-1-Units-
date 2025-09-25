/*
Name:James maina
Reg no:CT101/G/26470/25
Date:23/9/2025
*/

#include <stdio.h>

int main()
{
    int age;
    float income;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) 
        printf("You are eligible for the loan.\n");
        printf("You are not eligible for the loan.\n");
        
    return 0;
    }