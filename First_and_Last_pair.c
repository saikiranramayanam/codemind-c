#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    if (a%2!=0){
    for (i=0;i<a/2;i++)
    {
        
            printf("%d %d ",arr[i],arr[a-i-1]);
        
    }
    printf("%d 0",arr[a/2]);
    }
    else
    {
        for (i=0;i<a/2;i++)
    {
            printf("%d %d ",arr[i],arr[a-i-1]);
        
    }
    }
    
    
}