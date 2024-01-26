#include<stdio.h>
main(){
	int arr[100],i,n,l,s;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the element of aaray ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
l=arr[0];
s=arr[1];
for(i=0;i<n;i++)
{
	if(arr[i]>l)
	{
		s=l;
		l=arr[i];
		
	}
	else if(arr[i]>s&&arr[i]!=l){
		s=arr[i];
		
	}
}
printf("laragest number=%d\nsecond number=%d\n",l,s);


}
