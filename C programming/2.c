#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enetr a name \n");
    fgets(str,sizeof(str),stdin);
    // scanf("%s",str);
    int length =0 ,i;
    while(str[i]!='\0' && str[i]!='\n'){
 length++;
 i++;
    }
    printf("length of the string is %d \n",length-1);
// char ch; 

// printf("enter a character:");
// ch = getchar();

// printf("the character enetered is:");
// putchar(ch);

    return 0;
}