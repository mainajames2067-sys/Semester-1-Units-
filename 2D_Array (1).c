/*
Name:James maina
Reg no:CT101/G/26470/25
Date:28/10/2025
Description:2D array 
*/
#include<stdio.h>

int main(){
//declaration and initialization 
    int j;
    int k;
    int scores[2][3]={
                       {5,6,7},
                       {1,2,3}
                               };
    //for loop
    for(j=0;j<2;j++){
    for(k=0;k<3;k++){
    printf("%d",scores[j][k]);
    }
    printf("\n");
    }
    return 0;
}