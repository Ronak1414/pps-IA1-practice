#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a); 
return a;
}

int cmp(int a,int b,int c)
{
  if (a>b && a>c)
  {
    return a;
  }
  else if (b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

void output(int a,int b,int c,int large)
{
  printf("The largest of the %d , %d ,%d is\n",a,b,c);
  printf("%d",large);
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  int large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}