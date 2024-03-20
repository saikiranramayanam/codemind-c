#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],marr[n+m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
         marr[k]=sum;
        k++;
        sum=0;
    }
    sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[j][i];
        }
        marr[k]=sum;
        k++;
        sum=0;
    }
    int max=marr[0];
    for(int i=0;i<=k;i++){
        if(marr[i]>=max){
            max=marr[i];
        }
    }
    printf("%d",max);
}