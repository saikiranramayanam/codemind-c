#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (i=0;i<a;i++)
    {
        if(arr[i]%2==1)
        count=1;
    }
    if (count==0)
    {
        printf("True");
    }
    else
    printf("False");
}