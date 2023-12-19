#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int array[n];
   for (int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   int sum=0;
   for (int i=0;i<n;i++)
   {
       sum=sum+array[i];
   }
   printf("%d",sum);
}
   
