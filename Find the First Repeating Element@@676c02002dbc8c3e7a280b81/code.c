#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=1;
    int max=0;
    int max_count=1;
    for(int i=0;i<n;i++){
        count=1;
       for(int j=i+1;j<n;j++){
       if(arr[i]==arr[j]){
        count=count+1;
       }
    }if(count>max_count){
        max_count=count;
        max=arr[i];
    }

    }if(max_count==1){
        printf("-1");
    }else{
    printf("%d",max);}

    return 0;
}