#include<stdio.h>
int main()
{
  int n,i,a,b,c,sum=0,choice;
  printf("enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1 :
     printf("enter the number to check prime or not");
     scanf("%d",&n);
     if(n%2==0)
     {
      printf("number is prime");
     }
     else
     {
     printf("number is not prime");
     }
     break;
   case 2:
      printf("enter the range");
      scanf("%d",&n);
      a=0;
      b=1;
      sum=a+b;
      printf("%d%d",a,b);
      for(i=1;i<=n;i++)
      {
       c=a+b;
       printf("%d",c);
       sum=sum+c;
       a=b;
       b=c;
      }
      break;
   case 3:
      printf("enter a b and c");
      scanf("%d%d%d",&a,&b,&c);
      if(a>b && a>c)
      { 
       printf("a is largest");
      }
      else if(b>a && b>c)
      {
       printf("b is largest");
      }
      else
      {
       printf("c is largest");
      }
      break;
      
   default :
     
       printf("have a nice day");
       break;
       }
   }    
    
