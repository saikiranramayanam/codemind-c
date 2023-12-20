#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for (i=0;i<a;i++)
    {
        if (i%2==0)
        even+=arr[i];
        else
        odd+=arr[i];
    }
    int diff=abs(odd-even);
    printf("%d",diff);
}