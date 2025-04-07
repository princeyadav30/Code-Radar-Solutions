#include<stdio.h>
#include <limits.h> 
int main(){
    int n;
    scanf("%d",&n);
    if (n < 2) {
        printf("-1\n"); 
        return 0;
    }
    
   
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            
            second_max=max;
            max=arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max=arr[i];
        }
    }if (second_max == INT_MIN) {
        printf("-1\n"); // No second maximum exists
    } else {
        printf("%d\n", second_max);
    }
}