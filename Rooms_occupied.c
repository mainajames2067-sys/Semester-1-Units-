/*
Name:James maina
Reg no:CT101/26470/25
Date:28/10)2025
Description: calculate the number of rooms occupied 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    srand(time(NULL)); 
    int occupiedCount = 0;

    // Assign random occupancy and count occupied rooms
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2; // Random 0 or 1
                occupiedCount += chain[i][j][k]; // Count occupied rooms
            }
        }
    }

    // Display the total number of occupied rooms
    printf("Total occupied rooms across all branches: %d\n", occupiedCount);

    return 0;
}