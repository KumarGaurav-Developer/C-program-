//
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float pi=3.14,area,ci;
clrscr();
printf("Enter the radius number:-");
scanf("%d",&r);
area=pi*r*r;
print("area of circle=%f",area);
ci=2*pi*r;
printf("circumference=%f",ci);
getch();
}
