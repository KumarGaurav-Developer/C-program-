// use of calloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,*p,i,min;
	printf("Enter many number are there");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter all number");
	for(i=0;i<n;i++){
	
	scanf("%d",p+i);
}
min=*p;
for(i=1;i<n;i++)
{
	if(min>*(p+i)){
		min=*(p+i);
	}
}
printf("smallest number number=%d",min);
}
