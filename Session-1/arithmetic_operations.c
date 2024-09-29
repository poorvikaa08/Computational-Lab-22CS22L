//Program to accept two numbers and perform basic arithmetic operations (+, - *, /, %)


#include <stdio.h>
#include <stdlib.h>   //for system("clear");

int main()
{
   int num1, num2, sum, diff, prod, rem;
   float quo;   

   system("clear");
  
   printf("Enter Two Whole Numbers: ");
   scanf("%d %d", &num1, &num2);

   sum = num1 + num2 ;
   diff = num1 - num2 ;
   prod = num1 * num2 ;
   quo = (float) num1 / num2 ;     //Type conversion
   rem = num1 % num2 ;

   printf("Sum of %d and %d is %d\n", num1, num2, sum );
   printf("Difference between %d and %d is %d\n", num1, num2, diff );
   printf("Product %d and %d is %d\n", num1, num2, prod );
   printf("Quotient of %d and %d is %.2f\n", num1, num2, quo );
   printf("Reminder of %d and %d is %d\n", num1, num2, rem );

   return 0;
}