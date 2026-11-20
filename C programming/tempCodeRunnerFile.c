struct address{
    int houseNo;
    int block;
    char state[100];
};

void printInfo(struct address adds);

int main(){
    struct address adds[3];
    // input
    printf("enter address 1:\n");
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].state);

     printf("enter address 2:\n");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].state);



 printf("enter address 3:\n");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].state);
 printInfo(adds[0]);
 printInfo(adds[1]);
  printInfo(adds[2]);
} 

void printInfo(struct address adds){
    printf("address is: %d ,%d, %s",adds.houseNo,adds.block,adds.state);
}


