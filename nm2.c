#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001

double func(double x)
{
    return (x*x - 3*x + 2);
}

double derv(double x)
{
    return (2*x - 3);
}

int main()
{
    double x=0,x1,h;
    int i;
    printf("_________________________________________________________________________________\n");
    printf("iter\t   x\t\t  f(x)\t\t  f'(x)\t\t   x1\t\t|x-x1|\n");
    printf("_________________________________________________________________________________\n");
    for(i=1; i<=5; i++)
    {
        h = func(x)/derv(x);
        x1 = x - h;
        if(abs((x-x1)/x) < e)
            printf("%d.\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,x,func(x),derv(x),x1,fabs(x-x1));
        x = x1;
    }
    printf("_________________________________________________________________________________\n");
    printf("\nRoot of x2-3x+2 : %lf\n",x1);
    return 0;
}
