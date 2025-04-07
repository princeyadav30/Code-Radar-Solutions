#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sumarr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=abs(arr[i]);
        int sum=0;
        while(a>0){
            sum+=a%10;
            a=a/10;
        }
        sumarr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d ",sumarr[i]);
    }
}