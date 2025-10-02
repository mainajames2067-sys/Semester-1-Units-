/*
Name: James maina
Regn no:CT101/G/26470/25
Date:30/8/2025
Description: water bill
*/
#include<stdio.h>

int main()
{
//variable decelerations
    float bill;
    int units;
    
// display on the user screen 
    printf("Enter your units");
    scanf("%d",&units);
    
    if(units <= 30 ){
    bill=units*20;
    printf(" bill =ksh %.2f \n",bill);
    }
    
    else if(units > 30 &&units < 60 ){
    bill=units*25;
    printf(" bill =ksh %.2f\n",bill);
    }
    
    else if(units >= 60 ){
    bill=units*30;
    printf(" bill = ksh %.2f\n");
    }
    
    return 0;
}