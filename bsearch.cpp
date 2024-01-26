// wap to find the binary search
#include<stdio.h>
main(){
	int a[500],i,beg,end,mid,item,n;
	printf("Enter the size of list");
	scanf("%d",&n);
		printf("Enter the all element");
		for(i=0;i<n;i++){
			

	scanf("%d",&a[i]);
}
	printf("Enter the element to be searched");
	scanf("%d",&item);
	beg=0;end=n-1;mid=(beg+end)/2;
	while(item!=a[mid]&&beg<=end)
	{
		if(item>a[mid])
		beg=mid+1;
		else
		end=mid-1;
		mid=(beg+end)/2;
		
	}
	if(item==a[mid])
	printf("location=%d",mid);
	else
	printf("item not found");
	
}

