#include <stdio.h>

int main() {
    int i = 6;

    printf("while loop with i = 6:\n");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("Body did not execute.\n");

    i = 6;
    printf("\ndo-while loop with i = 6:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\nBody executed once.\n");

    return 0;
}

