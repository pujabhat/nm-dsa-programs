#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}
int main()
{
int a,x;
printf("Enter the number: ");
scanf("%d",&a);
x=fact(a);
printf("Factorial:%d",x);
return 0;
}
