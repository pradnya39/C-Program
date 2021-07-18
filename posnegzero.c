//WAP to check whether Number is positive or negative or ZERO.//

#include<stdio.h>
int main()
{
int n;
printf("enter number to be checked : ");
scanf("%d",&n);
if(n%2==0)
{
  printf("number is positive");
}
else if(n%2!=0)
{
printf("number is negative");
}
else
{
printf("number is zero");
}
}
