/*
Name:James maina
reg no:CT101/G/26470/25
Date:1/10/2025
Description: Eligibility for exam
*/
#include<stdio.h>

int main()
{
    //variable decelerations 
    int attedance;
    int marks;
    
    printf("Enter your attedance");
    scanf("%d", &attedance);
    
    printf("Enter your marks");
    scanf("%d", &marks);
    //display on the user screen 
    
   if (attedance >= 75 && marks >= 40)
   {
    printf("eligible for exam\n");
    }
    else if(attedance < 75 || marks < 40)
    {
   printf("not eligible for the exam\n") ;
    }
    printf("The attedance %d\n" , attedance);
    printf("The marks %d\n" , marks);
    return 0;
}