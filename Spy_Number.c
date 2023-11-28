#include<stdio.h>
int main()
{
    int n,rev=0,sum=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev+=r;
        sum*=r;
        n=n/10;
    }
    if (rev==sum)
    {
        printf("Spy Number");
    }
    else 
    printf("Not Spy Number");
    
}