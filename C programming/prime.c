#include<stdio.h>
int main(){

    int n , count =0;
    printf("enter  number to chcek prime or not \n");
        scanf("%d",&n);
        
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }

        if(count==2){
            printf("%d is a prime number \n:",n);
        }
        else{
            printf("%d not prime",n);
        }
        return 0;
    }
