#include<stdio.h>
int main(void) {
int a = 10, b = 5, c = 2;
int result1 = a + b * c;
int result2 = (a + b) * c;
int result3 = a - b - c;

printf("a + b * c = %d\n", result1);
printf("(a + b) * c = %d\n", result2);
printf("a - b - c = %d\n", result3);

return 0;
}
