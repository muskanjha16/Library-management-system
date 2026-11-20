#include<stdio.h>
int main(){

    // int age =30;
    // int * pAge = &age;
    // double gpa =3.4;
    // double * pGpa =&gpa;
    // char grade ='A';
    // char * pGrade =&grade;

    // printf("age;s memory address : %p \n",age);

// int num =10;
// int *ptr =&num;

// printf("value: %d\n",num);
// printf("adrees %p\n",(void*)ptr);
// printf("address %p\n",(void*)&num);
// printf("value %d\n",*ptr);

// int a =10;
// int *ptr =&a;

// printf("otiginal %d\n",a);

// *ptr =50;
// printf("now %d",*ptr);
//     return 0;

int arr[4] ={10,20,30,40};
int *ptr=arr;
printf("%d",*ptr);
printf("%d",*(ptr+1));
printf("%d",*(ptr+2));
printf("%d",*(ptr+3));

}