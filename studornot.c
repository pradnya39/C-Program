#include<stdio.h>
int main()
{
  float cp;
  char user;
  printf("enter the cost price");
  scanf("%f",&cp);
  printf("is user a student or not :");
  scanf("%c",&user);
  if(user="student" && cp>=500)
  {
    printf("\nyou got 10percent of discount");
  }
  else
  {
    printf("\nyou got 5percent of discount");
  }
    
  if(user !=" not student" && cp>500) 
  {
    printf("you got 8percent of discount");
  }
  else
  {
    printf("you got 2 percent of discount");
  }
  return 0;
  }
  
