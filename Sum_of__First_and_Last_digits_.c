#include<stdio.h>
int main()
{
	int r,a,sum=0;
	scanf("%d",&a);
	while (a>0)
	{
		r=a%10;
		break;
	}
	while (a>0)
	{
		if (a<10)
		{
		sum=a%10;
		break;
	    }
	    else 
	    a=a/10;
	}
	printf("%d",sum+r);
}