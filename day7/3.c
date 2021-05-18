#include <stdio.h>
#include <string.h>
 
int main()
{
  	char s[100];
  	int  w;
  	w = 1;
 
  	printf("\nEnter String :  ");
  	gets(s);
  	 	   	
  	for(int i=0; s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			w++;	
		} 
	}	
	printf("The Total Number of Words are:= %d\n",w);
	
  	return 0;
}