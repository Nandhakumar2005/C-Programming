/*
NAME:Nandhakumar KS
DATE:07-02-2025
To write a program to understand two dimensional array.
*/
#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    
    int matrix[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
             scanf("%d",&matrix[i][j]);
        }
    }
    
    for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
           printf("%d\t",matrix[i][j]);
       }
       printf("\n");
    }
    return 0;
}
           
