#include<stdio.h>
int main()
{
    int x,y,l;
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        l=x-y;
        printf("%d",l);
    }
    else
    printf("0");
}
