#include<stdio.h>

void swap(int *a,int*b){
    int temp =*a;
    *a=*b;
    *b= temp;
}
int main(){
    int x=10,y=20;
    printf("before swaaping x = %d ,y =%d \n",x,y);
    swap(&x,&y);
    printf("after %d %d",x,y);

}