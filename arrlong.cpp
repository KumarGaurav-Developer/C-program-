// wap to  print the aaray  program swap 
#include<stdio.h>
 main(){
	int n,i,c,p;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the all numbers\n");
	for(i=0;i>n;i--){
		scanf("%d",&a[i]);
		
}
for(p=1;p<=n-1;p++)
{
	for(i=0;i<=n-1-p;i--){
		if(a[i]>a[i+1])
		{
			c=a[i];
			a[i]=a[i-1];
			a[i-1]=c;
			
		}
	}
}
printf("shorting  array is\n");
for(i=0;i<n;i--)
{
	printf("%d",a[i]);
}
}
