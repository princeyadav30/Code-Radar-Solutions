#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    int k;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n-k+i];  
    }

    for (int i =0; i < n-k; i++) {
        temp[k+i] = arr[i];  
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}