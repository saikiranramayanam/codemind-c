#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,i,sum=0,t;
	scanf("%f%f",&a,&b);
	for (i=a;i<=b;i++)
	{
		t=sqrt(i);
		 sum+=t;
	}
	printf("%.2f",sum);
}