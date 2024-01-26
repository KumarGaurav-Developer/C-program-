#include<stdio.h>
   int main(){
 int i,s=0,n;
 printf("Enter the term");
 scanf("%d",&n);
 for(i=1;i<=n;i+=2)
 {
 s=s+pow(i,i)/fact(i);
 }
 printf("sum of series =%d",s);
}
 int fact(int n){
 int f=1,i;
 for(i=1;i<=n;i++)
 {
 f*=i;
 }
 return f;
}

