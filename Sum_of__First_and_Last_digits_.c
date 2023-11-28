#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int b=n%10;
    for(int a=n;a>0;a=a/10){
        int c=a%10;
        if(a<10){
            printf("%d",a+b);
        }
    }
}