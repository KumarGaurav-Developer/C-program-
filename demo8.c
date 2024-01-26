#include<stdio.h>
#include<conio.h>
main(){
	int b, h, aot, x,y,z, perimeter;

  printf("Enter base and hight of a triangle\n");
  scanf("%d %d", &b,&h);

  aot = (b*h)/2;
  printf("Area of the triangle = %d\n", aot);

  printf("Enter sides of a triangle\n");
  scanf("%d %d %d", &x, &y, &z);

  perimeter= x+y+z;
  printf("Perimeter of a triangle : %d", perimeter);
}

