#include<stdio.h>
int main()
{
    int n,i=1,prime=0;
    scanf("%d",&n);
    while (i<=n)
    {
        if (n%i==0)
        prime++;
        i++;
    }
    if (prime==2)
    printf("Prime");
    else 
    {
        printf("Not Prime");
    }
    
}