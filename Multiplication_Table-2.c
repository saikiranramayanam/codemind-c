#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d%d",&a,&b);
    for (i=1;i<=b;i++)
    printf("%d x %d = %d
",a,i,a*i);
}