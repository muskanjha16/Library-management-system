#include<stdio.h>
#include<stdlib.h>

double cube(double num){
    double result = num*num*num;
    return result;
}

// void sayHi(char name[], int age){
//     printf("hello %s ,you are %d",name,age);
// }
int main(){
    double num = 3.0;
    printf("the cube of %f is %f" , num ,cube(num));
    
// sayHi("mike",40); 

    return 0;

}