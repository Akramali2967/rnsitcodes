//Program to access digits of a given integer and print them in reverse order
#include<stdio.h>

int digit(int n)
   {
       int r;
       while(n>0)
         {
             r=n%10;
             n=n/10;
             printf("Digits Are: %d\n",r);
         }
   }

int main()
  {
      int n;
      printf("Enter Number:");
      scanf("%d",&n);
      digit(n);

  }
