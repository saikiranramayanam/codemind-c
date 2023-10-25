#include<stdio.h>
int main()
{
    int c;
    float u,bill,sur,tot;
    scanf("%d",&c);
    if (c<=199)
    u=1.20;
    else if(c>=200 && c<400)
    u=1.50;
    else if (c>=400 && c<600)
    u=1.80;
    else 
    u=2.00;
    bill=c*u;
    if (bill>400)
    sur = 0.15*bill;
    else 
    sur=100;
    tot = bill+sur;
    printf("%.2f",tot);
}