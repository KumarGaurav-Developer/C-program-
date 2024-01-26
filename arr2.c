#include<stdio.h>
void main(){
	int i,j,temp;
	int a[10]={456,35,34,30,28,22,20,19,18,15};
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				
			}
		}
	}

printf("printing stored element list...\n");
for(i=0;i<10;i++)
{
	printf("%d",a[i]);
	printf("\t");
	
}
}

