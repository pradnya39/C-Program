#include<stdio.h>
int main()
{
   float m1,m2,m3,m4,m5,per;
   printf("enter the marks of five subjects");
   scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
   per=(m1+m2+m3+m4+m5)/5;
   printf("percentages are %f",per);
   if(per>=5)
   {
     printf("First Class With Distintion\n ");
   }
   else if(per<75 && per>=60)
       {
           printf("A Grade");
       }
       else if(per<60 && per >=45)
            {
                 printf("B Grade");
            }
            else if(per<45 && per>=35)
                 {
                    printf("C Grade");
                 }
   else
   {
       printf("unsuccesfull attempt,try again later!!");
   }         
   }
