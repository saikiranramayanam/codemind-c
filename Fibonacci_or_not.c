#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=a+b,count=0;
    scanf("%d",&n);
    while (c<n)
    {
        c=a+b;
        a=b;
        b=c;
        if (c==n)
        {
            count=1;
            break;
        }
    }
    if (count==1)
    printf("True");
    else 
    printf("False");
}