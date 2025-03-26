/*
NAME:Nandhakumar KS
DATE:26-03-2025
Define a macro for the value of pi=3.14159 and write a program to calculate the area of a circle and cylinder.Use macros for constant values.
*/

#include <stdio.h>
#define pi 3.14
#define area(r) (pi*r*r)
int main(){
    int r,area,l;
    printf("Enter the radius of the circle and cylinder:");
    scanf("%d",&r);
    printf("Enter the height of the cylinder:");
    scanf("%d",&l);
    int result =area(r);
    printf("area of circle is %d",result);
    int result2 = 2*pi*r*(r+l);
    printf("area of cylinder is %d",result2);
    return 0;
}


