#include<stdio.h>
int input()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int prime(int n)
{ int a=-1;
  for(int i=2;i<n/2;i++)
    {
      if(n%i==0)
      {
        return a=1;
      }
    }
  return a;
}

void output(int n,int result)
{
  if(result>0)
  {
    printf("%d is not a prime number",n);
  }
  else 
    printf("%d is a prime number",n);
}

int main()
{
  int n;
  n=input();
  int result=prime(n);
  output(n,result);
  return 0;
}