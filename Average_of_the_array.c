#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    float sum=0,avg;
    for (i=0;i<n;i++)
    {
        sum+=array[i];
    }
    avg=(float)sum/n;
    printf("%.2f",avg);
}