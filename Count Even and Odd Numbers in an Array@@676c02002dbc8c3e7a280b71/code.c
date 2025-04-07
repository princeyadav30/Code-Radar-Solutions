#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count_even=0;    
    int count_odd=0;    

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even+=1;
        }else{
            count_odd+=1;
        }
    }
    printf("%d %d",count_even,count_odd);
}