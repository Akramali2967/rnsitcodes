//Program To Check if the given number is Happy Number or not!!
//A number is said to be happy if it yields 1 when replaced by the sum of squares of its digits repeatedly. 
//If this process results in an endless cycle of numbers containing 4, then the number will be an unhappy number.
#include<stdio.h>

int check(int n)
   {
       int r=0;int sum=0;
       while(n>0)
         {
             r=n%10;
             sum=sum+(r*r);
             n=n/10;
         }
         return sum;
   }

int main()
   {
     int n;int ch=n;
     printf("Enter Number:");
     scanf("%d",&n);
     while(ch!=1 && ch!=4)
        {
          ch=check(ch);
        }
        if(ch==1)
          {
              printf("%d is a Happy Number",n);
          }
        else if(ch==4)
           {
               printf("%d is Not a Happy Number",n);
           }
   }
