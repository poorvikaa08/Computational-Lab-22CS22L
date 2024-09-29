// To print the size of various data types in "C" programming language using "sizeof" operator.


#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   int num;
   float f;
   double d;

   system("clear");
   printf("\nSize of Character Type is %d in Byte(s)", sizeof(char));
   printf("\nSize of Character Type is %d in Byte(s)", sizeof(ch));

   printf("\nSize of Integer Type is %d in Byte(s)", sizeof(int));
   printf("\nSize of Integer Type is %d in Byte(s)", sizeof(i));

   printf("\nSize of Float Type is %ld in Bytes", sizeof(float));
   printf("\nSize of Float Type is %ld in Bytes", sizeof(f));

   printf("\nSize of Double Type is %ld in Bytes", sizeof(double));
   printf("\nSize of Double Type is %ld in Bytes", sizeof(d));

   return 0;
}