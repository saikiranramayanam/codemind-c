#include<stdio.h>
int main()
{
    float n,i,ap=0;
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        ap+=1/i;
    }
    printf("%.2f",ap);
}