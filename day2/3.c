//Program to print even and odd  digits of a given integer 
#include<stdio.h>

int digit(int n)
   {
       int r;int i=0;int a[20];
       while(n>0)
         {
             r=n%10;
             n=n/10;
             a[i]=r;
             i++;
         }
         for(int j=i-1;j>=0;j--)
           {
               if(a[j]%2==0)
                {
                 printf("Even Digits Are: %d\n",a[j]);
                }
           }
           for(int j=i-1;j>=0;j--)
           {
               if(a[j]%2!=0)
                {
                 printf("Odd Digits Are: %d\n",a[j]);
                }
           }

   }

int main()
  {
      int n;
      printf("Enter Number:");
      scanf("%d",&n);
      digit(n);

  }
