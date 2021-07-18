#include<stdio.h>
int main()
{

float km,m,cm,mm;
printf("Enter the value for km");
scanf("%f",&km);
m = km*1000.0;
cm = m*100.0;
mm = m*10.0;
printf("Distance in meter is %f\n",m);
printf("Distance in centimeter is%f\n",cm);
printf("Distance in milimeter is%f\n",mm);
return 0;
}
