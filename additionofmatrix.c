/*
NAME:Nandhakumkar KS
DATE:07-02-2025
To write a program to understand two dimensional array.
*/
#include <stdio.h>
int main(){
    int row,col;
    printf("\n Enter the number of rows:");
    scanf("%d",&row);
    printf ("\n Enter the number of columns:");
    scanf("%d",&col);
    
    int matrix1[row][col],matrix2[row][col];
    int matrix3[row][col];
    printf("\n Enter the first matrix:\n");
    for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
          scanf("%d",&matrix1[i][j]);
       }
    }
    printf("\n Enter the second matrix:\n");
    for (int i=0;i<row;i++){
      for (int j=0;j<col;j++){
          scanf("%d",&matrix2[i][j]);
      }
    }
    for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
           matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
       }
    }
    for (int i=0;i<row;i++){
       for (int j=0;j<col;j++){
         printf("%d\t",matrix3[i][j]);
       }
       printf("\n");
    }
    return 0;
}
