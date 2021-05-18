#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[500];
	printf("Enter the string one by one\n");
	int max = -1, min = 99999;
	gets(str);
   while (1)
  	{
		scanf("%s", str);
        int val = atoi(str);
        if (val > max)
          {
			max = val;
          }
		if (val != 0)
         { 
			if (val <  min)
             {
				min = val;
             }
         }
		if (str[0] == 'd' && str[1] == 'o' && str[2] == 'n' && str[3] == 'e')
         {
           break;
         }
	}
	printf("The maximum element is %d and minumum element is %d \n", max, min);
}
