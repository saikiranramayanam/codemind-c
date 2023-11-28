#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,square=0,t,r;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        t=i*i;
        sum+=t;
    }
    for (i=1;i<=n;i++)
    {
        square+=i;
    }
    r=square*square;
    int diff = abs(r-sum);
    printf("%d",diff);
}