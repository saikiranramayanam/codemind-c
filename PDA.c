#include<stdio.h>
int main()
{
    int i,n,factors=0;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        factors+=i;
    }
    if (factors==n)
    printf("PERFECT");
    else if (factors<n)
    printf("DEFICIENT");
    else 
    {
        printf("ABUNDANT");
    }
    
}