#include<stdio.h>
#include<stdlib.h>
int main(){
int choice;
int age;
 // printf("Enter Your Age : ");
//scanf("%d",&age);
  printf("1.Senior Citizen \n 2.normal Age \n 3.Child \n 4.Exit\n");

  printf("Enter Your Choice : ") ;

   scanf("%d",&choice) ;

   switch(choice){
         case 1:
       printf("Ticket booked With Concession\n");
       break ;

          case 2:
       printf("Normal booking\n");
       break;

          case 3:
       printf("Ticket Free For Child\n");
       break;

          case 4:
              exit(0);

          default :
       printf("Please Choice Between 1 To 4\n");
       break;

   }
}
