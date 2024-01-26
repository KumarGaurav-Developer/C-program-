//wap to convert temperature from digree centigrade to fahrenheit
#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter the temp in entigrade:");
scanf("%f",&c);
f=(1.8*c)+32;
printf("temp in fahrenheit=%f",f);
getch();
}
