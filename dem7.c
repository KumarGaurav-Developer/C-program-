//wap to find simple and compund intersert for given amount ,rate of interest and time period
#include<stdio.h>
#include<math.h>
main(){
	float p,r,t,si,ci;
	printf("Enter the period\n");
	Scanf("%f",&p);
	printf("Enter the rate \n");
	scanf("%f",&r);
	printf("Enter the time \n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest%f",si);
	ci= p*(pow((1 + r / 100), t));

	printf("\nCompound Interest=%f",ci);	
}