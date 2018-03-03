#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void main()
{
   int value, choice;
   /*cliet file to accept the users request*/
   while(1)
   {
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
     case 1: printf("Enter the value to be insert: ");
         scanf("%d",&value);
         push(value);
         break;
     case 2: pop();
         break;
     case 3: display();
         break;
     case 4: exit(0);
     default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}