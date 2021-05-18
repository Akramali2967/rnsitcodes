#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
    char title[10];
    char author[10];
    int price;
    int no_pages;
};
int main()
{
    struct book b1[30];
    int n,ch;
    printf("Enter the number of books you want to have\n");
    scanf("%d",&n);
    printf("Enter the details one by one\n");
    for(int i=0;i<n;i++)
    {
        printf("FOR BOOK %d:\n",i+1);
        scanf("%s%s%d%d",b1[i].title,b1[i].author,&b1[i].price,&b1[i].no_pages);
    }

    for(int i=0;i<n;i++)
    {
        printf("THE DETAILS FOR BOOK %d:\n",i+1);
        printf("Title:%s  Author:%s  Price:%d  Pages:%d\n",b1[i].title,b1[i].author,b1[i].price,b1[i].no_pages);
    }
    printf("Type 1 For Updation Of Book Price \n");
    scanf("%d",&ch);

    if(ch)
    {
        char t[100];
        int flag= 0;
        int up;
        printf("Enter the title of the book\n");
        scanf("%s",t);
        printf("Enter updated price\n");
        scanf("%d",&up);
        for(int i=0;i<n;i++)
        {
            int val=strcmp(t,b1[i].title);
            if(val==0)
            {
                b1[i].price = up;
                flag=1;
                printf("THE DETAILS FOR BOOK AFTER UPDATION %d:\n",i+1);
                printf("Title:%s  Author:%s  Price:%d  Pages:%d\n",b1[i].title,b1[i].author,b1[i].price,b1[i].no_pages);
                break;
            }
        }
        if(flag==0)
          {
           printf("Book not found\n");
          }
    }
    return 0;
}      