#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void rev(char *st)
{
	int len = strlen(st);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = st[i];
		st[i] = st[len - 1 - i];
		st[len - 1 - i] = temp;
	}
}
void revr(char *s)
{
	for (int i = 0; i < s[i] != '\0'; i++)
	{
		char tr[100];
		int l = 0;
		while (s[i] != ' ')
		{
			tr[l] = s[i];
			i++;
			l++;
		}
		tr[l] = '\0';
		rev(tr);
		for (int k = 0; k < strlen(tr); k++)
			printf("%c", tr[k]);
		printf(" ");
	}
}
int main()
{
	char str[200];
	printf("Enter the string you want to reverse\n");
	gets(str);
	printf("Reversed string is\n");
	revr(str);

}