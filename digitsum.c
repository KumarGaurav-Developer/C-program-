//wap to sum of all digit 
#include<stdio.h>
void main(){

int n,i,sum=0;
printf("Enter the digit\n");
scanf("%d",&n);
while(n>=0)
{
i=n%10;
	sum=sum+i;
	n=n/10;
	
}
printf("sum of all digit%d",sum);}

