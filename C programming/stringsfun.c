
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "hello";
    char str2[50] = "World";
    char str3[50];
     /* strlen() */
    printf("Length of str1 = %d\n", (int)strlen(str1));
    /* strcpy() */
    strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);
    /* strcat() */
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    /* strcmp() */
    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal.\n");
    else
        printf("Both strings are not equal.\n");

    return 0;
}
