#include<stdio.h>
void callByValue(int a){
    a=a+10;
    printf("inside call by value: %d \n",a);
}

void callByReference(int *b){
    *b =*b+10;
    printf("inside call by refernce: %d \n",*b);
}
int main(){
    int x=20 ;
    int y =20;
  printf("before call by value :%d\n",x);
    callByValue(x);
    printf("after call by value :%d\n",x);
     printf("before call by refernce :%d\n",y);
     callByReference(&y);
     printf("after call by reference: %d \n",y);
}