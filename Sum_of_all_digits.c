#include<stdio.h>
int main()
{
    int n,i,rev=0,r;
    scanf("%d",&n);
    for (i=n;i>0;i++)
    {
        r=n%10;
        rev+=r;
        n=n/10;
    }
    printf("%d",rev);
}