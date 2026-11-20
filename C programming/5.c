// #include<stdio.h>
// int main(){

    // int a=5;
    // int b=9;
    // if(a>b){
    //     printf("a is greater");
    // }
    // else if(a<b){
    //     printf("b is greater");
    // }
    // else{
    //     printf("both are equal");
    //  }

    // char grade ='A';
    // if(grade =='A'){
    //     printf("you did great!");
    // }
    // else if(grade !='A' || grade!='B'){
    //     printf("you need to improve!");
    // }
    // else{
    //     printf("invalid grade");
    // }
    



//     return 0;
// }

#include <stdio.h>

int main() {
    int a = 10, b = 5, x;

    printf("Relational operators:\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    printf("\nLogical operators:\n");
    printf("(a > 0 && b > 0) = %d\n", a > 0 && b > 0);
    printf("(a < 0 || b > 0) = %d\n", a < 0 || b > 0);
    printf("!(a > b) = %d\n", !(a > b));

    x = 20;
    printf("\nAssignment: x = %d\n", x);
    printf("Ternary: %s\n", (a > b) ? "a is greater" : "b is greater");

    return 0;
}