#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float d,h,g,c;
    if(b<=10000)
    {
    d=0.80;
    h=0.20;
    }
    else if (b<=20000)
    {
        d=0.90;
        h=0.25;
    }
    else 
    {
        d=0.95;
        h=0.30;
    }
    c=d*b+h*b;
    g=b+c;
    printf("%.2f",g);
}