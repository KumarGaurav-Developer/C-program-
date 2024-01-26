#include<stdio.h>
float sum(float,float,float);
float sum(float a,float b,float c);
{
	float s;
	s=a+b+c;
	return(s);
	
}
main(){
	float x,y,z;
	printf("Enter the three values");
	scanf("%f%f%f",&x,&y,&z);
	sum(x,y,z);
	
}
