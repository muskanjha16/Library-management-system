#include<stdio.h>
#include<stdlib.h>
int main(){

    int secretNumber = 5;
    int guess = 0;
    int guessCount =0;
    int guessLimit =3;
    int outOfGuesses =0;

    while(guess!=secretNumber && outOfGuesses==0){
        if(guessCount<guessLimit){
        printf("enter your guess:");
        scanf("%d",&guess);
        guessCount++;
}else{
    outOfGuesses =1;
}
    }
    if(outOfGuesses==1){
        printf("you lose!");
    } else {
        printf("congratulations! you guessed the number %d",secretNumber);
    }
    return 0;
}
 