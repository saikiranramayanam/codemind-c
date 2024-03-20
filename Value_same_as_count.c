#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0,count=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=0;j<n;j++){
            if(j<i && a==arr[j]){
                break;
            }
            if(a==arr[j]){
                count++; 
            }
        } 
        if(count==a){
            c++;
        }
        count=0;
    }
    printf("%d",c);
}