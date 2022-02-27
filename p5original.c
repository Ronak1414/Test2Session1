//-----------my code-----------------
/*#include<stdio.h>
#include<math.h>
int array()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{ 
  
  for(int i=0;i<n;i++)
    {
     a[i]=i;
    }
  a[1]=0;
}
void ero(int n,int a[n])
{
  int i=0;
  while(i<sqrt(n))
    {
      while(a[i]==0) 
        { 
          i++;
       for(int k=2*i;i<n;k+=i)
        a[i]=0;
      i++;
        }
    }
}

void display(int n,int a[n])
{ printf("Prime numbers are: \n");
	for(int i=0; i < n; i++)
	{
		if(a[i] != 0)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
  int n;
  n=array();
  int a[n];
  input_array(n,a);
  ero(n,a);
  display(n,a);
  return 0;
}*/

//-----------sir's code--------------

/*#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("Enter the size of the array: \n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}
void erothosthenes_sieve(int n,int a[n])
{
  int i=0;
  for(i=2;i<sqrt(n);i++)
    {
      for(;a[i]==0 ;i++)
        {for(int k=i+i;k<n;k += i)
          {a[i] = 0;
          }
        }
      i++;
    }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erothosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}*/


//------------final code---------------
#include<stdio.h>
 int input_n()
{
  int n;
	printf("Enter n value: ");
	scanf("%d", &n);
  return n;
}

void input(int n,int prime[n + 1])
{

	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
}

void ero(int n,int prime[n+1])
{
  	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
}

void output(int n,int prime[n+1])
{
  printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);
		}
	}
}
  
int main()
{
  int n;
  n=input_n();
  int prime[n+1];
  input(n,prime);
  ero(n,prime);
  output(n,prime);
  return 0;
}