#include<stdio.h>
int mul(int,int);
int main(void)
{
    int y;
    y = mul(10,5);
    printf("%d\n",y);
    return 0;
}
int mul(int a,int b)
{
    // int c;
    // c = a*b;
    return a*b;
}