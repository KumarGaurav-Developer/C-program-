//wap to find average of 20 numbers given by user.
#include<stdio.h>
main(){
	int a[20],i,s=0;
	float avg;
	printf("Enter the 20 number");
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	avg=s/20.0;
	printf("avg=%f",avg);
	
	
}
