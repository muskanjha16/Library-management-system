#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i;

    // malloc()
    ptr = (int *)malloc(3 * sizeof(int));

    printf("Using malloc:\n");

    for (i = 0; i < 3; i++)
    {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    // calloc()
    int *ptr2 = (int *)calloc(3, sizeof(int));

    printf("\n\nUsing calloc:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", ptr2[i]);
    }

    // realloc()
    ptr = (int *)realloc(ptr, 5 * sizeof(int));

    ptr[3] = 4;
    ptr[4] = 5;

    printf("\n\nUsing realloc:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    // free()
    free(ptr);
    free(ptr2);

    printf("\n\nMemory freed successfully.");

    return 0;
}