#include<stdio.h>
int main()
{
    int units;
    float c,sur=0,bill,tot;
    scanf("%d",&units);
    if (units<=199)
    c = 1.20;
    else if(units>=200 && units<400)
    c = 1.40;
    else if (units>=400 && units<600)
    c = 1.60;
    else if (units>=600 && units<800)
    c = 1.80;
    else 
    c = 2.00;
    bill = units*c;
    if (bill>400)
    sur = 0.15*bill;
    tot=bill + sur;
    printf("Units Consumed: %d
",units);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",sur);
    printf("Total Amount: %.2f",tot);
}
