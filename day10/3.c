#include <stdio.h>
#include <stdlib.h>

struct node
{
    int empid;
    struct node *link;
};


void display(struct node *t)
{
    printf("Elements Are:");
    while(t!=NULL)
      {
          printf("%d",t->empid);
          t=t->link;
      }
    printf("\n");
}
void merge(struct node *a,struct node *b)
{
    if( a != NULL && b!= NULL )
    {
        if (a->link == NULL)
            a->link = b;
        else
            merge(a->link,b);
    }
    else
    {
        printf("One of the linked list is Empty\n");
    }
}

int main()
{
    struct node *prev,*a, *b, *p;
    int n,i;
    printf ("number of elements in first ll:");
    scanf("%d",&n);
    a=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->empid);
        p->link=NULL;
        if(a==NULL)
            a=p;
        else
            prev->link=p;
        prev=p;
    }
    printf ("number of elements in second ll:");
    scanf("%d",&n);
    b=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->empid);
        p->link=NULL;
        if(b==NULL)
            b=p;
        else
            prev->link=p;
        prev=p;
    }
       merge(a,b);
       display(a);
       return 0;
}