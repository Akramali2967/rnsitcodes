#include<stdio.h>
#include<stdlib.h>

int factor(int n)
  {
      printf("Factor are :  ");
    for(int i=1;i<=n;i++)
      {
        if(n%i==0)
          {
              printf("%d\n",i);
          }
      }
  }

 int main()
   {
       int n;
       printf("Enter Your Number:");
       scanf("%d",&n);
       factor(n);
   } 
