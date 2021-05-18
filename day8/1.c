#include <stdio.h>
struct book
{
    int book_id;
    char book_title[30];
    char author[25];
    float price;
};

int main()
{
   struct book b={121,"Spiderman","Peter Parker",566};
   printf("The book details are:\n");
    printf("Book id:%d\nTitle:%s\nAuthor:%s\nPrice:%f\n",(b.book_id),(b.book_title),(b.author),(b.price));
   return 0;     
}      