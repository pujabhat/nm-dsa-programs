#include<stdio.h>
#include<conio.h>
int fibb(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return fibb(n-1)+fibb(n-2);
}
int main()
{
int a,i=0,j;
printf("enter a number:");
scanf("%d",&a);
printf("Fibbonacci series:");
    for(j=0;j<=a;j++)
    {
    printf("%d\n",fibb(i));
    i++;
}

return 0;
}
