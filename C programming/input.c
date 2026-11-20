#include<stdio.h>
#include<stdlib.h>
int main(){
    // int age ;
    // printf("enter your age:");
    // scanf("%d",&age);
    // printf("your age",age);
    // return 0 ;

    char name[100];
    printf("enter your name:");
    // scanf("%s",&name);
    fgets(name,100,stdin);
    printf("your name is %s",name);
    

    // char grade;
    // printf("enter your grade:");
    // scanf("%c",&grade);
    // printf("your grade is %c",grade);

    return 0;
}