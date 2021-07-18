#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the values of a and b");
   scanf("%d%d",&a,&b);
   temp = a;
   a = b;
   b = temp;
   printf("values of a and b %d\n%d\n",a,b);
   return 0;
   }
   
