//fibonacci//
#include<stdio.h>
int main()
{
  int n,i,a,b,c,sum=0;
  printf("\n Enter the range");
  scanf("%d",&n);
  a=0;
  b=1;
  sum=a+b;
  printf("%d %d",a,b);
  for(i=1;i<=n;i++)
  {
     c=a+b;
     printf("%d",c);
     sum=sum+c;
     a=b;
     b=c;
   }
   
}    
