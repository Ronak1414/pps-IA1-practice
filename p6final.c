#include<stdio.h>
void input(char *a,char *b)
{
  printf("enter the first string:\n");
  scanf("%s",a);
  printf("Enter the second string:\n");
  scanf("%s",b);
}

int cmp(char *a,char *b)
{ int i;
  for( i=0;a[i]==b[i] && a[i]!='\0';i++);
  return a[i]-b[i];

}

void output(char *a,char *b,int result)
{
  if (result>0)
  {
    printf("%s is grether than %s",a,b);
  }
  else if (result<0)
  {
    printf("%s is grether than %s",b,a);
    
  }
  else 
  printf("%s is equal to %s",a,b);
}

int main()
{
  char a[30],b[30];
  input(a,b);
  int result=cmp(a,b);
  output(a,b,result);
  return 0;
}