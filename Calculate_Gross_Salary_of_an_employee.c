#include<stdio.h>
int main()
{
    float b,p,g,h,d;
    scanf("%f%f%f",&b,&h,&d);
    p=0.12*b;
    g=b+h+d+p;
    printf("%.2f
%.2f",p,g);
}