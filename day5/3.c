#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int slen(char *s)
    {
        int count=0;
       for(int i=0; s[i] != '\0'; i++)
        {  
           if(s[i]!= ' ')  
           {
            count++;
           }
        }  
        return count;
    }  
void display(char *s)
   {
       int l=slen(s);int pos=0;int j=0;
       char w[50][50];
       for(int i=0;i<=l;i++)
        {
            if(s[i]==' '||s[i]=='\0')
              {
               w[pos][j]='\0';
               pos++;  
               j=0;  
              }
         else
            {
            w[pos][j]=s[i];
            j++;
           }
        }
        for(int i=0;i<=pos;i++)
         {
             printf(" %s\n",w[i]);
         }
   }   
int main()
  {
      char str[100];
      gets(str);
      display(str);
      return 0;
  }