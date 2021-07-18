// prime using for loop//

#include<stdio.h>
int main()
{
   int i,num;
   printf("\n enter any number");
   scanf("%d",&num);
   for(i=2;i<num;i++)
   {  
     if(num%i==0)
     {
      printf("%d is not a prime number",num);
      break;
      }
    }
    if(num==1)
    {
    printf("%d is a prime number",num);
    }
}      
