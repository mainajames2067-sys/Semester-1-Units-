/*
Name:James maina
Reg no:CT101/G/26470/25
Date:22/10/2025
Description:A C function to calculate electrical bill
*/

#include<stdio.h>
//function prototype 
int bill (int units,int amount);

 int main(){
   int units;
   int bill;
   
   

    printf("Enter amount of units used\n");
    scanf("%d",& units);
    
    if(units <= 100){
    bill=units*10;
    printf("bill=ksh%d\n",bill);
    }
    
    else if(units >100 <=200){
    bill=units*15;
    printf("bill=ksh%d\n",bill);
    }
    
    else
    bill=units*20;
    
}

//function declaration 
 int bill (int units,int amount){
     int bill;
     bill=amount*units;
     return bill;
}