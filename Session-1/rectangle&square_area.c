/* Program to find area of Rectangle and Square */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float length,breadth,side,area_square,area_rect;
   system("clear");
   printf("Enter length and breadth of rectangle\n");
   scanf("%f%f", &length, &breadth);

   area_rect = length*breadth;

   printf("Enter side of square:\n");
   scanf("%f",&side);
   
   area_square=pow(side,2);
   printf("Area of a Rectangle is %.2f\n and Area of /Square is %.2f\n",area_rect,area_square);
   
  return 0;
}