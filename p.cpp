#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n,a[50][50];
	printf("enter number of rows");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
