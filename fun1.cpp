#include<stdio.h>
int fun()
{
	static int a=32;
	return a--;
	
}
main(){
	for(fun();fun();fun())
	{
		printf("%d",fun());
		
	}
}
