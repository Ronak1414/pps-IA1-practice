#include<stdio.h>
typedef struct complex
{
  float r,i;
}complex;

complex input()
{
  complex a;
  printf("Enter the real part: ");
  scanf("%f",&a.r);
   printf("Enter the imaginary part: ");
  scanf("%f",&a.i);
  return a;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.r=a.r+b.r;
  sum.i=a.i+b.i;
  return sum;
}

void output(complex a,complex b,complex sum)
{
  printf("%0.1f + %0.1fi + %0.1f + %0.1fi is equal to %0.1f + %0.1fi",a.r,a.i,b.r,b.i,sum.r,sum.i);
}

int main()
{
  complex a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}