#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        factorial*=i;
    }
    printf("%d",factorial);
}