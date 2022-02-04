#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int sum(int n)
{
  int add=0;
  for(int i=0;i<=n;i++)
  {
    add=add+i;
  }
 return add; 
}

void output(int n,int sum)
{ printf("1");
  for(int i=2;i<=n;i++)
  {
    printf(" + %d  ",i);
  }
  printf("\n is %d",sum);
}

int main()
{
  int n,add;
  n=input_n();
  add=sum(n);
  output(n,add);
  return 0;
}