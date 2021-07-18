#include<stdio.h>
int main()
{
  int i, n,sum=0;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d +",i);
    sum=sum+i;
  }
  printf("sum of series %d",sum);
}  
