#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for(int a=1;a<=i;a++){
        for(j=1;j<=a;j++){
            printf("*");
        }
        printf("
");
    }
}