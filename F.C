//wap to show swap of two no whithout using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr():
printf("Enter the value a&b:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swaping number a&b:%d",a,b);
getch();
}
