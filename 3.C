#include<stdio.h>
#include<conio.h>

void main() {
   float radius, area;
       
   printf("Enter the radius of Circle : ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   printf("Area of Circle = %f", area);
  getch();
  }