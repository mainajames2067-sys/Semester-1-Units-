/*
Name: James maina 
Reg no:CT101/G/26470/25
Date:6/11/2025
Description:A c program to create a file which store students examination 
results}
*/
#include <stdio.h>

int main() {
    FILE *file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file sales.txt\n");
        return 1;
    }

    double total = 0.0;
    double amount;
    while (fscanf(file, "%lf", &amount) == 1) {
        total += amount;
    }

    fclose(file);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}