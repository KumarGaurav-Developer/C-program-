#include<stdio.h>
#include<stdlib.h>
main(){
	int i,n,j,min,index;
	printf("Enter the array size of number");
	scanf("%d",&n);
	printf("Enter the array element");
	int a[n];
	for(i=0;i<=n-2;i++)
	{
		scanf("%d",a[i]);
		min=a[i],index=i;
		for(j=i+1;j<=n-1;i++)
		{
			if(min>a[j]){
				min=a[j];
				index=j;
				
			}
		}
		a[index]=a[i];
		a[i]=min;
	}
	printf("sorted list is\n");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
