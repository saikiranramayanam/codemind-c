#include<stdio.h>
int main()
{
    int n,i,factors=0;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        factors+=i;
    }
    printf("%d",factors);
}