/*
NAME:Nandhakumar KS
DATE:26-03-2025
Write a program to calculate the power of a number using recursion. The base and exponent should be taken as input from the user.
*/

#include <stdio.h>
int power(int a,int b);
int power(int a,int b){
     if (b == 0){
        return a = 1;
     }else if(b == 1){
        return a;
     }else{
        return a*power(a,b-1);
        }
}
int main(){
    int a,b;
    printf("Enter a number 1 and number 2:");
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
