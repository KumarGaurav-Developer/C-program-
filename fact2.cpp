#include<stdio.h>
int fact(int);
 int fact(int n)
 {
 if(n==1)
return 1;
else return n*fact(n-1);
}
main(){
	int n;
	printf("Enter number");
	scanf("%d",&n);
	printf("factoraial=%d\n",fact(n));
	
}
 
