#include <stdio.h>
#include <stdlib.h>
#define e 0.001

double func(double x)
{
    return (x*x*x-4*x-9);
}

int main()
{
    double x1=2,x2=3,x;
    int i;
    if (func(x1) * func(x2) > 0)
    {
        printf("Initial guesses are wrong");
        return 0;
    }
    printf("__________________________________________________________________________________________________\n");
    printf("iter\t   x1\t\t   x2\t\t   x\t\t  f(x1)\t\t  f(x2)\t\t  f(x)\n");
    printf("__________________________________________________________________________________________________\n\n");
    for( i=1; i<=16; i++)
    {
        x = (x1+x2)/2;
        if(abs((x1-x2)/x1) < e)
            printf("%d.\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,x1,x2,x,func(x1),func(x2),func(x));
        if((func(x)*func(x1)) < 0)
            x2 = x;
        else if((func(x)*func(x2)) < 0)
            x1 = x;
    }
    printf("__________________________________________________________________________________________________\n");
    printf(" \nRoot of eq. x3-4x-9 is\n\n x = %lf\n",x);
    return 0;
}


