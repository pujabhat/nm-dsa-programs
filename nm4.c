#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001

double func(double x)
{
    return (x*x*x - 4);
}

int main()
{
    double x,x1=1,x2=2;
    int i=1;
    printf("_________________________________________________________________________________________________\n");
    printf(" iter\t   x1\t\t   x2\t\t  f(x1)\t\t  f(x2)\t\t  f(x)\t\t error\n");
    printf("_________________________________________________________________________________________________\n\n");
    printf("  %d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,x1,x2,func(x1),func(x2),((x1*func(x2))-(x2*func(x1)))/(func(x2)-func(x1)),fabs(x2-x1)/x2);
    for( i=1; i<=6; i++)
    {
        x = ((x1*func(x2))-(x2*func(x1)))/(func(x2)-func(x1));
        
        if((abs(x2-x1)/x2) < e)
            printf("  %d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,x1,x2,func(x1),func(x2),x,fabs(x2-x1)/x2);
        
        x1 = x2;
        x2 = x;
    }
    printf("_________________________________________________________________________________________________\n");
    printf("\n Root of x^3-4 = %lf\n",x);
    return 0;
}
