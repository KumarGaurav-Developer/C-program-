// wap to find average of given 5 integer number 
 
#include<stdio.h>
main(){
int a,b,c,d,e,total=5;
float avg;
printf("Enter the 5 number  integer numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg=(float)(a+b+c+d+d+e)/total;	 
printf("Average of all number=%f",avg);
}
