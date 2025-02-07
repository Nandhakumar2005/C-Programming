/*
NAME:Nandhakumar KS
DATE:07-02-2025
Two write a program for two dimensional array in c.
*/
#include <stdio.h>
int main(){
    int matrix[2][2]={{1,2},{3,4}};
    for (int i = 0;i<2;i++){
         for (int j = 0;j<2;j++){
              printf("%d\t",matrix[i][j]);
         }
    printf("\n");
    }
    return 0;
}
