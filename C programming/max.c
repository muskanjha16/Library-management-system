#include <stdio.h>

int main()
{
    float price[10];
    int i;
    float max;

    printf("Enter prices of 10 items:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%f", &price[i]);
    }

    max = price[0];

    for(i = 1; i < 10; i++)
    {
        if(price[i] > max)
        {
            max = price[i];
        }
    }

    printf("Maximum price = %.2f", max);

    return 0;
}