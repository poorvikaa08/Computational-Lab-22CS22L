//Using 'ternary' operator, Write a C program to check whether a given Year is a Leap Year or Not.

/* 
A year consisting of 366 days instead of the usual 365 days is a leap year. 
Every fourth year is a leap year in the Gregorian calendar system. 

A year is a leap year if one of the following conditions is satisfied:
   1. The year is a multiple of 400.
   2. The year is a multiple of 4 but not a multiple of 100.
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
   int year;

   system("clear");
   printf("Enter the Year: "); 
   scanf("%d", &year);

   (year%400) == 0 || ((year%4) == 0 && (year % 100) != 0) ? printf("%d is Leap Year\n", year) : printf("%d is NOT a Leap Year\n", year) ;
   
   return 0;
}