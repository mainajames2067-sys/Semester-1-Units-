/*
Name:James maina
Reg no:CT101/G/26470/25
Date:23/9/2025
*/

#include <stdio.h>
#define PI 3.1416

int main(){

    float radius, height, volume, surfacearea ;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfacearea = 2 * PI * radius * radius + 2 * PI * radius * height;
    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfacearea);
    
    return 0;
}