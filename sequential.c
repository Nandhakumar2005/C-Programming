/*
NAME:Nandhakumar KS
DATE:05-02-2025
Sequential Search: to Create a program to perform a sequential search in a one-dimensional array. Input the array elements and the key to search. Display whether the key is found and its position.
*/
#include<stdio.h>
int main(){
    int num,i,limit,position = 0;
    printf("Enter the number of elements:");
    scanf("%d",&limit);
    int numbers[limit];
    printf("Enter the %d numbers:",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&num);
    for(i=0;i<limit;i++){
        if (numbers[i]==num){
            position = i+1;
            printf("The position is %d",position);
        }
    }
    
    return 0;
}
