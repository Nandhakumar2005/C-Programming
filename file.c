/*
NAME:Nandhakumar KS
DATE:09-04-2025
To print odd and even number from a file.
*/
#include<stdio.h>
void readFile(FILE *fp){
    int num;
    while(fscanf(fp,"%d",&num)==1){
        printf("%d\t",num);
    }
    fclose(fp);
}
int main(){
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("number.txt","r");
    fp2=fopen("odd.txt","w");
    fp3=fopen("even.txt","w");
    int num;
    while (fscanf(fp1,"%d",&num)==1){
        if(num%2==0){
            fprintf(fp3,"%d\t",num);
        }
        else{
            fprintf(fp2,"%d\t",num);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nThe input textfile contents:");
    fp1=fopen("number.txt","r");
    readFile(fp1);
    printf("\nThe odd number file contents:");
    fp2=fopen("odd.txt","r");
    readFile(fp2);
    printf("\nThe even number file contents:");
    fp2=fopen("even.txt","r");
    readFile(fp3);
    return 0;
}