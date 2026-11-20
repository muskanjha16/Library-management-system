
#include <stdio.h>

int main()
{
    int num, age, marks, choice;

    /* 1. if statement */
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("The number is positive.\n");

    /* 2. if-else statement */
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    /* 3. if-else ladder */
    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade: A+\n");
    else if (marks >= 80)
        printf("Grade: A\n");
    else if (marks >= 70)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    /* 4. Nested if */
    printf("\nEnter your age again: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        if (age >= 60)
            printf("You are a senior citizen.\n");
        else
            printf("You are an adult.\n");
    }
    else
    {
        printf("You are a minor.\n");
    }

    /* 5. switch statement */
    printf("\nEnter a number from 1 to 3: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected One.\n");
            break;

        case 2:
            printf("You selected Two.\n");
            break;

        case 3:
            printf("You selected Three.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

