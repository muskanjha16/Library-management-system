
#include <stdio.h>

void display()
{
    printf("Hello! Welcome to C Programming.\n");
}
void sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}
int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y, result;
    display();
    sum(10, 20);
    x = getNumber();
    y = multiply(x, 5);

    printf("Multiplication = %d\n", y);

    return 0;
}