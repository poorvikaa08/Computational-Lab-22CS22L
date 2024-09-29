// Program to check whether a given number is Positive or Negative, using "ternary" operator. 

#include <stdio.h>
#include<stdlib.h>

int main()
{
   int number;   
   system("clear");
   printf("Enter a Non-Zero Number: "); 
   scanf("%d", &number);

   (number>0) ? printf("Number is Positive\n") : printf("Number is Negative OR ZERO\n") ;

   return 0;
}