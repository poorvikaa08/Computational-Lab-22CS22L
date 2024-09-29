// Program to find the Volume of a Sphere


/*
To find the volume of a Sphere using the formula,
Volume = 4 *Π *r * r * r/ 3
*/

#include <stdio.h>
#include <math.h>   //for pow(radius,3)
#include <stdlib.h> //for system("clear")

int main()
{
   float radius, volume;

   system("clear");
   printf("Enter the Radius of a Sphere: ");
   scanf("%f", &radius);
   //volume = (4.0/3.0) * (22.0 / 7.0) * pow(radius,3);
   volume = (4.0/3) * (22/7.0) * (radius * radius * radius);   
   printf("Volume of a Sphere is %.2f\n", volume);
   return 0;
}