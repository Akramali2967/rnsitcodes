#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct str
{
	char cont[100];
} inp, check, var;


int main()
{
	printf("Enter the main string\n");
	gets(inp.cont);

	printf("Enter the string to be checked\n");
	gets(check.cont);

	for (int i = 0; inp.cont[i] != '\0'; i++)
	{
		var.cont[i] = inp.cont[i];
	}
	int flag  = 1;

	for (int i = 0; check.cont[i] != '\0'; i++)
	{
		int f1 = 0;
		for (int j = 0; var.cont[j] != '\0'; j++)
		{
			if (var.cont[j] == check.cont[i])
			{	
				var.cont[j] == -1;
				f1 = 1;
				break;
			}
		}
		if (!f1)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	    printf("It is an anagram\n");
	else
		printf("Not an anagram\n");

}