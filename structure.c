/* 
NAME:Nandhakumar KS
DATE:02-04-2025
To write a program using structure.
*/

#include <stdio.h>
struct student{
       int rollno;
       char name[20];
       float cgpa;
};
int main(){
    struct student s1;
    printf("\n Enter the roll no:");
    scanf("%d",&s1.rollno);
    printf("\n Enter the name:");
    scanf("%s",s1.name);
    printf("\n Enter the cgpa:");
    scanf("%f",s1.cgpa);
    printf("\n The student details:");
    printf("\n name:%s",s1.name);
    printf("\n cgpa:%f",s1.cgpa);
    return 0;
}
    
