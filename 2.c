 #include<stdio.h>
  
void main()
  
{
  
  float a,b,c,d,e,avg;
  
  printf("Please enter 5 numbers ");
  
  scanf("%f%f%f", &a, &b, &c ,&d ,&e);
  
  avg=(a+b+c+d+e)/5;
  
  
  printf("\nAverage is  %f",avg);
  
  getch();
  
}