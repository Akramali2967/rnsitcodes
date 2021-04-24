//Program to check whether a given number is  a prime or not  
#include<stdio.h>

int prime(int n)
    {
        for(int i=2;i<n;i++)
          {
            if(n%i==0)
              {
                  printf("%d is Not a Prime Number",n);
                  return 0;
              } 
          }
         printf("%d is a prime Number",n); 
    }

int main()
  {
      int n;
      printf("Enter Number:");
      scanf("%d",&n);
      prime(n);

  }
