#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void accept(char *str)
  {
     printf("Enter Word:");
     scanf("%s",str);
  }
void display(char *str)
  {
    printf("Entered Word:%s\n",str);
  }  
int main()
  {
      char *str;
      str=(char*)malloc(sizeof(char));
      accept(str);
      display(str);
      return 0;
  }