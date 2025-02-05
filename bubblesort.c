/*
NAME:Nandhakumar KS
DATE:05-02-2025
To write a program to bubble sort.
*/
#include <stdio.h>
int main(){
    int i,limit,temp;
    printf("Enter the number of elements:");
    scanf("%d",&limit);
    int num[limit];
    printf("\n Enter the %d elements:",limit);
    for (i=0;i<limit;i++){
        scanf("%d",&num[i]);
    }
    for (i=0;i<limit;i++){
        for (int j=0;j<limit-i;j++){
             if (num[j]>num[j+1]){
                 temp = num[j];
                 num[j]=num[j+1];
                 num[j+1]=temp;
              }
        }
    }             
    for (i=0;i<limit;i++){
         printf("%d, ",num[i]);
    }  
    return 0;
}
