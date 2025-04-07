#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    a=a%n;
    
    for (int i = 0; i < a; i++) {
        temp[i] = arr[n - a + i];  
    }

    for (int i = a; i < n; i++) {
        temp[i] = arr[i - a];  
    }

    for(int i=0;i<n;i++){
        printf("%d\n",temp[i]);
    }
}