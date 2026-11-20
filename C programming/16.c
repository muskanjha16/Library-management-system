#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer Arithmetic Demonstration\n\n");

    printf("Value at pointer: %d\n", *ptr);
    printf("Address of pointer: %p\n", (void *)ptr);

    // Increment pointer
    ptr++;
    printf("\nAfter ptr++:\n");
    printf("Value: %d\n", *ptr);

    // Decrement pointer
    ptr--;
    printf("\nAfter ptr--:\n");
    printf("Value: %d\n", *ptr);

    // Adding an integer to pointer
    ptr = ptr + 2;
    printf("\nAfter ptr + 2:\n");
    printf("Value: %d\n", *ptr);

    // Subtracting an integer from pointer
    ptr = ptr - 1;
    printf("\nAfter ptr - 1:\n");
    printf("Value: %d\n", *ptr);

    // Application: Traversing an array using pointer
    printf("\nArray elements using pointer:\n");

    ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Application: Calculating sum using pointer
    int sum = 0;
    ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("\n\nSum of array elements = %d\n", sum);

    return 0;
}