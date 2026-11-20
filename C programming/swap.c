#include<stdio.h>
#include<stdlib.h>
int main(){

    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("before swapping : %d %d \n",a,b);
    // temp=a;
    // a=b;
    // b=temp;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:%d %d \n",a,b);
    return 0;
}