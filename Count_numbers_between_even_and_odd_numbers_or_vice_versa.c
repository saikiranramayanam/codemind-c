#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=1;i<n-1;i++)
    {
        if (arr[i-1]%2==0 && arr[i+1]%2!=0 || arr[i-1]%2!=0 && arr[i+1]%2==0)
        count++;
    }
    printf("%d",count);
}