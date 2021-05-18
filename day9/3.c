#include<stdio.h>
#include<stdlib.h>
#define max 20
void push(int a[],int *r,int *f)
   {
       if((*r)==max-1)
         {
             printf("Queue Overflow\n");
         }
        else
          {
            if((*f)==-1)
            *f=0; 
            int ele;
            (*r)++;
            printf("Enter Element:");
            scanf("%d",&ele);
             a[*r]=ele;
          }  
   }
void pop(int a[],int *r,int *f)
  {
      if((*f)==-1 ||(*f)>(*r))
        {
            printf("Stack Underflow\n");
            return;
        }
        printf("Popped Element is: %d\n",a[*f]);
        (*f)++;
  }   
 void display(int a[],int r,int f)
     {
         if(f==-1)
           {
               printf("Queue Underflow\n");
               return;
           }
         printf("Elements In the Queue are:");
         for (int i =f;i<=r;i++)
         {
            printf("%d\t",a[i]); 
         }
         printf("\n");
     } 
 int main()
    {
        int a[max];
        int r=-1;
        int f=-1;
        int ch;
        for(;;)
          {
              printf("\nEnter 1 For Add Element In Queue\n");
              printf("Enter 2 For Delete Element In Queue\n");
              printf("Enter 3 For Display Elements Of Queue\n");
              printf("Enter 4 For Exit\n");
              printf("Enter Choice:");
              scanf("%d",&ch);
              switch (ch)
              {
              case 1:push(a,&r,&f);
                     break;
              case 2:pop(a,&r,&f);
                     break;
              case 3:display(a,r,f);
                     break;
              case 4:exit(0);                
              default:printf("Invalid Choice\n");
                  break;
              }
          }
    }    