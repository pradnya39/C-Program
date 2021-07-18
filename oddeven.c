#include<stdio.h>
int main()
{
   int num;
   printf("enter the number to be checked:");
   scanf("%d",&num);
   if(num%2 == 0)
   {
     printf("number is even");
   }
   if(num%2 != 0)
   {
     printf("number is odd");
   }
    return 0;
 }
    
