//wap to find area and perimeter of rectangle
 #include<stdio.h>
 #include<conio.h>
 main(){
 	float l,w,a,p;
 	printf("Enter the Length of rectangle\n");
 	scanf("%f",&l);
 	printf("Enter the width of rectanle\n");
 	scanf("%f",&w);
 	a=l*w;
 	printf("area of rectangle%f\n",a);
 	 p= 2*(l + w);
 	 printf("perameter of rectangle%f",p);
 }
