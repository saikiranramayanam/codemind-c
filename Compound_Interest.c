#include<stdio.h>
#include<math.h>
int main()
{
    float ci,p,t,r;
    scanf("%f%f%f",&p,&r,&t);
    ci =p*pow(1+r/100,t)-p;
    printf("%.2f",ci);
}