#include<stdio.h>
 int global =100;

 void display(){
    auto int a =10;

    static int s =10;

    a++;
    s++;
    global++;

    printf("automatic variable =%d \n",a);
      printf("static variable =%d \n",s);
        printf("global variable =%d",global);
 }

 int main(){
    printf("first function call :");
    display();
    printf("second function call :");
    display();
    printf("third function call :");
    display();

    return 0;


 }


