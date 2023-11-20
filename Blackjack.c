#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=21-(a+b);
    if (a+b>=11 && a+b+c==21)
    printf("%d",c);
    else 
    printf("-1");
}