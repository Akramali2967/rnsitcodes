#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};
void read(struct book *) ;
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;     
}      
   
 void read(struct book *b) 
{
     printf("Enter the title, author name, price and number of pages in order:\n");
     scanf("%s%s%f%d",(b->title),(b->author),&(b->price),&(b->no_pages)); 
}

void print(struct book *b) 
{
    printf("The book details are:\n");
    printf("Title:%s\nAuthor:%s\nPrice:%f\nPages:%d\n",(b->title),(b->author),(b->price),(b->no_pages)); 
}