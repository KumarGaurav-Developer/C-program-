// wap to find the simple interst
#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,si;
clrscr();
printf("Enter the princepal.rate of interest&time to find simple interest:");
scanf("%d%d%d",&p,&r,&t);
si=(p*r*t)/100;
printf("simple intrest=%d",si);
getch();
}
