//WAP to find the largest of given N numbers
#include<stdio.h>
 main(){
	int n,i,max,loc;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the all numbers\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
}
max=a[0];
loc=0;
for(i=1;i<n;i++)
{
	if(max<a[i])
	max=a[i];
	loc=i;
}
printf("largest number is%d:-\n its loction is %d",max,loc);
}
