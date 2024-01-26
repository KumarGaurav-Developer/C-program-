// wap to calculate sum 5 subject and find precentage
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,sum,total,=600;
float per;
clrscr();
printf("Enter the 5 subject name:\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("sum=%d",sum);
per(sum*100)/total;
printf("precentage=%f",per);
getch();
}
