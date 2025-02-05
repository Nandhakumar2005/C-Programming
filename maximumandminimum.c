/*
NAME:Nandhakumar KS
DATE:05-02-2025
Find Maximum and Minimum:To write a program to input elements into a one-dimensional array and find the maximum and minimum elements. Display their positions in the array.
*/
#include <stdio.h>
int main(){
    int i,limit;
    printf("Enter the number of elements:");
    scanf("%d",&limit);
    int num[limit];
    printf("Enter the %d elements:",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&num[i]);
    }
    int maximum= num[0],minimum= num[0];
    for(i=0;i<limit;i++){
        if(num[i]>maximum){
           maximum=num[i];
        }
        if(minimum>num[i]){
           minimum=num[i];
        }
    }
    printf("minimum=%d",minimum);
    printf("maximum=%d",maximum);
    return 0;
}
