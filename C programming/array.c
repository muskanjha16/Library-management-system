#include<stdio.h>
int main(){
    int arr[2][2] ={{9,8},
    {7,15}
    };
    int largest = arr[1][1];
    int secondLargest = arr[1][1];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>secondLargest && arr[i][j]<largest){
                secondLargest=arr[i][j];
            }
        }
    }
   
    printf("Second Largest: %d\n", secondLargest);
}