#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the fist number\n");
  scanf("%d",a);
    printf("enter the second number\n");
  scanf("%d",b);
}

void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d + %d = %d",a,b,sum);
}

int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}