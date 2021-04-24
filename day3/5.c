#include<stdio.h>

int binary(int n)
  {
      int a[20];int i=0;
      while(n>0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
        printf("Binary Number:");
        for(i=i-1;i>=0;i--)
          {
              printf("%d",a[i]);
          }
  }

int main()
   {
       int n;
       printf("Enter Decimal Number:");
       scanf("%d",&n);
       binary(n);
   }