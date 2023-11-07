#include<stdio.h>
int main()
{
	int a,r,dc=0;
	scanf("%d",&a);
	while(a>0)
	{
	    r=a%10;
		dc++;
		a=a/10;
	}
	printf("%d",dc);
}