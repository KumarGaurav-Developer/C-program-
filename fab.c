/*wap to print fibonacci series upto N terms
 
 fibonacci series:
 0 1 1 2 4 5 8 13 21 34 55 89.............
 */
 #include<stdio.h>
 main(){
 	int i,f,s,n,next;
 	printf("Enter the terms of number");
 	scanf("%d",&n);
 	f=0;
 	s=1;
 	printf("%d %d",f,s);
	 for(i=1;i<=n-2;i++)
	 {
	 	next=f+s;
	 	printf(" %d",next);
	 	f=s;
	 	s=next;
	 	
	 }
	 
	 }
