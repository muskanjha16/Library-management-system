// #include<stdio.h>
//  #include<stdlib.h>

// // struct student{
// //     char name[50];
// //     char major[50];
// //     int age;
// //     double gpa;
// // };
// // int main(){

// // struct student s1;
// // s1.age = 22;
// // s1.gpa =3.5;
// // strcpy(s1.name,"jim");
// // strcpy(s1.major,"computer science");

// // printf("%f \n",s1.gpa);
// // printf("%s",s1.name);
// //     return 0;
// // }
// struct address{
//     int houseNo;
//     int block;
//     char state[100];
// };

// void printInfo(struct address adds);

// int main(){
//     struct address adds[3];
//     // input
//     printf("enter address 1:\n");
//     scanf("%d",&adds[0].houseNo);
//     scanf("%d",&adds[0].block);
//     scanf("%s",adds[0].state);

//      printf("enter address 2:\n");
//     scanf("%d",&adds[1].houseNo);
//     scanf("%d",&adds[1].block);
//     scanf("%s",adds[1].state);



//  printf("enter address 3:\n");
//     scanf("%d",&adds[2].houseNo);
//     scanf("%d",&adds[2].block);
//     scanf("%s",adds[2].state);
//  printInfo(adds[0]);
//  printInfo(adds[1]);
//   printInfo(adds[2]);
// } 

// void printInfo(struct address adds){
//     printf("address is: %d\n  %d\n  %s\n",adds.houseNo,adds.block,adds.state);
// }

#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1 = {101, "Muskan", 85.5};

    struct Student *ptr;

    ptr = &s1;

    printf("Student Details:\n");

    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
