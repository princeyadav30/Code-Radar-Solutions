#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        arr1[n-i-1]=arr[i];
    }
    int palindrome=1;
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr[i]){
            palindrome=0;
        }
    }
    if(palindrome){
        printf("YES");
    }else{
        printf("NO");
    }
}