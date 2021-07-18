#include<stdio.h>
int main()
{
   long int n,i,f;
   printf("enter any no");
   scanf("%ld",&n);
   for(i=1;i<=n;i++)
   {
      f=f*i;
   }
  printf("\n Factorial of no : %ld",f);
  }
      
