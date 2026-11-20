#include <stdio.h>
#include <string.h>

void changeValue(int *ptr)
{
    *ptr = 100;
}
int add(int a, int b)
{
    return a + b;
}

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("----- POINTER WITH ARRAY -----\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = %d\n", i, *(ptr + i));
    }
    char str[] = "Hello";
    char *strPtr = str;

    printf("\n----- POINTER WITH STRING -----\n");

    while (*strPtr != '\0')
    {
        printf("%c ", *strPtr);
        strPtr++;
    }
    int num = 50;

    printf("\n\n----- POINTER WITH FUNCTION -----\n");
    printf("Before function call: %d\n", num);

    changeValue(&num);

    printf("After function call: %d\n", num);
    int (*funcPtr)(int, int) = add;

    printf("Addition using function pointer: %d\n",
           funcPtr(10, 20));
    struct Student s1 = {101, "Muskan", 85.5};
    struct Student *structPtr = &s1;

    printf("\n----- POINTER WITH STRUCTURE -----\n");

    printf("Roll Number: %d\n", structPtr->roll);
    printf("Name: %s\n", structPtr->name);
    printf("Marks: %.2f\n", structPtr->marks);

    return 0;
}