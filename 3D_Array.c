/*
Name:James maina
Reg no:CT101/G/26470/25
Date:28/10/2025
Description:3D array 
*/
#include<stdio.h>

int main(){
//declaration and initialization 
    int a;
    int b;
    int c;
    
    int scores[2][2][3]={
                       {
                       {50,60,70},
                       {10,40,80}
                               },
                       {        
                       {10,20,30},
                       {90,60,50}   
                                 }
                                 };
    //for loop
    for(a=0;a<2;a++){
       for(b=0;b<2;b++){
           for(c=0;c<3;c++){
    
    printf("%d",scores[a][b][c]);
    }
    printf("\n");
    }
    }
    return 0;
}