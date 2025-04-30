#include<stdio.h>
int add(int a, int b){
   return a+b;
}
int main(){
    int (*fn_ptr)(int ,int)=add;
    printf("%d",fn_ptr(2,3));
    return 0;
}
