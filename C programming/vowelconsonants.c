#include<stdio.h>
#include<stdlib.h>
int main(){

    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    if((ch=='A'||'a' ) || (ch=='e'||'E')|| (ch=='I'||'i') || (ch=='o'||'O') || (ch=='u'||'U')){
        printf("its a vowel \n");
    }
    else{
        printf("its a consonant \n");
    }



    return 0;
}