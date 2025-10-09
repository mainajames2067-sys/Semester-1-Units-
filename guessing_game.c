/*
Name:James maina
Reg no:CT101/G/26470/25
Date:8/10/2025
Description:Here’s a *C program* that implements the number guessing game
*/

#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 20
    secret = (rand() % 20) + 1;

    // Loop until user guesses correctly
    do {
        printf("Enter your guess (1 to 20): ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
        }
    } while (guess != secret);

    return 0;
    }