
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    /* Single-dimensional array */
    printf("Single-dimensional array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    /* Manipulating single-dimensional array */
    a[2] = 100;
    printf("\n\nAfter changing the third element:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    /* Multi-dimensional array */
    printf("\n\nMulti-dimensional array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    /* Manipulating multi-dimensional array */
    b[1][2] = 10;
    printf("\nAfter changing the element at row 2, column 3:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
