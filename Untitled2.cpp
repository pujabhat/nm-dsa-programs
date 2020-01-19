#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string[100],a[50][20],temp[20];
	int c=0,count[26]={0},x,n,i,j,strcmpa[i],a[j];
	printf("enter how many no?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d name ",i+1);
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strtcmp(a[i],a[j])>0)
			{strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],temp);
			}
		}
		}
		for(i=0;i<n;i++)
		puts(a[i]);
		}
	printf("enter a string");
	gets(string);
	for(i=0;i!='\0';i++)
	{
		if(string[c]>='a'&& string[c]<='z')
	{
		x=string[c]-'a';
		count[x]++;
	}
	c++;
}
for(c=0;c<26;c++)
	printf("%c occur %d times in the string\n",c+'a',count[c]);
	getch();
}
