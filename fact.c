// wap to find the factorail number
#include<stdio.h>
void main() {
	int n,i,f;
	f=i=1;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	
		
	}
		printf("factrail is%d%d",i,f);
}  
