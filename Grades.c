#include<stdio.h>
int main()
{
    int a,b,c,d,e,per;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per = ((a+b+c+d+e)*100)/500;
    printf("%s",per>=90 ? "Grade A" : per>=80 ? "Grade B" : per>=70 ? "Grade C" : per>=60?"Grade D" : per>=40 ? "Grade E" : "Grade F");
}