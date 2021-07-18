#include<stdio.h>
int main()
{
  int i,num,m=0,flag=0;
  printf("enter the number to be checked");
  scanf("%d" &num);
  m=num/2;
  for(i=2;i<=m;i++)
  {
     if(num%i==0)
     {
        printf("number is not prime");
        flag=1;
        break;
     }
  }   
     if(flag==0)
     {
       printf("number is prime");
     }
  return 0;
  }                                                                                           
