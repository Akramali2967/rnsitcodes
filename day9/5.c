#include<stdio.h>
 
int largest(int a[],int n) 
   {
       int max=0;
       for(int i=0;i<n;i++)
         {
             if(max<a[i])
              {
                  max=a[i];
              }
         }
         return max;
   }
int main()
   {
       int a[20];
       int n;
       printf("Enter Number Of Data To be Stored:");
       scanf("%d",&n);
       for(int i=0;i<n;i++)
          {
              scanf("%d",&a[i]);
          }
        int max=largest(a,n);
        int j=0;
        if(a[j]==max)
          {
            printf("No Elements Before Largest");
          } 
        else
          {  
            printf("Elements Before Largest:\n");
             for(j=0;j<n;j++)
                {  
              if(a[j]!=max)
                  {
                    printf("%d\t",a[j]);
                  }
                else if(a[j]==max)
                  {
                     j++;
                     break;
                  }
                } 
          }     
          if(j==n)
            {
                printf("\nNo Elemts After Largest\n");
            }
            else
             {
              printf("\nElements After Largest:\n");
              while(j<n)
                {
                  printf("%d\t",a[j]);
                 j++;
                }
             } 
             printf("\n");
   }