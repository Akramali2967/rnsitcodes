//Program to check whetehr a number is a pronic number or not using ternary operator
#include<stdio.h>
#include<stdlib.h>
int prone(int n)
  {
      int flag=0;
    for(int i=0;i<n;i++)
      {
            flag+=(i*(i+1)==n)?1:0;

      }
      if(flag==1)
        printf("%d is a Pronic Number",n);
      else
         printf("%d is Not a Pronic Number",n);  
  }

int main()
  {
      printf("Enter Your Number:");
      int n;
      scanf("%d",&n);
      prone(n);
  }
