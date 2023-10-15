#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&x,&a,&b);
    if (a+(2*b)>=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}