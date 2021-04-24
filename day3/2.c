#include<stdio.h>
#include<stdlib.h>

int factor(int n)
  {
      int flag=0;
      printf("Prime Factor are :  \n");
    for(int i=1;i<=n;i++)
      {
        if(n%i==0)
          {
              flag=0;
              for(int j=2;j<i/2;j++)
               {
                   if(i%j==0)
                     {
                         flag=1;
                         break;
                     }
               }
               if(flag==0 && i!=1)
                 {
                     printf("%d \t",i);
                 }
          }
      }
      printf("\n");
  }
 int main()
   {
       int n;
       printf("Enter Your Number:");
       scanf("%d",&n);
       factor(n);
   } 