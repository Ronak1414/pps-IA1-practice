#include<stdio.h>
typedef struct complex
{
  float r,i;
}complex;

int input_n()
{
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
}


complex input()
{
  complex c;
  printf("Enter the real part: ");
  scanf("%f",&c.r);
   printf("Enter the imaginary part: ");
  scanf("%f",&c.i);
  return c;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.r=a.r+b.r;
  sum.i=a.i+b.i;
  return sum;
}

void input_complex(int n,complex c[n])
{
  for(int i=0;i<n;i++)
  {c[i]=input();}

}

complex add_complex(int n,complex c[n])
{
  complex sum;
  sum.r=0;
  sum.i=0;
  for (int i=0;i<n;i++)
  {
    sum=add(sum,c[i]);
   }
    return sum;
}
 
 void output(int n,complex c[n],complex result)
  { int i;
    if(n==1)
    {
      printf("The sum %0.1f + %0.1fi is %0.1f + %0.1fi",c[0].r,c[0].i,result.r,result.i);
    }
    else
    {
      printf("The sum of ");
      for( i=0;i<n-1;i++)
      {
        printf("(%0.1f + %0.1fi) + ",c[i].r,c[i].i);
      }
      printf("(%0.1f + %0.1fi)  is %0.1f +%0.1fi",c[n-1].r,c[n-1].i,result.r,result.i);
    } 
  }

int main()
{
  int n=input_n();
  complex c[n],sum;
  input_complex(n,c);
  sum=add_complex(n,c);
  output(n,c,sum);
  return 0;
}