// wap to display a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][2],b[3][2],i,j;
clrscr();
printf("Enter the value of A matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the value of B matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);
}
printf("\n matrix is\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("\nb matrix is\n\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
getch();
}

