/*
Name:James maina
Reg no:CT101/G/26470/25
Description:prompt the user to enter the correct password 
*/

#include <stdio.h>

int main() {
    int password;

    // Loop until correct password is entered
    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

    } while (password != 1234);

    // Access granted message
    printf("Access Granted\n");

    return 0;
}
