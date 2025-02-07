/* 
NAME:Nandhakumar KS
DATE:07-02-2025
To write a program to write a transpose of a matrix.
*/
#include <stdio.h>
int main(){
    int row,col;
    printf("\n Enter the number of rows: ");
    scanf("%d",&row);
    printf("\n Enter the number of columns: ");
    scanf("%d",&col);
    
    int matrix[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
     }
     for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
     }
     return 0;
}
    
