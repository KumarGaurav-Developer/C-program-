// wap to program deletion of an element from the specified location from an array
#include<stdio.h>
main(){
	int arr[30],num,i,loc;
	printf("\n Enter the number of element:");
	scanf("%d",&num);
	printf("\n Enter %d element :",num);
	for(i=0;i<num;i++)
	{
		scanf("%d,&arr[i]");
	}
	printf("\n location of the element to be deleted:");
	scanf("%d",&loc);
	while(loc<num){
		arr[loc-1]=arr[loc];
		loc++;
	}
	num--;
	
	for(i=0;i<num;i++){
	
	printf("\n %d",arr[i]);
	
	}
}


