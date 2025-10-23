/*
Name:James maina
Reg no:CT101/G/26470/25
Date:22/10/2025
Description:create a C function to convert into Celsius 
*/

//function prototype 
float  Celsius (float fahrenheit,int formula);
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float celsius = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}
//function declaration 
float Celsius(float fahrenheit,int formula){
        int temperatures;
       float Celsius =(temperatures*5.0/9.0);
       
       return Celsius;
}