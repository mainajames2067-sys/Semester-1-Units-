/*
Name: James maina 
Reg no:CT101/G/26470/25
Date:6/11/2025
Description:A c program to create a file which store students examination 
results
*/
#include <stdio.h>

// Define a structure to hold student information
typedef struct {
    char name[50]; 
    int regNumber;
    float totalMarks;
} Student;

int main() {
    FILE *file;
    Student student;

    // Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display student records
    printf("Student Records:\n");
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n\n", student.totalMarks);
    }

    fclose(file);
    return 0;
}