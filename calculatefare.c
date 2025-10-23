/*
Name:James maian
Reg no:CT101/G/26470/25
Date:22/10/2025
Description:A C function to calculate fare
*/
//function prototype 
int fare(int distance,int amount);

#include<stdio.h>

int main(){

int amount;
int distance;
int km;
//prompt the user to enter the distance 

    printf("Enter distance in kilometers\n: ");
    scanf("distance%d", &km);
    int fare=distance*50;
    
    printf("Total fare is=KSh. %d\n", distance);

    return 0;
}

//function declaration 
int fare(int distance,int amount){
    int fare;
    fare=distance*50;

return fare;
}