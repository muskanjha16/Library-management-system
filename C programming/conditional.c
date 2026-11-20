#include<stdio.h>
#include<stdlib.h>

// int max(int num1 , int num2){
//     int result;
//     if(num1>num2){
//         result = num1;
//     }
//     else{
//         result = num2;
//     }
//     return result;
// }
// int main(){
//     int num1, num2;
//     printf("enter num1 and num2");
//     scanf("%d %d",&num1,&num2);


//     printf("%d",max(num1,num2));
// return 0;
// }



int max(int num1,int num2,int num3){
    int result;
    if(num1>=num2 && num1>=num3){
        result = num1;
    }
    else if(num2>=num1 && num2>=num3){
        result = num2;
    }
    else{
        result = num3;
    }
    return result;
}
int main(){
    int num1,num2,num3;
    printf("enetr three numbers");
    scanf("%d %d %d", &num1,&num2,&num3);

    printf("the largest among the three numbers is %d",max(num1,num2,num3));

}