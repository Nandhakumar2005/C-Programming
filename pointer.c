#include<stdio.h>
#include<stdlib.h>
int main(){
    int*array;
    int n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    array=(int *) calloc(n,sizeof(int));
    printf("\nEnter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",array+i);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",*(array+i));
    }
    return 0;
}
