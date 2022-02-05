#include<stdio.h>
int array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}

void input(int n,int a[n])
{
  printf("Enter the numbers\n");
  for(int i=0;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int add(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<=n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int n,int a[n],int sum)
{
  printf("%d",a[0]);
  for(int i=1;i<=n;i++)
  {
    printf(" + %d",a[i]);
  }
  printf(" is %d",sum);
}

int main()
{
  int n;
  n=array_size();
  int a[n];
  input(n,a);
  int sum=add(n,a);
  output(n,a,sum);
  return 0;
}