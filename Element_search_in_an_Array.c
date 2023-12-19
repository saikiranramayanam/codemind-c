#include<stdio.h>
int main()
{
    int a,i,z;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    int count=0;
    for (i=0;i<a;i++)
    {
        if (z==arr[i])
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