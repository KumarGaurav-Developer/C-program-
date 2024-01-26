#include<stdio.h>
 main(){
	int arr[20],i,j,k,size;
	printf("\n please Enter the size\n");
	scanf("%d",&size);
	printf("\n Accept number");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		printf("\n array with unique list:");
		for(i=0;i<size;i++){
			for(j=i+1;j<size;){
				if(arr[j]==arr[i]){
					for(k=j;k<size;k++){
						arr[k]=arr[k+1];
						
					}
					size--;
				}
				else
				j++;
			}
			
		}
		for(i=0;i<size;i++){
			printf("%d",arr[i]);
			
		
	}
}
}



