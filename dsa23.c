#include <stdio.h>
#include<conio.h>
int hcf(int n1, int n2);
int main() {
    int a, b,x;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    x=hcf(a,b);
    printf("G.C.D : %d",x );
    getch();
    return 0;
}
int hcf(int n1, int n2) {
    if (n2 != 0)
        return  hcf(n2,n1%n2); 
    else
        return n1;
}
