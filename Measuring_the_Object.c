#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a==b||a==c||a==d||a==b+c||a==c+d||a==b+d||a==b+c+d)
    printf("YES");
    else
    printf("NO");
}