#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[100],b;
	int c=0,i;
	printf("enter a string");
	gets(a);
	strlwr(a);
	printf("enter a letter do you want count");
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		c++;
	}
	printf("there are %d '%c' in given string",c,b);
	getch();
}
