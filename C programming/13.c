
#include <stdio.h>
int factorialRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorialRecursive(n - 1);
    }
}
int factorialIterative(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, rec, iter;
     printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        rec = factorialRecursive(n);
        iter = factorialIterative(n);

        printf("Factorial using Recursion = %d\n", rec);
        printf("Factorial using Iteration = %d\n", iter);
    }
return 0;
}
