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
int main()
  {
      char s[100];
      printf("Enter String:");
      gets(s);
      int l=slen(s);
      char m;
      int max=0;int f[256]={0};
      for(int i=0;i<l;i++)
        {
            f[s[i]]++;
            if(max<f[s[i]])
              {
                  max=f[s[i]];
                  m=s[i];
              }
        }
      printf("Highest occurence character is:%c and its ASCII value is:%d\n",m,m);  
  }