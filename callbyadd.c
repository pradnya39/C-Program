//call by address//

#include<stdio.h>
void swap(int*,int*);
int main()
{
  int a=10,b=20;
  printf("\n Before swap a=%d b=%d",a,b);
  swap(&a,&b);
  printf("\n after swap a=%d b=%d",a,b);
 }
 void swap(int *p,int* q)
 {
 int t;
 t=*p;
 *p=*q;
 *q=t;
 }
  
