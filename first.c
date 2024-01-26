#include<stdio.h>
void main()
{
	float a,b,c,d,e,per;
	printf("Enter marks of 5 subject");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	sum(a+b+c+d+e)/500*100;
	if(per>=60){
	
	printf("First division");
}
	else if(per>=50&&per<60){
		printf("second division");
}
else if(per>=40&&per<50){
	printf("third division");
}
else{
	printf("student is fail");
	
}
}
	
	
	

