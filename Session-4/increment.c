// Program to illustrate the use of increment operator ++ (postfix & prefix).


#include <stdio.h>
#include<stdlib.h>

int main()
{
   int number, result;
   system("clear");
   printf("Enter a Number: "); 
   scanf("%d", &number);
   number++; 
   printf("Post-Incremented Number is %d\n", number) ;
   ++number; 
   printf("Pre-Incremented Number is %d\n", number) ;

   printf("Enter a Number: "); 
   scanf("%d", &number);

   result = number++; 
   printf("Post-Incremented Number (as an expression) is %d\n", result) ;
   printf("Post-Incremented Number after evaluation (as an expression) is %d\n", number) ;

   result = ++number; 
   printf("Pre-Incremented Number (as an expression) is %d\n", result) ;
   printf("Pre-Incremented Number after evaluation (as an expression) is %d\n", number) ;
   
   return 0;
}