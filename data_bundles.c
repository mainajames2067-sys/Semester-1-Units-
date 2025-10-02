/*
Name:James maina
Reg no:CT101/G/26470/25
Date:1/9/2025
Description:choice of data bundles
*/
#include<stdio.h>

int main()
{
    //variable decelerations 
    int choice ;
    int ksh;
    char invalid; 
    
    printf("Available data bundles\n");
    printf("1.100MB-ksh50\n");
    printf("2.500MB-ksh200\n");
    printf("3.1GB-ksh350\n");
    printf("4.2GB-ksh600\n");
    //print on the user screen 
    printf("Enter your bundles choice (1-4):");
    scanf("%d", &choice);
    //switch statement 
    switch (choice){
    case 1:
    printf("choice 1=100MB- ksh50 \n");
              break;
       case 2:       
    printf("choice 2=500MB-ksh200 \n");
              break;
    case 3:          
    printf("choice 3=1GB-ksh350 \n");
              break;
    case 4:
    printf("choice4=2GB-ksh60 \n");
              break;
    default:
    printf("invalid choice\n");}
    return 0;
}