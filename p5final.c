#include<stdio.h>
float input()
{
  float n;
  printf("Enter the number\n");
  scanf("%f",&n);
  return n;
}

float my_sqrt(float n)
{
float t=0,x=n/2;
for(int i=0;i<x;i++)
{
  x=(x+n/x)/2;
  t=x;
}
return t;
}

void output(float n,float result)
{
  printf("Squre root of %0.3f is %0.3f",n,result);
}

int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}