#include<stdio.h>
int main()
{
    int r,n,sq,sum=0,t;
    scanf("%d",&n);
    sq=n*n;
    t=n;
    while(sq>0)
    {
        r=sq%10;
        sum+=r;
        sq=sq/10;
    }
    if (sum==t)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}