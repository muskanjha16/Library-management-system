#include <stdio.h>
#include <stdlib.h>

int main() {

    // int num1;
    // int num2;

    

    double num1;
    double num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter operator: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%f", num1 + num2);
    }
    else if (op == '-') {
        printf("%f", num1 - num2);
    }
    else if (op == '*') {
        printf("%f", num1 * num2);
    }
    else if (op == '/') {
        printf("%f", num1 / num2);
    }
    else {
        printf("Invalid operator");
    }

    



    // printf("sum of %d and %d is: %d\n", num1, num2, num1 + num2);

    // printf("diff of %d and %d is: %d\n", num1, num2, num1 - num2);

    // printf("product of %d and %d is: %d\n", num1, num2, num1 * num2);

    // printf("remainder of %d and %d is: %d\n", num1, num2, num1 % num2);

    return 0;
}