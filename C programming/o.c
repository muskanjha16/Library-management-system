
#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    /* for loop */
    printf("\nUsing for loop:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    /* while loop */
    printf("\n\nUsing while loop:\n");
    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }

    /* do-while loop */
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);
    return 0;
}
