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
     int sum=0,avg;
    for (i=0;i<n;i++)
    {
        sum+=array[i];
    }
    avg=sum/n;
    int flg=0;
    for (i=0;i<n;i++)
    {
        if (avg==array[i])
        {
          flg=1;
          break;
        }
    }
    if(flg==1)
    {
        printf("True");
    }
    else 
    printf("False");
}