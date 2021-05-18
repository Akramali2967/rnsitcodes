#include<stdio.h>
#include<stdlib.h>
#define max 20
void push(int a[],int *top)
   {
       if((*top)==max-1)
         {
             printf("Stack is Full\n");
             return;
         }
         (*top)++;
         int ele;
         printf("Enter Element:");
         scanf("%d",&ele);
         a[*top]=ele;
   }
void pop(int a[],int *top)
  {
      if((*top)==-1)
        {
            printf("Stack Is Empty\n");
            return;
        }
        printf("Popped Element is: %d\n",a[*top]);
        (*top)--;
  }   
 void display(int a[],int top)
     {
         if(top==-1)
           {
               printf("Stack Is Empty\n");
               return;
           }
         printf("Elements In the Stack are:");
         for (int i = top; i > -1; i--)
         {
            printf("%d\t",a[i]); 
         }
         printf("\n");
     } 
 int main()
    {
        int a[max];
        int top=-1;int ch;
        for(;;)
          {
              printf("\nEnter 1 For Add Element In Stack\n");
              printf("Enter 2 For Delete Element In Stack\n");
              printf("Enter 3 For Display Elements Of Stack\n");
              printf("Enter 4 For Exit\n");
              printf("Enter Choice:");
              scanf("%d",&ch);
              switch (ch)
              {
              case 1:push(a,&top);
                     break;
              case 2:pop(a,&top);
                     break;
              case 3:display(a,top);
                     break;
              case 4:exit(0);                
              default:printf("Invalid Choice\n");
                  break;
              }
          }
    }    