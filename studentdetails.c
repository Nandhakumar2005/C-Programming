/*
NAME:Nandhakumar KS
DATE:02-04-2025
To write a program using structure.
*/

#include <stdio.h>
typedef struct{
   char name[20];
   int rollno;
   float cgpa;
}student;
int main(){
    int num,i;
    printf("\n Enter the total number of students:");
    scanf("%d",&num);
    student s[num];
    for (i=0;i<=num;i++){
        printf("\n Enter the roll no:");
        scanf("%d",&s[i].rollno);
        printf("\n Enter the name:");
        scanf("%s",s[i].name);
        printf("\n Enter the cgpa:");
        scanf("%f",s[i].cgpa);
    }
    for (int i=0;i<=num;i++){
        printf("name:%s",s[i].name);
        printf("roll no:%d",s[i].rollno);
        printf("cgpa:%f",s[i].cgpa);
    }
    return 0;
}
