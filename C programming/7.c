// #include<stdio.h>
// int main(){

//    /* if */
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n > 0){
//         printf("Number is positive.\n");
  
// }
//   return 0;
// }

// /* if-else */
// #include <stdio.h>
// int main(void) {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("Even number\n");
//     else
//         printf("Odd number\n");
//     return 0;
// }
    
/* if-else ladder */

#include <stdio.h>
int main(void) {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) printf("Grade A\n");
    else if (marks >= 75) printf("Grade B\n");
    else if (marks >= 60) printf("Grade C\n");
    else if (marks >= 40) printf("Grade D\n");
    else printf("Grade F\n");

    return 0;
}

/* nested if */
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n >= 0) {
//         if (n == 0) printf("Zero\n");
//         else printf("Positive number\n");
//     } else {
//         printf("Negative number\n");
//     }
//     return 0;
// }

/* switch */
// #include <stdio.h>
// int main() {
//     int choice;
//     printf("Enter 1-3: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1: printf("You selected One\n");
//          break;
//         case 2: printf("You selected Two\n"); 
//         break;
//         case 3: printf("You selected Three\n"); 
//         break;
//         default: printf("Invalid choice\n");
//     }
//     return 0;
// }





  