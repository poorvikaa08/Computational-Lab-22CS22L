// Program to illustrate the use of Decrement operator -- (postfix & prefix).


#include <stdio.h>
#include<stdlib.h>

int main()
{
   int number, result;
   system("clear");
   printf("Enter a Number: "); 
   scanf("%d", &number);

   number--; 
   printf("Post-Decremented Number is %d\n", number) ;

   --number; 
   printf("Pre-Decremented Number is %d\n", number) ;

   printf("Enter a Number: "); 
   scanf("%d", &number);

   result = number--; 
   printf("Post-Decremented Number (as an expression) is %d\n", result) ;
   printf("Post-Decremented Number after evaluation (as an expression) is %d\n", number) ;

   result = --number; 
   printf("Pre-Decremented Number (as an expression) is %d\n", result) ;
   printf("Pre-Decremented Number after evaluation (as an expression) is %d\n", number) ;
   
   return 0;
}