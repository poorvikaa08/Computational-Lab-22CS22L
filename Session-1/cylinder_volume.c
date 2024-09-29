/* Program to find the Volume of a Cylinder */

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float radius, height, volume;

   system("clear");
   printf("Enter the Radius and Height of a Cylinder: ");
   scanf("%f %f", &radius, &height);
   volume = (1.0/3) * (22/7.0) * radius * radius * height;
   printf("Volume of a Cylinder is %.2f\n", volume);
   return 0;
}