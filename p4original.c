#include <stdio.h>

int input()
{
  int n;
  printf("Enter the number till where you want the fibonacci series\n");
  scanf("%d",&n);
  return n;
}

int fibo(int n)
{ int a=0,b=1,c=0;
  for(int i=2;i<=n;i++)
    { 
      c=a+b;
      a=b;
      b=c;
     
     // a=t1+t2;
    
    }
  return c;
}
void output(int n,int fi)
{
  
    
      printf("%d",fi);
    
}

int main()
{
  int n,fi;
  n=input();
  fi=fibo(n);
  output(n,fi);
  return 0;
  
}